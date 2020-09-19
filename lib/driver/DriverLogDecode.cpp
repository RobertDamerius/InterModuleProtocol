#include "DriverLogDecode.h"
#include <InterModuleProtocol.hpp>
#include <cstring>


void CreateDriverLogDecode(void){}

void DeleteDriverLogDecode(void){}

void OutputDriverLogDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* color, uint8_t* text, uint32_t maxTextLength){
    *timestamp = 0.0;
    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    memset(&text[0], 0x00, maxTextLength);
    IMP::LogMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
    color[0] = msg.color[0];
    color[1] = msg.color[1];
    color[2] = msg.color[2];
    for(uint32_t n = 0; (n < maxTextLength) && (n < (uint32_t)msg.text.size()); n++){
        text[n] = (uint8_t)msg.text[n];
    }
}

