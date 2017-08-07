/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_CountryAndRegions_H_
#define	_CountryAndRegions_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CountryOnly.h"
#include "SequenceOfUint8.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountryAndRegions */
typedef struct CountryAndRegions {
	CountryOnly_t	 countryOnly;
	SequenceOfUint8_t	 regions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountryAndRegions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountryAndRegions;
extern asn_SEQUENCE_specifics_t asn_SPC_CountryAndRegions_specs_1;
extern asn_TYPE_member_t asn_MBR_CountryAndRegions_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CountryAndRegions_H_ */
#include <asn_internal.h>
