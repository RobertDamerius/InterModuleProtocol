#include "DriverInfoResponseDecode.h"
#include <InterModuleProtocol.hpp>
#include <cstring>


void CreateDriverInfoResponseDecode(void){}

void DeleteDriverInfoResponseDecode(void){}

void OutputDriverInfoResponseDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, double* dimension, double* offset, uint8_t* textVehicleName, uint8_t* textDescription, uint32_t maxTextLength){
    *timestamp = 0.0;
    dimension[0] = 0.0;
    dimension[1] = 0.0;
    dimension[2] = 0.0;
    offset[0] = 0.0;
    offset[1] = 0.0;
    offset[2] = 0.0;
    memset(&textVehicleName[0], 0x00, maxTextLength);
    memset(&textDescription[0], 0x00, maxTextLength);
    IMP::InfoResponseMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
    dimension[0] = msg.dimension[0];
    dimension[1] = msg.dimension[1];
    dimension[2] = msg.dimension[2];
    offset[0] = msg.offset[0];
    offset[1] = msg.offset[1];
    offset[2] = msg.offset[2];
    for(uint32_t n = 0; (n < maxTextLength) && (n < (uint32_t)msg.vehicleName.size()); n++){
        textVehicleName[n] = (uint8_t)msg.vehicleName[n];
    }
    for(uint32_t n = 0; (n < maxTextLength) && (n < (uint32_t)msg.description.size()); n++){
        textDescription[n] = (uint8_t)msg.description[n];
    }
}

