/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "IssuerIdentifier.h"

static asn_oer_constraints_t asn_OER_type_IssuerIdentifier_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_IssuerIdentifier_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_IssuerIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IssuerIdentifier, choice.sha256AndDigest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashedId8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"sha256AndDigest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IssuerIdentifier, choice.self),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"self"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_IssuerIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sha256AndDigest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* self */
};
asn_CHOICE_specifics_t asn_SPC_IssuerIdentifier_specs_1 = {
	sizeof(struct IssuerIdentifier),
	offsetof(struct IssuerIdentifier, _asn_ctx),
	offsetof(struct IssuerIdentifier, present),
	sizeof(((struct IssuerIdentifier *)0)->present),
	asn_MAP_IssuerIdentifier_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IssuerIdentifier = {
	"IssuerIdentifier",
	"IssuerIdentifier",
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
	&asn_OER_type_IssuerIdentifier_constr_1,
	&asn_PER_type_IssuerIdentifier_constr_1,
	asn_MBR_IssuerIdentifier_1,
	2,	/* Elements count */
	&asn_SPC_IssuerIdentifier_specs_1	/* Additional specs */
};

