/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_RequestorType_H_
#define	_RequestorType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BasicVehicleRole.h"
#include "RequestSubRole.h"
#include "RequestImportanceLevel.h"
#include "Iso3833VehicleType.h"
#include "VehicleType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegionalExtension;

/* RequestorType */
typedef struct RequestorType {
	BasicVehicleRole_t	 role;
	RequestSubRole_t	*subrole	/* OPTIONAL */;
	RequestImportanceLevel_t	*request	/* OPTIONAL */;
	Iso3833VehicleType_t	*iso3883	/* OPTIONAL */;
	VehicleType_t	*hpmsType	/* OPTIONAL */;
	struct RegionalExtension	*regional	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RequestorType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestorType;
extern asn_SEQUENCE_specifics_t asn_SPC_RequestorType_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestorType_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _RequestorType_H_ */
#include <asn_internal.h>
