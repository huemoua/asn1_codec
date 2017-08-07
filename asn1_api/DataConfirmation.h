/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_DataConfirmation_H_
#define	_DataConfirmation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SemiDialogID.h"
#include "SemiSequenceID.h"
#include "GroupID.h"
#include "TemporaryID.h"
#include "Sha256Hash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DataConfirmation */
typedef struct DataConfirmation {
	SemiDialogID_t	 dialogID;
	SemiSequenceID_t	 seqID;
	GroupID_t	 groupID;
	TemporaryID_t	 requestID;
	Sha256Hash_t	 hash;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataConfirmation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataConfirmation;

#ifdef __cplusplus
}
#endif

#endif	/* _DataConfirmation_H_ */
#include <asn_internal.h>
