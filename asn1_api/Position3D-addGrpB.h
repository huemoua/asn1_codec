/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_Position3D_addGrpB_H_
#define	_Position3D_addGrpB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LatitudeDMS2.h"
#include "LongitudeDMS2.h"
#include "AddGrpB_Elevation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Position3D-addGrpB */
typedef struct Position3D_addGrpB {
	LatitudeDMS2_t	 latitude;
	LongitudeDMS2_t	 longitude;
	AddGrpB_Elevation_t	 elevation;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Position3D_addGrpB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Position3D_addGrpB;

#ifdef __cplusplus
}
#endif

#endif	/* _Position3D_addGrpB_H_ */
#include <asn_internal.h>
