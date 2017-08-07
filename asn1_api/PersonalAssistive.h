/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_PersonalAssistive_H_
#define	_PersonalAssistive_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PersonalAssistive {
	PersonalAssistive_unavailable	= 0,
	PersonalAssistive_otherType	= 1,
	PersonalAssistive_vision	= 2,
	PersonalAssistive_hearing	= 3,
	PersonalAssistive_movement	= 4,
	PersonalAssistive_cognition	= 5
} e_PersonalAssistive;

/* PersonalAssistive */
typedef BIT_STRING_t	 PersonalAssistive_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PersonalAssistive_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PersonalAssistive;
asn_struct_free_f PersonalAssistive_free;
asn_struct_print_f PersonalAssistive_print;
asn_constr_check_f PersonalAssistive_constraint;
ber_type_decoder_f PersonalAssistive_decode_ber;
der_type_encoder_f PersonalAssistive_encode_der;
xer_type_decoder_f PersonalAssistive_decode_xer;
xer_type_encoder_f PersonalAssistive_encode_xer;
oer_type_decoder_f PersonalAssistive_decode_oer;
oer_type_encoder_f PersonalAssistive_encode_oer;
per_type_decoder_f PersonalAssistive_decode_uper;
per_type_encoder_f PersonalAssistive_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PersonalAssistive_H_ */
#include <asn_internal.h>
