/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_ComputedLane_H_
#define	_ComputedLane_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneID.h"
#include "DSRC_Angle.h"
#include "Scale-B12.h"
#include "DrivenLineOffsetSm.h"
#include "DrivenLineOffsetLg.h"
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum offsetXaxis_PR {
	offsetXaxis_PR_NOTHING,	/* No components present */
	offsetXaxis_PR_small,
	offsetXaxis_PR_large
} offsetXaxis_PR;
typedef enum offsetYaxis_PR {
	offsetYaxis_PR_NOTHING,	/* No components present */
	offsetYaxis_PR_small,
	offsetYaxis_PR_large
} offsetYaxis_PR;

/* Forward declarations */
struct RegionalExtension;

/* ComputedLane */
typedef struct ComputedLane {
	LaneID_t	 referenceLaneId;
	struct offsetXaxis {
		offsetXaxis_PR present;
		union ComputedLane__offsetXaxis_u {
			DrivenLineOffsetSm_t	 small;
			DrivenLineOffsetLg_t	 large;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} offsetXaxis;
	struct offsetYaxis {
		offsetYaxis_PR present;
		union ComputedLane__offsetYaxis_u {
			DrivenLineOffsetSm_t	 small;
			DrivenLineOffsetLg_t	 large;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} offsetYaxis;
	DSRC_Angle_t	*rotateXY	/* OPTIONAL */;
	Scale_B12_t	*scaleXaxis	/* OPTIONAL */;
	Scale_B12_t	*scaleYaxis	/* OPTIONAL */;
	struct regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ComputedLane_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ComputedLane;
extern asn_SEQUENCE_specifics_t asn_SPC_ComputedLane_specs_1;
extern asn_TYPE_member_t asn_MBR_ComputedLane_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _ComputedLane_H_ */
#include <asn_internal.h>
