/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_SpecialVehicleExtensions_H_
#define	_SpecialVehicleExtensions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EmergencyDetails;
struct EventDescription;
struct TrailerData;

/* SpecialVehicleExtensions */
typedef struct SpecialVehicleExtensions {
	struct EmergencyDetails	*vehicleAlerts	/* OPTIONAL */;
	struct EventDescription	*description	/* OPTIONAL */;
	struct TrailerData	*trailers	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpecialVehicleExtensions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialVehicleExtensions;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EmergencyDetails.h"
#include "EventDescription.h"
#include "TrailerData.h"

#endif	/* _SpecialVehicleExtensions_H_ */
#include <asn_internal.h>
