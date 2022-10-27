#pragma once


#include <cstdint>


/**
 *  @brief Create the convex polygon encode driver.
 */
extern void IMP_CreateDriverConvexPolygonEncode(void);

/**
 *  @brief Delete the convex polygon encode driver.
 */
extern void IMP_DeleteDriverConvexPolygonEncode(void);

/**
 *  @brief Output function for the convex polygon encode driver.
 *  @param [out] bytes Buffer where to store the encoded message.
 *  @param [out] length Length of the encoded message.
 *  @param [in] maxNumBytes Maximum number of bytes that can be written to the buffer (bytes).
 *  @param [in] timestamp Message timestamp (UTC seconds of the day).
 *  @param [in] maxSegmentIndex The maximum segment index number. That is the maximum number of polgon messages belonging to a polygon dataset is (maxSegmentIndex + 1).
 *  @param [in] segmentIndex The current segment index number for this message.
 *  @param [in] originLLA Latitude [rad], longitude [rad] and altitude [m] of the origin.
 *  @param [in] polygons A 2-by-255-by-np matrix containing the vertices for all polygons (column-major order) with np being the maximum number of polygons. A vertex consists of two elements (x and y).
 *  @param [in] maxNumPolygons Maximum number of polygons.
 *  @param [in] numVertices An np-by-1 vector containing the actual number of vertices per polygon in the polygon matrix.
 *  @param [in] ids An np-by-1 vector containing the unique IDs for all polygons in the polygon matrix.
 *  @param [in] classigications An np-by-1 vector containing the classifications for all polygons in the polygon matrix.
 *  @param [in] velocitiesNorth An np-by-1 vector containing the north velocities in meters per second for all polygons in the polygon matrix.
 *  @param [in] velocitiesEast An np-by-1 vector containing the east velocities in meters per second for all polygons in the polygon matrix.
 *  @param [in] velocitiesYawRate An np-by-1 vector containing the rotational rates of turn in radians per second for all polygons in the polygon matrix.
 *  @param [in] numPolygons Actual number of polygons in the polygon matrix.
 */
extern void IMP_OutputDriverConvexPolygonEncode(uint8_t* bytes, uint32_t* length, uint32_t maxNumBytes, double timestamp, uint8_t maxSegmentIndex, uint8_t segmentIndex, double* originLLA, double* polygons, uint16_t maxNumPolygons, uint8_t* numVertices, uint16_t* ids, uint8_t* classifications, double* velocitiesNorth, double* velocitiesEast, double* velocitiesYawRate, uint16_t numPolygons);

