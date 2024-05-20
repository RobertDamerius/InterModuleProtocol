#include "IMP_DriverInfoRequestEncode.h"
#include <InterModuleProtocol.hpp>


void IMP_CreateDriverInfoRequestEncode(void){}

void IMP_DeleteDriverInfoRequestEncode(void){}

void IMP_OutputDriverInfoRequestEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp){
    IMP::InfoRequestMessage msg;
    msg.timestamp = timestamp;
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

