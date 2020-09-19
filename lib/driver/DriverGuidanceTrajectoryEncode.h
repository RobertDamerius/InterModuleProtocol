#pragma once


#include <cstdint>


/**
 *  @brief Create the guidance trajectory encode driver.
 */
extern void CreateDriverGuidanceTrajectoryEncode(void);

/**
 *  @brief Delete the guidance trajectory encode driver.
 */
extern void DeleteDriverGuidanceTrajectoryEncode(void);

/**
 *  @brief Output function for the guidance trajectory encode driver.
 *  @param [out] bytes Buffer where to store the encoded message.
 *  @param [out] length Length of the encoded message.
 *  @param [in] maxNumBytes Maximum number of bytes that can be written to the output buffer.
 *  @param [in] timestamp Message timestamp (UTC seconds of the day).
 *  @param [in] startTimeYearUTC Start time for the trajectory: year (UTC).
 *  @param [in] startTimeMonthUTC Start time for the trajectory: month (UTC), range [1, 12].
 *  @param [in] startTimeDayUTC Start time for the trajectory: day (UTC), range [1, 31].
 *  @param [in] startTimeSecondsUTC Start time for the trajectory: seconds of the day (UTC).
 *  @param [in] deltaTime Time difference from one state point to another in seconds.
 *  @param [in] representation Array of 11 representations (0: 4 byte, 1: 8 byte).
 *  @param [in] availability Array of 13 availability flags (0: not available, 1: availabe (z), 2: available (xy), 3: available(xyz)).
 *  @param [in] stateMatrix 32-by-N state matrix in column-major order containing the state points with N being the number of state points.
 *  @param [in] numPoints Number of state points inside the state matrix.
 */
extern void OutputDriverGuidanceTrajectoryEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, int32_t startTimeYearUTC, int32_t startTimeMonthUTC, int32_t startTimeDayUTC, double startTimeSecondsUTC, double deltaTime, uint8_t* representation, uint8_t* availability, double* stateMatrix, uint32_t numPoints);

