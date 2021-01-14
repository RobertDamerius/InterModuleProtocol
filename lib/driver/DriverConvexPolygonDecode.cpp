#include "DriverConvexPolygonDecode.h"
#include <InterModuleProtocol.hpp>
#include <cstring>


void CreateDriverConvexPolygonDecode(void){}

void DeleteDriverConvexPolygonDecode(void){}

void OutputDriverConvexPolygonDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* maxSegmentIndex, uint8_t* segmentIndex, double* originLLA, double* polygons, uint16_t maxNumPolygons, uint8_t* numVertices, uint16_t* ids, uint8_t* classifications, double* velocitiesNorth, double* velocitiesEast, double* velocitiesYawRate, uint16_t* numPolygons){
    *timestamp = 0.0;
    originLLA[0] = 0.0;
    originLLA[1] = 0.0;
    originLLA[2] = 0.0;
    memset(numVertices, 0, maxNumPolygons);
    *numPolygons = 0;
    IMP::ConvexPolygonMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
    *maxSegmentIndex = msg.maxSegmentIndex;
    *segmentIndex = msg.segmentIndex;
    originLLA[0] = msg.latitude;
    originLLA[1] = msg.longitude;
    originLLA[2] = msg.altitude;
    *numPolygons = (uint16_t)msg.polygons.size();
    *numPolygons = (*numPolygons > maxNumPolygons) ? maxNumPolygons : *numPolygons;
    const uint32_t maxNumVertices = 255;
    const uint32_t stridePolygon = 510; // 2 * 255
    for(uint32_t p = 0, offsetP = 0; p < (uint32_t)*numPolygons; p++, offsetP += stridePolygon){
        numVertices[p] = (uint8_t)(((uint32_t)msg.polygons[p].vertices.size() > maxNumVertices) ? maxNumVertices : (uint32_t)msg.polygons[p].vertices.size());
        ids[p] = msg.polygons[p].polygonID;
        classifications[p] = msg.polygons[p].classification;
        velocitiesNorth[p] = msg.polygons[p].velocityNorth;
        velocitiesEast[p] = msg.polygons[p].velocityEast;
        velocitiesYawRate[p] = msg.polygons[p].yawRate;
        for(uint32_t v = 0, offset = offsetP; v < (uint32_t)numVertices[p]; v++, offset += 2){
            polygons[offset] = msg.polygons[p].vertices[v][0];
            polygons[offset + 1] = msg.polygons[p].vertices[v][1];
        }
    }
}

