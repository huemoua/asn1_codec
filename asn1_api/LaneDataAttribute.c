/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "LaneDataAttribute.h"

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
static asn_oer_constraints_t asn_OER_type_LaneDataAttribute_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LaneDataAttribute_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
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

asn_TYPE_member_t asn_MBR_LaneDataAttribute_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.pathEndPointAngle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"pathEndPointAngle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.laneCrownPointCenter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadwayCrownAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"laneCrownPointCenter"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.laneCrownPointLeft),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadwayCrownAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"laneCrownPointLeft"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.laneCrownPointRight),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadwayCrownAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"laneCrownPointRight"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.laneAngle),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MergeDivergeNodeAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"laneAngle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.speedLimits),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedLimitList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"speedLimits"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneDataAttribute, choice.regional),
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
static const asn_TYPE_tag2member_t asn_MAP_LaneDataAttribute_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pathEndPointAngle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laneCrownPointCenter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laneCrownPointLeft */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* laneCrownPointRight */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* laneAngle */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* speedLimits */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* regional */
};
asn_CHOICE_specifics_t asn_SPC_LaneDataAttribute_specs_1 = {
	sizeof(struct LaneDataAttribute),
	offsetof(struct LaneDataAttribute, _asn_ctx),
	offsetof(struct LaneDataAttribute, present),
	sizeof(((struct LaneDataAttribute *)0)->present),
	asn_MAP_LaneDataAttribute_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	7	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LaneDataAttribute = {
	"LaneDataAttribute",
	"LaneDataAttribute",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_oer,
	CHOICE_encode_oer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_OER_type_LaneDataAttribute_constr_1,
	&asn_PER_type_LaneDataAttribute_constr_1,
	asn_MBR_LaneDataAttribute_1,
	7,	/* Elements count */
	&asn_SPC_LaneDataAttribute_specs_1	/* Additional specs */
};

