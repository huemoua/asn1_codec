/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "IntersectionSituationData.h"

static int
memb_bundleNumber_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_bundleNumber_constr_6 GCC_NOTUSED = {
	{ 2, 1 }	/* (1..32767) */,
	-1};
static asn_per_constraints_t asn_PER_memb_bundleNumber_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32767 }	/* (1..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_IntersectionSituationData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, dialogID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiDialogID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dialogID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, seqID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiSequenceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"seqID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, groupID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GroupID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"groupID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, requestID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"requestID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, bundleNumber),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bundleNumber_constraint_1,
		&asn_OER_memb_bundleNumber_constr_6,
		&asn_PER_memb_bundleNumber_constr_6,
		0,
		"bundleNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct IntersectionSituationData, timeToLive),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToLive,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"timeToLive"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, serviceRegion),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeoRegion,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"serviceRegion"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationData, intersectionRecord),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"intersectionRecord"
		},
};
static const int asn_MAP_IntersectionSituationData_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_IntersectionSituationData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntersectionSituationData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dialogID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* seqID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* groupID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* requestID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bundleNumber */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* timeToLive */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* serviceRegion */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* intersectionRecord */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntersectionSituationData_specs_1 = {
	sizeof(struct IntersectionSituationData),
	offsetof(struct IntersectionSituationData, _asn_ctx),
	asn_MAP_IntersectionSituationData_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_IntersectionSituationData_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntersectionSituationData = {
	"IntersectionSituationData",
	"IntersectionSituationData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_oer,
	SEQUENCE_encode_oer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IntersectionSituationData_tags_1,
	sizeof(asn_DEF_IntersectionSituationData_tags_1)
		/sizeof(asn_DEF_IntersectionSituationData_tags_1[0]), /* 1 */
	asn_DEF_IntersectionSituationData_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntersectionSituationData_tags_1)
		/sizeof(asn_DEF_IntersectionSituationData_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_IntersectionSituationData_1,
	8,	/* Elements count */
	&asn_SPC_IntersectionSituationData_specs_1	/* Additional specs */
};

