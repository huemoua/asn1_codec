/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_EciesP256EncryptedKey_H_
#define	_EciesP256EncryptedKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EccP256CurvePoint.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EciesP256EncryptedKey */
typedef struct EciesP256EncryptedKey {
	EccP256CurvePoint_t	 v;
	OCTET_STRING_t	 c;
	OCTET_STRING_t	 t;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EciesP256EncryptedKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EciesP256EncryptedKey;
extern asn_SEQUENCE_specifics_t asn_SPC_EciesP256EncryptedKey_specs_1;
extern asn_TYPE_member_t asn_MBR_EciesP256EncryptedKey_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EciesP256EncryptedKey_H_ */
#include <asn_internal.h>
