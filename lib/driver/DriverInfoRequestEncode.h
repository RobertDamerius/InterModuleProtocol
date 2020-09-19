#pragma once


#include <cstdint>


/**
 *  @brief Create the info request encode driver.
 */
extern void CreateDriverInfoRequestEncode(void);

/**
 *  @brief Delete the info request encode driver.
 */
extern void DeleteDriverInfoRequestEncode(void);

/**
 *  @brief Output function for the info request encode driver.
 *  @param [out] bytes Buffer where to store the encoded message.
 *  @param [out] length Length of the encoded message.
 *  @param [in] maxNumBytes Maximum number of bytes that can be written to the buffer (bytes).
 *  @param [in] timestamp Message timestamp (UTC seconds of the day).
 */
extern void OutputDriverInfoRequestEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp);

