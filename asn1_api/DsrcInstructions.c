/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "DsrcInstructions.h"

static int
memb_biTxInterval_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_biTxInterval_constr_4 GCC_NOTUSED = {
	{ 1, 1 }	/* (0..50) */,
	-1};
static asn_per_constraints_t asn_PER_memb_biTxInterval_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  50 }	/* (0..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DsrcInstructions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DsrcInstructions, biTxMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TxMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"biTxMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DsrcInstructions, biTxChannel),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TxChannel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"biTxChannel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DsrcInstructions, biTxInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_biTxInterval_constraint_1,
		&asn_OER_memb_biTxInterval_constr_4,
		&asn_PER_memb_biTxInterval_constr_4,
		0,
		"biTxInterval"
		},
};
static const ber_tlv_tag_t asn_DEF_DsrcInstructions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DsrcInstructions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* biTxMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* biTxChannel */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* biTxInterval */
};
asn_SEQUENCE_specifics_t asn_SPC_DsrcInstructions_specs_1 = {
	sizeof(struct DsrcInstructions),
	offsetof(struct DsrcInstructions, _asn_ctx),
	asn_MAP_DsrcInstructions_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DsrcInstructions = {
	"DsrcInstructions",
	"DsrcInstructions",
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
	asn_DEF_DsrcInstructions_tags_1,
	sizeof(asn_DEF_DsrcInstructions_tags_1)
		/sizeof(asn_DEF_DsrcInstructions_tags_1[0]), /* 1 */
	asn_DEF_DsrcInstructions_tags_1,	/* Same as above */
	sizeof(asn_DEF_DsrcInstructions_tags_1)
		/sizeof(asn_DEF_DsrcInstructions_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_DsrcInstructions_1,
	3,	/* Elements count */
	&asn_SPC_DsrcInstructions_specs_1	/* Additional specs */
};

