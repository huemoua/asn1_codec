/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_PartIIcontent_H_
#define	_PartIIcontent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PartII-Id.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PartIIcontent */
typedef struct PartIIcontent_151P0 {
	PartII_Id_t	 partII_Id;
	ANY_t	 partII_Value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PartIIcontent_151P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PartIIcontent_151P0;
extern asn_SEQUENCE_specifics_t asn_SPC_PartIIcontent_151P0_specs_1;
extern asn_TYPE_member_t asn_MBR_PartIIcontent_151P0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PartIIcontent_H_ */
#include <asn_internal.h>
