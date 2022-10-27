#include "IMP_DriverInfoRequestDecode.h"
#include <InterModuleProtocol.hpp>


void IMP_CreateDriverInfoRequestDecode(void){}

void IMP_DeleteDriverInfoRequestDecode(void){}

void IMP_OutputDriverInfoRequestDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp){
    *timestamp = 0.0;
    IMP::InfoRequestMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
}

