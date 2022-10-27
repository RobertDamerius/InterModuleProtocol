#pragma once


#include <cstdint>


/**
 *  @brief Create the info response decode driver.
 */
extern void IMP_CreateDriverInfoResponseDecode(void);

/**
 *  @brief Delete the info response decode driver.
 */
extern void IMP_DeleteDriverInfoResponseDecode(void);

/**
 *  @brief Output function for the info response decode driver.
 *  @param [in] bytes Buffer containing the message to be decoded (size must be at least 268).
 *  @param [in] length Length of the message to be decoded.
 *  @param [out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param [out] timestamp Message timestamp (UTC seconds of the day).
 *  @param [out] dimension Dimension of the default vehicle cuboid in meters (body-frame).
 *  @param [out] offset Offset from body-frame origin to cuboid in meters (body-frame).
 *  @param [out] textVehicleName Text buffer containing the name of the vehicle.
 *  @param [out] textDescription Text buffer containing the optional description string.
 *  @param [in] maxTextLength Maximum length of the text buffer for both vehicle name and description text buffers.
 */
extern void IMP_OutputDriverInfoResponseDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, double* dimension, double* offset, uint8_t* textVehicleName, uint8_t* textDescription, uint32_t maxTextLength);

