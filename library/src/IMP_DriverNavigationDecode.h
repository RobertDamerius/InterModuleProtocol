#pragma once


#include <cstdint>


/**
 *  @brief Create the navigation decode driver.
 */
extern void IMP_CreateDriverNavigationDecode(void);

/**
 *  @brief Delete the navigation decode driver.
 */
extern void IMP_DeleteDriverNavigationDecode(void);

/**
 *  @brief Output function for the navigation decode driver.
 *  @param[in] bytes Buffer containing the message to be decoded.
 *  @param[in] length Length of the message to be decoded.
 *  @param[out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param[out] timestamp Message timestamp (UTC seconds of the day).
 *  @param[out] representation Array of 11 representations (0: 4 byte, 1: 8 byte).
 *  @param[out] availability Array of 13 availability flags (0: not available, 1: availabe (z), 2: available (xy), 3: available(xyz)).
 *  @param[out] state Array of 32 values representing the state.
 */
extern void IMP_OutputDriverNavigationDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* representation, uint8_t* availability, double* state);

