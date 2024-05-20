#pragma once


#include <cstdint>


/**
 *  @brief Create the log encode driver.
 */
extern void IMP_CreateDriverLogEncode(void);

/**
 *  @brief Delete the log encode driver.
 */
extern void IMP_DeleteDriverLogEncode(void);

/**
 *  @brief Output function for the log encode driver.
 *  @param [out] bytes Buffer where to store the encoded message.
 *  @param [out] length Length of the encoded message.
 *  @param [in] maxNumBytes Maximum number of bytes that can be written to the buffer (bytes).
 *  @param [in] timestamp Message timestamp (UTC seconds of the day).
 *  @param [in] color Color of the log message (3 bytes indicating red, green and blue component).
 *  @param [in] text Buffer containing the text that should be encoded.
 *  @param [in] maxTextLength Maximum length of the text buffer.
 *  @param [in] textLength Length of the actual text in the text buffer.
 */
extern void IMP_OutputDriverLogEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t* color, uint8_t* text, uint32_t maxTextLength, uint32_t textLength);

