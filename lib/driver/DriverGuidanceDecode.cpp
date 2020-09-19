#include "DriverGuidanceDecode.h"
#include <InterModuleProtocol.hpp>
#include <cstring>


void CreateDriverGuidanceDecode(void){}

void DeleteDriverGuidanceDecode(void){}

void OutputDriverGuidanceDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* representation, uint8_t* availability, double* state){
    *timestamp = 0.0;
    memset(&representation[0], 0, 11);
    memset(&availability[0], 0, 13);
    state[0] = state[1] = state[2] = state[3] = state[4] = state[5] = state[6] = state[7] = state[8] = state[9] = state[10] = state[11] = state[12] = state[13] = state[14] = state[15] = state[16] = state[17] = state[18] = state[19] = state[20] = state[21] = state[22] = state[23] = state[24] = state[25] = state[26] = state[27] = state[28] = state[29] = state[30] = state[31] = 0.0;
    IMP::GuidanceMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
    state[0] = msg.positionLatitude;
    state[1] = msg.positionLongitude;
    state[2] = msg.positionAltitude;
    state[3] = msg.positionNorth;
    state[4] = msg.positionEast;
    state[5] = msg.positionDown;
    state[6] = msg.orientationQuaternionW;
    state[7] = msg.orientationQuaternionX;
    state[8] = msg.orientationQuaternionY;
    state[9] = msg.orientationQuaternionZ;
    state[10] = msg.orientationRoll;
    state[11] = msg.orientationPitch;
    state[12] = msg.orientationYaw;
    state[13] = msg.velocityNorth;
    state[14] = msg.velocityEast;
    state[15] = msg.velocityDown;
    state[16] = msg.velocityU;
    state[17] = msg.velocityV;
    state[18] = msg.velocityW;
    state[19] = msg.velocityP;
    state[20] = msg.velocityQ;
    state[21] = msg.velocityR;
    state[22] = msg.accelerationNorth;
    state[23] = msg.accelerationEast;
    state[24] = msg.accelerationDown;
    state[25] = msg.accelerationX;
    state[26] = msg.accelerationY;
    state[27] = msg.accelerationZ;
    state[28] = msg.courseOverGround;
    state[29] = msg.speedOverGround;
    state[30] = msg.angleOfAttack;
    state[31] = msg.sideSlipAngle;
    representation[0] = (uint8_t)msg.configuration.positionLLA.representation;
    availability[0] = (uint8_t)msg.configuration.positionLLA.available;
    representation[1] = (uint8_t)msg.configuration.positionNED.representation;
    availability[1] = (uint8_t)msg.configuration.positionNED.available;
    representation[2] = (uint8_t)msg.configuration.orientationQuaternion.representation;
    availability[2] = (uint8_t)msg.configuration.orientationQuaternion.available;
    representation[3] = (uint8_t)msg.configuration.orientationRollPitchYaw.representation;
    availability[3] = (uint8_t)msg.configuration.orientationRollPitchYaw.available;
    representation[4] = (uint8_t)msg.configuration.velocityNEDUVW.representation;
    availability[4] = (uint8_t)msg.configuration.velocityNEDUVW.availableE;
    availability[5] = (uint8_t)msg.configuration.velocityNEDUVW.availableB;
    representation[5] = (uint8_t)msg.configuration.velocityPQR.representation;
    availability[6] = (uint8_t)msg.configuration.velocityPQR.available;
    representation[6] = (uint8_t)msg.configuration.accelerationNEDXYZ.representation;
    availability[7] = (uint8_t)msg.configuration.accelerationNEDXYZ.availableE;
    availability[8] = (uint8_t)msg.configuration.accelerationNEDXYZ.availableB;
    representation[7] = (uint8_t)msg.configuration.courseOverGround.representation;
    availability[9] = (uint8_t)msg.configuration.courseOverGround.available;
    representation[8] = (uint8_t)msg.configuration.speedOverGround.representation;
    availability[10] = (uint8_t)msg.configuration.speedOverGround.available;
    representation[9] = (uint8_t)msg.configuration.angleOfAttack.representation;
    availability[11] = (uint8_t)msg.configuration.angleOfAttack.available;
    representation[10] = (uint8_t)msg.configuration.sideSlipAngle.representation;
    availability[12] = (uint8_t)msg.configuration.sideSlipAngle.available;
}

