#pragma once


#include <cstdint>


/**
 *  @brief Create the log decode driver.
 */
extern void IMP_CreateDriverLogDecode(void);

/**
 *  @brief Delete the log decode driver.
 */
extern void IMP_DeleteDriverLogDecode(void);

/**
 *  @brief Output function for the log decode driver.
 *  @param [in] bytes Buffer containing the message to be decoded (size must be at least 268).
 *  @param [in] length Length of the message to be decoded.
 *  @param [out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param [out] timestamp Message timestamp (UTC seconds of the day).
 *  @param [out] color Color of the log message (3 bytes indicating red, green and blue component).
 *  @param [out] text Buffer where to store the text.
 *  @param [in] maxTextLength Maximum length of the text buffer.
 */
extern void IMP_OutputDriverLogDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* color, uint8_t* text, uint32_t maxTextLength);

