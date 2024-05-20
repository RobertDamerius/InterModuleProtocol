#pragma once


#include <cstdint>


/**
 *  @brief Create the convex polygon decode driver.
 */
extern void IMP_CreateDriverConvexPolygonDecode(void);

/**
 *  @brief Delete the convex polygon decode driver.
 */
extern void IMP_DeleteDriverConvexPolygonDecode(void);

/**
 *  @brief Output function for the convex polygon decode driver.
 *  @param[in] bytes Buffer containing the message to be decoded.
 *  @param[in] length Length of the message to be decoded.
 *  @param[out] numDecodedBytes Number of bytes that have been decoded (negative value if error occurred).
 *  @param[out] timestamp Message timestamp (UTC seconds of the day).
 *  @param[out] maxSegmentIndex The maximum segment index number. That is the maximum number of polgon messages belonging to a polygon dataset is (maxSegmentIndex + 1).
 *  @param[out] segmentIndex The current segment index number for this message.
 *  @param[out] originLLA Latitude [rad], longitude [rad] and altitude [m] of the origin.
 *  @param[out] polygons A 2-by-255-by-np matrix containing the vertices for all polygons (column-major order) with np being the maximum number of polygons.
 *  @param[in] maxNumPolygons Maximum number of polygons.
 *  @param[out] numVertices An np-by-1 vector containing the actual number of vertices per polygon in the polygon matrix.
 *  @param[out] ids An np-by-1 vector containing the unique IDs for all polygons in the polygon matrix.
 *  @param[out] classigications An np-by-1 vector containing the classifications for all polygons in the polygon matrix.
 *  @param[out] velocitiesNorth An np-by-1 vector containing the north velocities in meters per second for all polygons in the polygon matrix.
 *  @param[out] velocitiesEast An np-by-1 vector containing the east velocities in meters per second for all polygons in the polygon matrix.
 *  @param[out] velocitiesYawRate An np-by-1 vector containing the rotational rates of turn in radians per second for all polygons in the polygon matrix.
 *  @param[out] numPolygons Actual number of polygons in the polygon matrix.
 */
extern void IMP_OutputDriverConvexPolygonDecode(uint8_t* bytes, uint32_t length, int32_t* numDecodedBytes, double* timestamp, uint8_t* maxSegmentIndex, uint8_t* segmentIndex, double* originLLA, double* polygons, uint16_t maxNumPolygons, uint8_t* numVertices, uint16_t* ids, uint8_t* classifications, double* velocitiesNorth, double* velocitiesEast, double* velocitiesYawRate, uint16_t* numPolygons);

