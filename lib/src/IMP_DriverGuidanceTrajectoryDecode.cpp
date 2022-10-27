#include "IMP_DriverGuidanceTrajectoryDecode.h"
#include <InterModuleProtocol.hpp>
#include <cstring>


void IMP_CreateDriverGuidanceTrajectoryDecode(void){}

void IMP_DeleteDriverGuidanceTrajectoryDecode(void){}

void IMP_OutputDriverGuidanceTrajectoryDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, int32_t* startTimeYearUTC, int32_t* startTimeMonthUTC, int32_t* startTimeDayUTC, double* startTimeSecondsUTC, double* deltaTime, uint8_t* representation, uint8_t* availability, double* stateMatrix, uint32_t maxNumPoints, uint32_t* numPoints){
    *timestamp = 0.0;
    *startTimeYearUTC = 0;
    *startTimeMonthUTC = 0;
    *startTimeDayUTC = 0;
    *startTimeSecondsUTC = 0.0;
    *deltaTime = 0.0;
    memset(&representation[0], 0, 11);
    memset(&availability[0], 0, 13);
    *numPoints = 0;
    IMP::GuidanceTrajectoryMessage msg;
    *numDecodedBytes = msg.Decode(&bytes[0], length);
    if(*numDecodedBytes < 0){
        return;
    }
    *timestamp = msg.timestamp;
    *startTimeYearUTC = msg.startTimeYearUTC;
    *startTimeMonthUTC = msg.startTimeMonthUTC;
    *startTimeDayUTC = msg.startTimeDayUTC;
    *startTimeSecondsUTC = msg.startTimeSecondsUTC;
    *deltaTime = msg.deltaTime;
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
    *numPoints = (uint32_t)msg.points.size();
    *numPoints = (*numPoints > maxNumPoints) ? maxNumPoints : *numPoints;
    for(uint32_t n = 0, offset = 0; n < *numPoints; n++, offset += 32){
        stateMatrix[offset] = msg.points[n].positionLatitude;
        stateMatrix[offset + 1] = msg.points[n].positionLongitude;
        stateMatrix[offset + 2] = msg.points[n].positionAltitude;
        stateMatrix[offset + 3] = msg.points[n].positionNorth;
        stateMatrix[offset + 4] = msg.points[n].positionEast;
        stateMatrix[offset + 5] = msg.points[n].positionDown;
        stateMatrix[offset + 6] = msg.points[n].orientationQuaternionW;
        stateMatrix[offset + 7] = msg.points[n].orientationQuaternionX;
        stateMatrix[offset + 8] = msg.points[n].orientationQuaternionY;
        stateMatrix[offset + 9] = msg.points[n].orientationQuaternionZ;
        stateMatrix[offset + 10] = msg.points[n].orientationRoll;
        stateMatrix[offset + 11] = msg.points[n].orientationPitch;
        stateMatrix[offset + 12] = msg.points[n].orientationYaw;
        stateMatrix[offset + 13] = msg.points[n].velocityNorth;
        stateMatrix[offset + 14] = msg.points[n].velocityEast;
        stateMatrix[offset + 15] = msg.points[n].velocityDown;
        stateMatrix[offset + 16] = msg.points[n].velocityU;
        stateMatrix[offset + 17] = msg.points[n].velocityV;
        stateMatrix[offset + 18] = msg.points[n].velocityW;
        stateMatrix[offset + 19] = msg.points[n].velocityP;
        stateMatrix[offset + 20] = msg.points[n].velocityQ;
        stateMatrix[offset + 21] = msg.points[n].velocityR;
        stateMatrix[offset + 22] = msg.points[n].accelerationNorth;
        stateMatrix[offset + 23] = msg.points[n].accelerationEast;
        stateMatrix[offset + 24] = msg.points[n].accelerationDown;
        stateMatrix[offset + 25] = msg.points[n].accelerationX;
        stateMatrix[offset + 26] = msg.points[n].accelerationY;
        stateMatrix[offset + 27] = msg.points[n].accelerationZ;
        stateMatrix[offset + 28] = msg.points[n].courseOverGround;
        stateMatrix[offset + 29] = msg.points[n].speedOverGround;
        stateMatrix[offset + 30] = msg.points[n].angleOfAttack;
        stateMatrix[offset + 31] = msg.points[n].sideSlipAngle;
    }
}

