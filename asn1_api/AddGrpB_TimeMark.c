/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "AddGrpB_TimeMark.h"

static asn_TYPE_member_t asn_MBR_AddGrpB_TimeMark_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, year),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Year,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"year"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, month),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Month,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"month"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, day),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Day,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"day"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, summerTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SummerTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"summerTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, holiday),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Holiday,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"holiday"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, dayofWeek),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DayOfWeek,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dayofWeek"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, hour),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Hour,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"hour"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, minute),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Minute,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"minute"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, second),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Second,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"second"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AddGrpB_TimeMark, tenthSecond),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TenthSecond,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"tenthSecond"
		},
};
static const ber_tlv_tag_t asn_DEF_AddGrpB_TimeMark_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AddGrpB_TimeMark_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* year */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* month */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* day */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* summerTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* holiday */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dayofWeek */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* hour */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* minute */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* second */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* tenthSecond */
};
static asn_SEQUENCE_specifics_t asn_SPC_AddGrpB_TimeMark_specs_1 = {
	sizeof(struct AddGrpB_TimeMark),
	offsetof(struct AddGrpB_TimeMark, _asn_ctx),
	asn_MAP_AddGrpB_TimeMark_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AddGrpB_TimeMark = {
	"TimeMark",
	"TimeMark",
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
	asn_DEF_AddGrpB_TimeMark_tags_1,
	sizeof(asn_DEF_AddGrpB_TimeMark_tags_1)
		/sizeof(asn_DEF_AddGrpB_TimeMark_tags_1[0]), /* 1 */
	asn_DEF_AddGrpB_TimeMark_tags_1,	/* Same as above */
	sizeof(asn_DEF_AddGrpB_TimeMark_tags_1)
		/sizeof(asn_DEF_AddGrpB_TimeMark_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_AddGrpB_TimeMark_1,
	10,	/* Elements count */
	&asn_SPC_AddGrpB_TimeMark_specs_1	/* Additional specs */
};

