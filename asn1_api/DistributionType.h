/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_DistributionType_H_
#define	_DistributionType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DistributionType */
typedef OCTET_STRING_t	 DistributionType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DistributionType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DistributionType;
asn_struct_free_f DistributionType_free;
asn_struct_print_f DistributionType_print;
asn_constr_check_f DistributionType_constraint;
ber_type_decoder_f DistributionType_decode_ber;
der_type_encoder_f DistributionType_encode_der;
xer_type_decoder_f DistributionType_decode_xer;
xer_type_encoder_f DistributionType_encode_xer;
oer_type_decoder_f DistributionType_decode_oer;
oer_type_encoder_f DistributionType_encode_oer;
per_type_decoder_f DistributionType_decode_uper;
per_type_encoder_f DistributionType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DistributionType_H_ */
#include <asn_internal.h>
