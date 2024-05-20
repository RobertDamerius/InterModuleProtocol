#pragma once


#include <cstdint>


/**
 *  @brief Create the guidance encode driver.
 */
extern void IMP_CreateDriverGuidanceEncode(void);

/**
 *  @brief Delete the guidance encode driver.
 */
extern void IMP_DeleteDriverGuidanceEncode(void);

/**
 *  @brief Output function for the guidance encode driver.
 *  @param [out] bytes Buffer where to store the encoded message.
 *  @param [out] length Length of the encoded message.
 *  @param [in] maxNumBytes Maximum number of bytes that can be written to the buffer (bytes).
 *  @param [in] timestamp Message timestamp (UTC seconds of the day).
 *  @param [in] representation Array of 11 representations (0: 4 byte, 1: 8 byte).
 *  @param [in] availability Array of 13 availability flags (0: not available, 1: availabe (z), 2: available (xy), 3: available(xyz)).
 *  @param [in] state Array of 32 values representing the state.
 */
extern void IMP_OutputDriverGuidanceEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t* representation, uint8_t* availability, double* state);

