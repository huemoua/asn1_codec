/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "FundamentalSituationalStatus.h"

asn_TYPE_member_t asn_MBR_FundamentalSituationalStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, speed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransmissionAndSpeed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, heading),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, steeringAngle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"steeringAngle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, accelSet),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"accelSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, brakes),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BrakeSystemStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"brakes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FundamentalSituationalStatus, vehSize),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleSize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"vehSize"
		},
	{ ATF_POINTER, 1, offsetof(struct FundamentalSituationalStatus, vsmEventFlag),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VsmEventFlag,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"vsmEventFlag"
		},
};
static const int asn_MAP_FundamentalSituationalStatus_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_FundamentalSituationalStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FundamentalSituationalStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* steeringAngle */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* accelSet */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* brakes */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* vehSize */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* vsmEventFlag */
};
asn_SEQUENCE_specifics_t asn_SPC_FundamentalSituationalStatus_specs_1 = {
	sizeof(struct FundamentalSituationalStatus),
	offsetof(struct FundamentalSituationalStatus, _asn_ctx),
	asn_MAP_FundamentalSituationalStatus_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_FundamentalSituationalStatus_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FundamentalSituationalStatus = {
	"FundamentalSituationalStatus",
	"FundamentalSituationalStatus",
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
	asn_DEF_FundamentalSituationalStatus_tags_1,
	sizeof(asn_DEF_FundamentalSituationalStatus_tags_1)
		/sizeof(asn_DEF_FundamentalSituationalStatus_tags_1[0]), /* 1 */
	asn_DEF_FundamentalSituationalStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_FundamentalSituationalStatus_tags_1)
		/sizeof(asn_DEF_FundamentalSituationalStatus_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_FundamentalSituationalStatus_1,
	7,	/* Elements count */
	&asn_SPC_FundamentalSituationalStatus_specs_1	/* Additional specs */
};

