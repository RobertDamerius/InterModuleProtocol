#pragma once


#include <cstdint>


/**
 *  @brief Create the info response encode driver.
 */
extern void IMP_CreateDriverInfoResponseEncode(void);

/**
 *  @brief Delete the info response encode driver.
 */
extern void IMP_DeleteDriverInfoResponseEncode(void);

/**
 *  @brief Output function for the info response encode driver.
 *  @param[out] bytes Buffer where to store the encoded message.
 *  @param[out] length Length of the encoded message.
 *  @param[in] maxNumBytes Maximum number of bytes that can be written to the buffer (bytes).
 *  @param[in] timestamp Message timestamp (UTC seconds of the day).
 *  @param[in] dimension Dimension of the default vehicle cuboid in meters (body-frame).
 *  @param[in] offset Offset from body-frame origin to cuboid in meters (body-frame).
 *  @param[in] textVehicleName Text buffer containing the name of the vehicle.
 *  @param[in] textVehicleNameLength Length of the actual text in the text buffer.
 *  @param[in] textDescription Text buffer containing the optional description string.
 *  @param[in] textDescriptionLength Length of the actual text in the text buffer.
 *  @param[in] maxTextLength Maximum length of the text buffer for both vehicle name and description text buffers.
 */
extern void IMP_OutputDriverInfoResponseEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, double* dimension, double* offset, uint8_t* textVehicleName, uint32_t textVehicleNameLength, uint8_t* textDescription, uint32_t textDescriptionLength, uint32_t maxTextLength);

