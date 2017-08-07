/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "ITIScodesAndText.h"

static asn_oer_constraints_t asn_OER_type_item_constr_3 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_item_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ITIScodesAndText_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..100)) */};
asn_per_constraints_t asn_PER_type_ITIScodesAndText_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (SIZE(1..100)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_item_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct item, choice.itis),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"itis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct item, choice.text),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIStext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"text"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_item_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* itis */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* text */
};
static asn_CHOICE_specifics_t asn_SPC_item_specs_3 = {
	sizeof(struct item),
	offsetof(struct item, _asn_ctx),
	offsetof(struct item, present),
	sizeof(((struct item *)0)->present),
	asn_MAP_item_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_item_3 = {
	"item",
	"item",
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
	&asn_OER_type_item_constr_3,
	&asn_PER_type_item_constr_3,
	asn_MBR_item_3,
	2,	/* Elements count */
	&asn_SPC_item_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member, item),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_item_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"item"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* item */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Member),
	offsetof(struct Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	1,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ITIScodesAndText_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ITIScodesAndText_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_ITIScodesAndText_specs_1 = {
	sizeof(struct ITIScodesAndText),
	offsetof(struct ITIScodesAndText, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ITIScodesAndText = {
	"ITIScodesAndText",
	"ITIScodesAndText",
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
	asn_DEF_ITIScodesAndText_tags_1,
	sizeof(asn_DEF_ITIScodesAndText_tags_1)
		/sizeof(asn_DEF_ITIScodesAndText_tags_1[0]), /* 1 */
	asn_DEF_ITIScodesAndText_tags_1,	/* Same as above */
	sizeof(asn_DEF_ITIScodesAndText_tags_1)
		/sizeof(asn_DEF_ITIScodesAndText_tags_1[0]), /* 1 */
	&asn_OER_type_ITIScodesAndText_constr_1,
	&asn_PER_type_ITIScodesAndText_constr_1,
	asn_MBR_ITIScodesAndText_1,
	1,	/* Single element */
	&asn_SPC_ITIScodesAndText_specs_1	/* Additional specs */
};

