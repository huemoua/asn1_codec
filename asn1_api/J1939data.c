/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "J1939data.h"

asn_TYPE_member_t asn_MBR_J1939data_1[] = {
	{ ATF_POINTER, 10, offsetof(struct J1939data, tires),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TireDataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"tires"
		},
	{ ATF_POINTER, 9, offsetof(struct J1939data, axles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AxleWeightList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"axles"
		},
	{ ATF_POINTER, 8, offsetof(struct J1939data, trailerWeight),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerWeight,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"trailerWeight"
		},
	{ ATF_POINTER, 7, offsetof(struct J1939data, cargoWeight),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CargoWeight,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"cargoWeight"
		},
	{ ATF_POINTER, 6, offsetof(struct J1939data, steeringAxleTemperature),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringAxleTemperature,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"steeringAxleTemperature"
		},
	{ ATF_POINTER, 5, offsetof(struct J1939data, driveAxleLocation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveAxleLocation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"driveAxleLocation"
		},
	{ ATF_POINTER, 4, offsetof(struct J1939data, driveAxleLiftAirPressure),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveAxleLiftAirPressure,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"driveAxleLiftAirPressure"
		},
	{ ATF_POINTER, 3, offsetof(struct J1939data, driveAxleTemperature),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveAxleTemperature,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"driveAxleTemperature"
		},
	{ ATF_POINTER, 2, offsetof(struct J1939data, driveAxleLubePressure),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveAxleLubePressure,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"driveAxleLubePressure"
		},
	{ ATF_POINTER, 1, offsetof(struct J1939data, steeringAxleLubePressure),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringAxleLubePressure,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"steeringAxleLubePressure"
		},
};
static const int asn_MAP_J1939data_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_J1939data_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_J1939data_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tires */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* axles */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trailerWeight */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cargoWeight */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* steeringAxleTemperature */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* driveAxleLocation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* driveAxleLiftAirPressure */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* driveAxleTemperature */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* driveAxleLubePressure */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* steeringAxleLubePressure */
};
asn_SEQUENCE_specifics_t asn_SPC_J1939data_specs_1 = {
	sizeof(struct J1939data),
	offsetof(struct J1939data, _asn_ctx),
	asn_MAP_J1939data_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_J1939data_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_J1939data = {
	"J1939data",
	"J1939data",
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
	asn_DEF_J1939data_tags_1,
	sizeof(asn_DEF_J1939data_tags_1)
		/sizeof(asn_DEF_J1939data_tags_1[0]), /* 1 */
	asn_DEF_J1939data_tags_1,	/* Same as above */
	sizeof(asn_DEF_J1939data_tags_1)
		/sizeof(asn_DEF_J1939data_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_J1939data_1,
	10,	/* Elements count */
	&asn_SPC_J1939data_specs_1	/* Additional specs */
};

