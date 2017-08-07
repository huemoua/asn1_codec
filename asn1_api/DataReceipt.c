/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "DataReceipt.h"

static asn_TYPE_member_t asn_MBR_DataReceipt_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DataReceipt, dialogID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiDialogID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dialogID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataReceipt, seqID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiSequenceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"seqID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataReceipt, groupID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GroupID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"groupID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataReceipt, requestID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"requestID"
		},
};
static const ber_tlv_tag_t asn_DEF_DataReceipt_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DataReceipt_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dialogID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* seqID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* groupID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* requestID */
};
static asn_SEQUENCE_specifics_t asn_SPC_DataReceipt_specs_1 = {
	sizeof(struct DataReceipt),
	offsetof(struct DataReceipt, _asn_ctx),
	asn_MAP_DataReceipt_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DataReceipt = {
	"DataReceipt",
	"DataReceipt",
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
	asn_DEF_DataReceipt_tags_1,
	sizeof(asn_DEF_DataReceipt_tags_1)
		/sizeof(asn_DEF_DataReceipt_tags_1[0]), /* 1 */
	asn_DEF_DataReceipt_tags_1,	/* Same as above */
	sizeof(asn_DEF_DataReceipt_tags_1)
		/sizeof(asn_DEF_DataReceipt_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_DataReceipt_1,
	4,	/* Elements count */
	&asn_SPC_DataReceipt_specs_1	/* Additional specs */
};

