#include "IMP_DriverConvexPolygonEncode.h"
#include <InterModuleProtocol.hpp>


void IMP_CreateDriverConvexPolygonEncode(void){}

void IMP_DeleteDriverConvexPolygonEncode(void){}

void IMP_OutputDriverConvexPolygonEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t maxSegmentIndex, uint8_t segmentIndex, double* originLLA, double* polygons, uint16_t maxNumPolygons, uint8_t* numVertices, uint16_t* ids, uint8_t* classifications, double* velocitiesNorth, double* velocitiesEast, double* velocitiesYawRate, uint16_t numPolygons){
    IMP::ConvexPolygonMessage msg;
    msg.timestamp = timestamp;
    msg.maxSegmentIndex = maxSegmentIndex;
    msg.segmentIndex = segmentIndex;
    msg.latitude = originLLA[0];
    msg.longitude = originLLA[1];
    msg.altitude = originLLA[2];
    const uint32_t maxNumVertices = 255;
    const uint32_t stridePolygon = 510; // 2 * maxNumVertices
    for(uint32_t p = 0, offsetP = 0; (p < (uint32_t)maxNumPolygons) && (p < (uint32_t)numPolygons); p++, offsetP += stridePolygon){
        if(numVertices[p]){
            msg.polygons.push_back(IMP::ConvexPolygon());
            for(uint32_t v = 0, offset = offsetP; (v < maxNumVertices) && (v < (uint32_t)numVertices[p]); v++, offset += 2){
                msg.polygons.back().vertices.push_back(std::array<double, 2>({polygons[offset], polygons[offset + 1]}));
            }
            msg.polygons.back().polygonID = ids[p];
            msg.polygons.back().classification = classifications[p];
            msg.polygons.back().velocityNorth = velocitiesNorth[p];
            msg.polygons.back().velocityEast = velocitiesEast[p];
            msg.polygons.back().yawRate = velocitiesYawRate[p];
        }
    }
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

