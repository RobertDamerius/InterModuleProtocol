#pragma once


#include <cstdint>


/**
 *  @brief Create the info request decode driver.
 */
extern void IMP_CreateDriverInfoRequestDecode(void);

/**
 *  @brief Delete the info request decode driver.
 */
extern void IMP_DeleteDriverInfoRequestDecode(void);

/**
 *  @brief Output function for the info request decode driver.
 *  @param [in] bytes Buffer containing the message to be decoded (size must be at least 268).
 *  @param [in] length Length of the message to be decoded.
 *  @param [out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param [out] timestamp Message timestamp (UTC seconds of the day).
 */
extern void IMP_OutputDriverInfoRequestDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp);

