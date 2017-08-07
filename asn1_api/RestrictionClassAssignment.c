/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "RestrictionClassAssignment.h"

asn_TYPE_member_t asn_MBR_RestrictionClassAssignment_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictionClassAssignment, id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RestrictionClassID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictionClassAssignment, users),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RestrictionUserTypeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"users"
		},
};
static const ber_tlv_tag_t asn_DEF_RestrictionClassAssignment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RestrictionClassAssignment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* users */
};
asn_SEQUENCE_specifics_t asn_SPC_RestrictionClassAssignment_specs_1 = {
	sizeof(struct RestrictionClassAssignment),
	offsetof(struct RestrictionClassAssignment, _asn_ctx),
	asn_MAP_RestrictionClassAssignment_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RestrictionClassAssignment = {
	"RestrictionClassAssignment",
	"RestrictionClassAssignment",
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
	asn_DEF_RestrictionClassAssignment_tags_1,
	sizeof(asn_DEF_RestrictionClassAssignment_tags_1)
		/sizeof(asn_DEF_RestrictionClassAssignment_tags_1[0]), /* 1 */
	asn_DEF_RestrictionClassAssignment_tags_1,	/* Same as above */
	sizeof(asn_DEF_RestrictionClassAssignment_tags_1)
		/sizeof(asn_DEF_RestrictionClassAssignment_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_RestrictionClassAssignment_1,
	2,	/* Elements count */
	&asn_SPC_RestrictionClassAssignment_specs_1	/* Additional specs */
};

