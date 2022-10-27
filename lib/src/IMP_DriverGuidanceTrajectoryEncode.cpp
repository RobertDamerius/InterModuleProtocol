#include "IMP_DriverGuidanceTrajectoryEncode.h"
#include <InterModuleProtocol.hpp>


#define CLAMP(x, lo, hi) ((x < lo) ? lo : ((x > hi) ? hi : x))


void IMP_CreateDriverGuidanceTrajectoryEncode(void){}

void IMP_DeleteDriverGuidanceTrajectoryEncode(void){}

void IMP_OutputDriverGuidanceTrajectoryEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, int32_t startTimeYearUTC, int32_t startTimeMonthUTC, int32_t startTimeDayUTC, double startTimeSecondsUTC, double deltaTime, uint8_t* representation, uint8_t* availability, double* stateMatrix, uint32_t maxNumPoints, uint32_t numPoints){
    IMP::GuidanceTrajectoryMessage msg;
    msg.timestamp = timestamp;
    msg.startTimeYearUTC = (startTimeYearUTC > 32767) ? 32767: startTimeYearUTC;
    msg.startTimeMonthUTC = CLAMP(startTimeMonthUTC, 1, 12);
    msg.startTimeDayUTC = CLAMP(startTimeDayUTC, 1, 31);
    msg.startTimeSecondsUTC = (startTimeSecondsUTC < 0.0) ? 0.0 : startTimeSecondsUTC;
    msg.deltaTime = (deltaTime < 0.0) ? 0.0 : deltaTime;
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
    for(uint32_t n = 0, offset = 0; (n < numPoints) && (n < maxNumPoints); n++, offset += 32){
        msg.points.push_back(IMP::State());
        msg.points.back().positionLatitude = stateMatrix[offset];
        msg.points.back().positionLongitude = stateMatrix[offset + 1];
        msg.points.back().positionAltitude = stateMatrix[offset + 2];
        msg.points.back().positionNorth = stateMatrix[offset + 3];
        msg.points.back().positionEast = stateMatrix[offset + 4];
        msg.points.back().positionDown = stateMatrix[offset + 5];
        msg.points.back().orientationQuaternionW = stateMatrix[offset + 6];
        msg.points.back().orientationQuaternionX = stateMatrix[offset + 7];
        msg.points.back().orientationQuaternionY = stateMatrix[offset + 8];
        msg.points.back().orientationQuaternionZ = stateMatrix[offset + 9];
        msg.points.back().orientationRoll = stateMatrix[offset + 10];
        msg.points.back().orientationPitch = stateMatrix[offset + 11];
        msg.points.back().orientationYaw = stateMatrix[offset + 12];
        msg.points.back().velocityNorth = stateMatrix[offset + 13];
        msg.points.back().velocityEast = stateMatrix[offset + 14];
        msg.points.back().velocityDown = stateMatrix[offset + 15];
        msg.points.back().velocityU = stateMatrix[offset + 16];
        msg.points.back().velocityV = stateMatrix[offset + 17];
        msg.points.back().velocityW = stateMatrix[offset + 18];
        msg.points.back().velocityP = stateMatrix[offset + 19];
        msg.points.back().velocityQ = stateMatrix[offset + 20];
        msg.points.back().velocityR = stateMatrix[offset + 21];
        msg.points.back().accelerationNorth = stateMatrix[offset + 22];
        msg.points.back().accelerationEast = stateMatrix[offset + 23];
        msg.points.back().accelerationDown = stateMatrix[offset + 24];
        msg.points.back().accelerationX = stateMatrix[offset + 25];
        msg.points.back().accelerationY = stateMatrix[offset + 26];
        msg.points.back().accelerationZ = stateMatrix[offset + 27];
        msg.points.back().courseOverGround = stateMatrix[offset + 28];
        msg.points.back().speedOverGround = stateMatrix[offset + 29];
        msg.points.back().angleOfAttack = stateMatrix[offset + 30];
        msg.points.back().sideSlipAngle = stateMatrix[offset + 31];
    }
    *length = 0;
    int result = msg.Encode(&bytes[0], maxNumBytes);
    if(result > 0){
        *length = (uint32_t)result;
    }
}

