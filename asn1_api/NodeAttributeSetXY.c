/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "NodeAttributeSetXY.h"

static int
memb_regional_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_regional_constr_8 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_8 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_124P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_8 = {
	sizeof(struct regional),
	offsetof(struct regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_8 = {
	"regional",
	"regional",
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
	asn_DEF_regional_tags_8,
	sizeof(asn_DEF_regional_tags_8)
		/sizeof(asn_DEF_regional_tags_8[0]) - 1, /* 1 */
	asn_DEF_regional_tags_8,	/* Same as above */
	sizeof(asn_DEF_regional_tags_8)
		/sizeof(asn_DEF_regional_tags_8[0]), /* 2 */
	&asn_OER_type_regional_constr_8,
	&asn_PER_type_regional_constr_8,
	asn_MBR_regional_8,
	1,	/* Single element */
	&asn_SPC_regional_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NodeAttributeSetXY_1[] = {
	{ ATF_POINTER, 7, offsetof(struct NodeAttributeSetXY, localNode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeAttributeXYList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"localNode"
		},
	{ ATF_POINTER, 6, offsetof(struct NodeAttributeSetXY, disabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentAttributeXYList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"disabled"
		},
	{ ATF_POINTER, 5, offsetof(struct NodeAttributeSetXY, enabled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentAttributeXYList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"enabled"
		},
	{ ATF_POINTER, 4, offsetof(struct NodeAttributeSetXY, data),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneDataAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"data"
		},
	{ ATF_POINTER, 3, offsetof(struct NodeAttributeSetXY, dWidth),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dWidth"
		},
	{ ATF_POINTER, 2, offsetof(struct NodeAttributeSetXY, dElevation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dElevation"
		},
	{ ATF_POINTER, 1, offsetof(struct NodeAttributeSetXY, regional),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_regional_8,
		memb_regional_constraint_1,
		&asn_OER_memb_regional_constr_8,
		&asn_PER_memb_regional_constr_8,
		0,
		"regional"
		},
};
static const int asn_MAP_NodeAttributeSetXY_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NodeAttributeSetXY_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NodeAttributeSetXY_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* localNode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* disabled */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* enabled */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* data */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dWidth */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dElevation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_NodeAttributeSetXY_specs_1 = {
	sizeof(struct NodeAttributeSetXY),
	offsetof(struct NodeAttributeSetXY, _asn_ctx),
	asn_MAP_NodeAttributeSetXY_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NodeAttributeSetXY_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NodeAttributeSetXY = {
	"NodeAttributeSetXY",
	"NodeAttributeSetXY",
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
	asn_DEF_NodeAttributeSetXY_tags_1,
	sizeof(asn_DEF_NodeAttributeSetXY_tags_1)
		/sizeof(asn_DEF_NodeAttributeSetXY_tags_1[0]), /* 1 */
	asn_DEF_NodeAttributeSetXY_tags_1,	/* Same as above */
	sizeof(asn_DEF_NodeAttributeSetXY_tags_1)
		/sizeof(asn_DEF_NodeAttributeSetXY_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_NodeAttributeSetXY_1,
	7,	/* Elements count */
	&asn_SPC_NodeAttributeSetXY_specs_1	/* Additional specs */
};

