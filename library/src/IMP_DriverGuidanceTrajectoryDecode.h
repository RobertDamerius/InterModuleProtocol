#pragma once


#include <cstdint>


/**
 *  @brief Create the guidance decode driver.
 */
extern void IMP_CreateDriverGuidanceTrajectoryDecode(void);

/**
 *  @brief Delete the guidance decode driver.
 */
extern void IMP_DeleteDriverGuidanceTrajectoryDecode(void);

/**
 *  @brief Output function for the guidance decode driver.
 *  @param[in] bytes Buffer containing the message to be decoded.
 *  @param[in] length Length of the message to be decoded.
 *  @param[out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param[out] timestamp Message timestamp (UTC seconds of the day).
 *  @param[out] startTimeYearUTC Start time for the trajectory: year (UTC).
 *  @param[out] startTimeMonthUTC Start time for the trajectory: month (UTC), range [1, 12].
 *  @param[out] startTimeDayUTC Start time for the trajectory: day (UTC), range [1, 31].
 *  @param[out] startTimeSecondsUTC Start time for the trajectory: seconds of the day (UTC).
 *  @param[out] deltaTime Time difference from one state point to another in seconds.
 *  @param[out] representation Array of 11 representations (0: 4 byte, 1: 8 byte).
 *  @param[out] availability Array of 13 availability flags (0: not available, 1: availabe (z), 2: available (xy), 3: available(xyz)).
 *  @param[out] stateMatrix 32-by-N state matrix buffer in column-major order containing the state points with N being the maximum number of state points.
 *  @param[in] maxNumPoints Maximum number of state points inside the state matrix.
 *  @param[out] numPoints Number of state points inside the state matrix that belong to the decoded guidance trajectory.
 */
extern void IMP_OutputDriverGuidanceTrajectoryDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, int32_t* startTimeYearUTC, int32_t* startTimeMonthUTC, int32_t* startTimeDayUTC, double* startTimeSecondsUTC, double* deltaTime, uint8_t* representation, uint8_t* availability, double* stateMatrix, uint32_t maxNumPoints, uint32_t* numPoints);

