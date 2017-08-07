/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_AccelerationConfidence_H_
#define	_AccelerationConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccelerationConfidence {
	AccelerationConfidence_unavailable	= 0,
	AccelerationConfidence_accl_100_00	= 1,
	AccelerationConfidence_accl_010_00	= 2,
	AccelerationConfidence_accl_005_00	= 3,
	AccelerationConfidence_accl_001_00	= 4,
	AccelerationConfidence_accl_000_10	= 5,
	AccelerationConfidence_accl_000_05	= 6,
	AccelerationConfidence_accl_000_01	= 7
} e_AccelerationConfidence;

/* AccelerationConfidence */
typedef long	 AccelerationConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccelerationConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccelerationConfidence;
extern asn_INTEGER_specifics_t asn_SPC_AccelerationConfidence_specs_1;
asn_struct_free_f AccelerationConfidence_free;
asn_struct_print_f AccelerationConfidence_print;
asn_constr_check_f AccelerationConfidence_constraint;
ber_type_decoder_f AccelerationConfidence_decode_ber;
der_type_encoder_f AccelerationConfidence_encode_der;
xer_type_decoder_f AccelerationConfidence_decode_xer;
xer_type_encoder_f AccelerationConfidence_encode_xer;
oer_type_decoder_f AccelerationConfidence_decode_oer;
oer_type_encoder_f AccelerationConfidence_encode_oer;
per_type_decoder_f AccelerationConfidence_decode_uper;
per_type_encoder_f AccelerationConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationConfidence_H_ */
#include <asn_internal.h>
