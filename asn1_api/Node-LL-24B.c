/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "Node-LL-24B.h"

asn_TYPE_member_t asn_MBR_Node_LL_24B_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Node_LL_24B, lon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"lon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Node_LL_24B, lat),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"lat"
		},
};
static const ber_tlv_tag_t asn_DEF_Node_LL_24B_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Node_LL_24B_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lat */
};
asn_SEQUENCE_specifics_t asn_SPC_Node_LL_24B_specs_1 = {
	sizeof(struct Node_LL_24B),
	offsetof(struct Node_LL_24B, _asn_ctx),
	asn_MAP_Node_LL_24B_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Node_LL_24B = {
	"Node-LL-24B",
	"Node-LL-24B",
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
	asn_DEF_Node_LL_24B_tags_1,
	sizeof(asn_DEF_Node_LL_24B_tags_1)
		/sizeof(asn_DEF_Node_LL_24B_tags_1[0]), /* 1 */
	asn_DEF_Node_LL_24B_tags_1,	/* Same as above */
	sizeof(asn_DEF_Node_LL_24B_tags_1)
		/sizeof(asn_DEF_Node_LL_24B_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_Node_LL_24B_1,
	2,	/* Elements count */
	&asn_SPC_Node_LL_24B_specs_1	/* Additional specs */
};

