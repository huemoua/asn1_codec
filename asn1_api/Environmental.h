/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_Environmental_H_
#define	_Environmental_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FuelConsumption.h"
#include "Emissions.h"
#include "FuelEconomy.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Environmental */
typedef struct Environmental {
	FuelConsumption_t	 fuelCon;
	Emissions_t	 emiss;
	FuelEconomy_t	 fuelEcon;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Environmental_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Environmental;
extern asn_SEQUENCE_specifics_t asn_SPC_Environmental_specs_1;
extern asn_TYPE_member_t asn_MBR_Environmental_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Environmental_H_ */
#include <asn_internal.h>
