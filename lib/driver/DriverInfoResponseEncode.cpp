#include "DriverInfoResponseEncode.h"
#include <InterModuleProtocol.hpp>


void CreateDriverInfoResponseEncode(void){}

void DeleteDriverInfoResponseEncode(void){}

void OutputDriverInfoResponseEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, double* dimension, double* offset, uint8_t* textVehicleName, uint32_t textVehicleNameLength, uint8_t* textDescription, uint32_t textDescriptionLength, uint32_t maxTextLength){
    IMP::InfoResponseMessage msg;
    msg.timestamp = timestamp;
    msg.dimension[0] = dimension[0];
    msg.dimension[1] = dimension[1];
    msg.dimension[2] = dimension[2];
    msg.offset[0] = offset[0];
    msg.offset[1] = offset[1];
    msg.offset[2] = offset[2];
    msg.vehicleName.clear();
    msg.description.clear();
    for(uint32_t n = 0; (n < textVehicleNameLength) && (n < maxTextLength); n++){
        char c = (char)textVehicleName[n];
        if(!c) break;
        msg.vehicleName.push_back(c);
    }
    for(uint32_t n = 0; (n < textDescriptionLength) && (n < maxTextLength); n++){
        char c = (char)textDescription[n];
        if(!c) break;
        msg.description.push_back(c);
    }
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

