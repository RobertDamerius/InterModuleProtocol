#include "DriverLogEncode.h"
#include <InterModuleProtocol.hpp>


void CreateDriverLogEncode(void){}

void DeleteDriverLogEncode(void){}

void OutputDriverLogEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t* color, uint8_t* text, uint32_t maxTextLength, uint32_t textLength){
    IMP::LogMessage msg;
    msg.timestamp = timestamp;
    msg.color[0] = color[0];
    msg.color[1] = color[1];
    msg.color[2] = color[2];
    msg.text.clear();
    for(uint32_t n = 0; (n < textLength) && (n < maxTextLength); n++){
        char c = (char)text[n];
        if(!c) break;
        msg.text.push_back(c);
    }
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

