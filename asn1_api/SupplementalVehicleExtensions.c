/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "SupplementalVehicleExtensions.h"

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

static asn_oer_constraints_t asn_OER_type_regional_constr_11 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_11 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_11 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_11 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_11[] = {
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
static const ber_tlv_tag_t asn_DEF_regional_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_11 = {
	sizeof(struct regional),
	offsetof(struct regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_11 = {
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
	asn_DEF_regional_tags_11,
	sizeof(asn_DEF_regional_tags_11)
		/sizeof(asn_DEF_regional_tags_11[0]) - 1, /* 1 */
	asn_DEF_regional_tags_11,	/* Same as above */
	sizeof(asn_DEF_regional_tags_11)
		/sizeof(asn_DEF_regional_tags_11[0]), /* 2 */
	&asn_OER_type_regional_constr_11,
	&asn_PER_type_regional_constr_11,
	asn_MBR_regional_11,
	1,	/* Single element */
	&asn_SPC_regional_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SupplementalVehicleExtensions_1[] = {
	{ ATF_POINTER, 10, offsetof(struct SupplementalVehicleExtensions, classification),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BasicVehicleClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"classification"
		},
	{ ATF_POINTER, 9, offsetof(struct SupplementalVehicleExtensions, classDetails),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleClassification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"classDetails"
		},
	{ ATF_POINTER, 8, offsetof(struct SupplementalVehicleExtensions, vehicleData),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"vehicleData"
		},
	{ ATF_POINTER, 7, offsetof(struct SupplementalVehicleExtensions, weatherReport),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WeatherReport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"weatherReport"
		},
	{ ATF_POINTER, 6, offsetof(struct SupplementalVehicleExtensions, weatherProbe),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WeatherProbe,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"weatherProbe"
		},
	{ ATF_POINTER, 5, offsetof(struct SupplementalVehicleExtensions, obstacle),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObstacleDetection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"obstacle"
		},
	{ ATF_POINTER, 4, offsetof(struct SupplementalVehicleExtensions, status),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DisabledVehicle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"status"
		},
	{ ATF_POINTER, 3, offsetof(struct SupplementalVehicleExtensions, speedProfile),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedProfile,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"speedProfile"
		},
	{ ATF_POINTER, 2, offsetof(struct SupplementalVehicleExtensions, theRTCM),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCMPackage,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"theRTCM"
		},
	{ ATF_POINTER, 1, offsetof(struct SupplementalVehicleExtensions, regional),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_regional_11,
		memb_regional_constraint_1,
		&asn_OER_memb_regional_constr_11,
		&asn_PER_memb_regional_constr_11,
		0,
		"regional"
		},
};
static const int asn_MAP_SupplementalVehicleExtensions_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_SupplementalVehicleExtensions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SupplementalVehicleExtensions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* classification */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* classDetails */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vehicleData */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* weatherReport */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* weatherProbe */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* obstacle */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* status */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* speedProfile */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* theRTCM */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_SupplementalVehicleExtensions_specs_1 = {
	sizeof(struct SupplementalVehicleExtensions),
	offsetof(struct SupplementalVehicleExtensions, _asn_ctx),
	asn_MAP_SupplementalVehicleExtensions_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SupplementalVehicleExtensions_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SupplementalVehicleExtensions = {
	"SupplementalVehicleExtensions",
	"SupplementalVehicleExtensions",
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
	asn_DEF_SupplementalVehicleExtensions_tags_1,
	sizeof(asn_DEF_SupplementalVehicleExtensions_tags_1)
		/sizeof(asn_DEF_SupplementalVehicleExtensions_tags_1[0]), /* 1 */
	asn_DEF_SupplementalVehicleExtensions_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupplementalVehicleExtensions_tags_1)
		/sizeof(asn_DEF_SupplementalVehicleExtensions_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_SupplementalVehicleExtensions_1,
	10,	/* Elements count */
	&asn_SPC_SupplementalVehicleExtensions_specs_1	/* Additional specs */
};

