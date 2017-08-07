/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "IntersectionBundle.h"

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
	
	if((value >= 1 && value <= 60)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_isdRecords_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_isdRecords_constr_4 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_type_isdRecords_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bundleNumber_constr_2 GCC_NOTUSED = {
	{ 1, 1 }	/* (1..60) */,
	-1};
static asn_per_constraints_t asn_PER_memb_bundleNumber_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (1..60) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_isdRecords_constr_4 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_memb_isdRecords_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_isdRecords_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IntersectionRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_isdRecords_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_isdRecords_specs_4 = {
	sizeof(struct isdRecords),
	offsetof(struct isdRecords, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_isdRecords_4 = {
	"isdRecords",
	"isdRecords",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_oer,
	SEQUENCE_OF_encode_oer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_isdRecords_tags_4,
	sizeof(asn_DEF_isdRecords_tags_4)
		/sizeof(asn_DEF_isdRecords_tags_4[0]) - 1, /* 1 */
	asn_DEF_isdRecords_tags_4,	/* Same as above */
	sizeof(asn_DEF_isdRecords_tags_4)
		/sizeof(asn_DEF_isdRecords_tags_4[0]), /* 2 */
	&asn_OER_type_isdRecords_constr_4,
	&asn_PER_type_isdRecords_constr_4,
	asn_MBR_isdRecords_4,
	1,	/* Single element */
	&asn_SPC_isdRecords_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IntersectionBundle_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionBundle, bundleNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bundleNumber_constraint_1,
		&asn_OER_memb_bundleNumber_constr_2,
		&asn_PER_memb_bundleNumber_constr_2,
		0,
		"bundleNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionBundle, bundleId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"bundleId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionBundle, isdRecords),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_isdRecords_4,
		memb_isdRecords_constraint_1,
		&asn_OER_memb_isdRecords_constr_4,
		&asn_PER_memb_isdRecords_constr_4,
		0,
		"isdRecords"
		},
};
static const ber_tlv_tag_t asn_DEF_IntersectionBundle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntersectionBundle_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bundleNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bundleId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* isdRecords */
};
asn_SEQUENCE_specifics_t asn_SPC_IntersectionBundle_specs_1 = {
	sizeof(struct IntersectionBundle),
	offsetof(struct IntersectionBundle, _asn_ctx),
	asn_MAP_IntersectionBundle_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntersectionBundle = {
	"IntersectionBundle",
	"IntersectionBundle",
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
	asn_DEF_IntersectionBundle_tags_1,
	sizeof(asn_DEF_IntersectionBundle_tags_1)
		/sizeof(asn_DEF_IntersectionBundle_tags_1[0]), /* 1 */
	asn_DEF_IntersectionBundle_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntersectionBundle_tags_1)
		/sizeof(asn_DEF_IntersectionBundle_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_IntersectionBundle_1,
	3,	/* Elements count */
	&asn_SPC_IntersectionBundle_specs_1	/* Additional specs */
};

