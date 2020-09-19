#include <InterModuleProtocol.hpp>


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// EXAMPLE: Encode a navigation message
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
static void ExampleEncodeNavigation(uint8_t* bytes, const uint32_t length){
    // Create a navigation message object
    IMP::NavigationMessage msg;

    // Set timestamp
    msg.timestamp = IMP::GetTimestampUTC();

    // Set configuration
    // Let's use position (lat, lon, alt) and orientation (roll, pitch, yaw), each with 8-byte representation.
    msg.configuration.positionLLA.representation = IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES;
    msg.configuration.positionLLA.available = IMP::STATE_CONFIGURATION_AVAILABILITY_XYZ;
    msg.configuration.orientationRollPitchYaw.representation = IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES;
    msg.configuration.orientationRollPitchYaw.available = IMP::STATE_CONFIGURATION_AVAILABILITY_XYZ;

    // Set state values
    msg.positionLatitude = 0.9;
    msg.positionLongitude = 0.2;
    msg.positionAltitude = 42.0;
    msg.orientationRoll = -0.1;
    msg.orientationPitch = 0.2;
    msg.orientationYaw = -0.3;

    // Encode message
    int numBytesEncoded = msg.Encode(bytes, length);
    if(numBytesEncoded < 0){
        fprintf(stderr,"Error: Encoding of navigation message failed!\n");
    }
    else{
        printf("Encoded navigation message: %d bytes\n", numBytesEncoded);
    }
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// EXAMPLE: Decode a navigation message
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
static void ExampleDecodeNavigation(const uint8_t* bytes, const uint32_t length){
    // Create a navigation message object
    IMP::NavigationMessage msg;

    // Decode message
    int numBytesDecoded = msg.Decode(bytes, length);
    if(numBytesDecoded < 0){
        fprintf(stderr,"Error: Decoding of navigation message failed!\n");
        return;
    }
    printf("Decoded navigation message: %d bytes\n", numBytesDecoded);

    // Let's print some information
    printf("\ttimestamp: %lf\n", msg.timestamp);
    printf("\tpositionLLA: representation=%d, availability=%d\n\t\tlatitude: %lf\n\t\tlongitude: %lf\n\t\taltitude: %lf\n", msg.configuration.positionLLA.representation, msg.configuration.positionLLA.available, msg.positionLatitude, msg.positionLongitude, msg.positionAltitude);
    printf("\torientationRollPitchYaw: representation=%d, availability=%d\n\t\troll: %lf\n\t\tpitch: %lf\n\t\tyaw: %lf\n\n", msg.configuration.orientationRollPitchYaw.representation, msg.configuration.orientationRollPitchYaw.available, msg.orientationRoll, msg.orientationPitch, msg.orientationYaw);
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// EXAMPLE: Encode a convex polygon message
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
static void ExampleEncodeConvexPolygons(uint8_t* bytes, const uint32_t length){
    // Create a convex polygon message object
    IMP::ConvexPolygonMessage msg;

    // Set header values
    msg.timestamp = IMP::GetTimestampUTC();
    msg.maxSegmentIndex = 0;
    msg.segmentIndex = 0;
    msg.latitude = 0.9;
    msg.longitude = 0.2;
    msg.altitude = 42.0;

    // Create some test polygons
    for(int i = 0; i < 2; i++){
        msg.polygons.push_back(IMP::ConvexPolygon());
        msg.polygons.back().polygonID = (uint16_t)i;
        msg.polygons.back().classification = 0xF0 | (uint8_t)i;
        msg.polygons.back().velocityNorth = 1.23;
        msg.polygons.back().velocityEast = 4.56;
        msg.polygons.back().yawRate = 7.89;
        msg.polygons.back().vertices.push_back(std::array<double, 2>({double(10*i) + 1.0, 1.0}));
        msg.polygons.back().vertices.push_back(std::array<double, 2>({double(10*i) - 1.0, 1.0}));
        msg.polygons.back().vertices.push_back(std::array<double, 2>({double(10*i) - 1.0,-1.0}));
        msg.polygons.back().vertices.push_back(std::array<double, 2>({double(10*i) + 1.0,-1.0}));
    }

    // Encode message
    int numBytesEncoded = msg.Encode(bytes, length);
    if(numBytesEncoded < 0){
        fprintf(stderr,"Error: Encoding of convex polygon message failed!\n");
    }
    else{
        printf("Encoded convex polygon message: %d bytes\n", numBytesEncoded);
    }
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// EXAMPLE: Decode a convex polygon message
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
static void ExampleDecodeConvexPolygons(const uint8_t* bytes, const uint32_t length){
    // Create a convex polygon message object
    IMP::ConvexPolygonMessage msg;

    // Decode message
    int numBytesDecoded = msg.Decode(bytes, length);
    if(numBytesDecoded < 0){
        fprintf(stderr,"Error: Decoding of convex polygon message failed!\n");
        return;
    }
    printf("Decoded convex polygon message: %d bytes\n", numBytesDecoded);

    // Let's print some information
    printf("\ttimestamp: %lf\n", msg.timestamp);
    printf("\tmaxSegmentIndex: %d\n", msg.maxSegmentIndex);
    printf("\tsegmentIndex: %d\n", msg.segmentIndex);
    printf("\tlatitude: %lf\n", msg.latitude);
    printf("\tlongitude: %lf\n", msg.longitude);
    printf("\taltitude: %lf\n", msg.altitude);
    printf("\tnumber of polygons: %d\n", (int)msg.polygons.size());
    for(int i = 0; i < (int)msg.polygons.size(); i++){
        printf("\t\tpolygonID: %d\n", msg.polygons[i].polygonID);
        printf("\t\tclassification: 0x%02X\n", msg.polygons[i].classification);
        printf("\t\tvelocityNorth: %lf\n", msg.polygons[i].velocityNorth);
        printf("\t\tvelocityEast: %lf\n", msg.polygons[i].velocityEast);
        printf("\t\tyawRate: %lf\n", msg.polygons[i].yawRate);
        printf("\t\tnumVertices: %d\n", (int)msg.polygons[i].vertices.size());
        for(int j = 0; j < (int)msg.polygons[i].vertices.size(); j++){
            printf("\t\t\tvertex[%d]: [%lf; %lf]\n", j, msg.polygons[i].vertices[j][0], msg.polygons[i].vertices[j][1]);
        }
    }
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// MAIN ENTRY FUNCTION: Call all examples
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(int, char**){
    // Create buffer for examples
    const uint32_t length = 1024;
    uint8_t* bytes = new uint8_t[length];

    // Encode a navigation message
    ExampleEncodeNavigation(bytes, length);

    // Decode a navigation message
    ExampleDecodeNavigation(bytes, length);

    // Encode a convex polygon message
    ExampleEncodeConvexPolygons(bytes, length);

    // Decode a convex polygon message
    ExampleDecodeConvexPolygons(bytes, length);

    delete[] bytes;
    return 0;
}

