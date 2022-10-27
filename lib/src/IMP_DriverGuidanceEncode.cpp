#include "IMP_DriverGuidanceEncode.h"
#include <InterModuleProtocol.hpp>


#define CLAMP(x, lo, hi) ((x < lo) ? lo : ((x > hi) ? hi : x))


void IMP_CreateDriverGuidanceEncode(void){}

void IMP_DeleteDriverGuidanceEncode(void){}

void IMP_OutputDriverGuidanceEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t* representation, uint8_t* availability, double* state){
    IMP::GuidanceMessage msg;
    msg.timestamp = timestamp;
    msg.positionLatitude = state[0];
    msg.positionLongitude = state[1];
    msg.positionAltitude = state[2];
    msg.positionNorth = state[3];
    msg.positionEast = state[4];
    msg.positionDown = state[5];
    msg.orientationQuaternionW = state[6];
    msg.orientationQuaternionX = state[7];
    msg.orientationQuaternionY = state[8];
    msg.orientationQuaternionZ = state[9];
    msg.orientationRoll = state[10];
    msg.orientationPitch = state[11];
    msg.orientationYaw = state[12];
    msg.velocityNorth = state[13];
    msg.velocityEast = state[14];
    msg.velocityDown = state[15];
    msg.velocityU = state[16];
    msg.velocityV = state[17];
    msg.velocityW = state[18];
    msg.velocityP = state[19];
    msg.velocityQ = state[20];
    msg.velocityR = state[21];
    msg.accelerationNorth = state[22];
    msg.accelerationEast = state[23];
    msg.accelerationDown = state[24];
    msg.accelerationX = state[25];
    msg.accelerationY = state[26];
    msg.accelerationZ = state[27];
    msg.courseOverGround = state[28];
    msg.speedOverGround = state[29];
    msg.angleOfAttack = state[30];
    msg.sideSlipAngle = state[31];
    msg.configuration.positionLLA.representation = representation[0] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.positionLLA.available = (IMP::state_configuration_availability_indicator)CLAMP(availability[0], 0, 3);
    msg.configuration.positionNED.representation = representation[1] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.positionNED.available = (IMP::state_configuration_availability_indicator)CLAMP(availability[1], 0, 3);
    msg.configuration.orientationQuaternion.representation = representation[2] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.orientationQuaternion.available = (bool)availability[2];
    msg.configuration.orientationRollPitchYaw.representation = representation[3] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.orientationRollPitchYaw.available = (IMP::state_configuration_availability_indicator)CLAMP(availability[3], 0, 3);
    msg.configuration.velocityNEDUVW.representation = representation[4] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.velocityNEDUVW.availableE = (IMP::state_configuration_availability_indicator)CLAMP(availability[4], 0, 3);
    msg.configuration.velocityNEDUVW.availableB = (IMP::state_configuration_availability_indicator)CLAMP(availability[5], 0, 3);
    msg.configuration.velocityPQR.representation = representation[5] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.velocityPQR.available = (IMP::state_configuration_availability_indicator)CLAMP(availability[6], 0, 3);
    msg.configuration.accelerationNEDXYZ.representation = representation[6] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.accelerationNEDXYZ.availableE = (IMP::state_configuration_availability_indicator)CLAMP(availability[7], 0, 3);
    msg.configuration.accelerationNEDXYZ.availableB = (IMP::state_configuration_availability_indicator)CLAMP(availability[8], 0, 3);
    msg.configuration.courseOverGround.representation = representation[7] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.courseOverGround.available = (bool)availability[9];
    msg.configuration.speedOverGround.representation = representation[8] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.speedOverGround.available = (bool)availability[10];
    msg.configuration.angleOfAttack.representation = representation[9] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.angleOfAttack.available = (bool)availability[11];
    msg.configuration.sideSlipAngle.representation = representation[10] ? IMP::STATE_CONFIGURATION_REPRESENTATION_8BYTES : IMP::STATE_CONFIGURATION_REPRESENTATION_4BYTES;
    msg.configuration.sideSlipAngle.available = (bool)availability[12];
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

