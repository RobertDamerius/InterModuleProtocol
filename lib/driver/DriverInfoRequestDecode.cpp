#include "DriverInfoRequestDecode.h"
#include <InterModuleProtocol.hpp>


void CreateDriverInfoRequestDecode(void){}

void DeleteDriverInfoRequestDecode(void){}

void OutputDriverInfoRequestDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp){
    *timestamp = 0.0;
    IMP::InfoRequestMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
}

