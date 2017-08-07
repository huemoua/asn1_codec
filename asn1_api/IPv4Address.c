/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "IPv4Address.h"

int
IPv4Address_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_IPv4Address_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
asn_per_constraints_t asn_PER_type_IPv4Address_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_IPv4Address_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_IPv4Address = {
	"IPv4Address",
	"IPv4Address",
	OCTET_STRING_free,
	OCTET_STRING_print,
	IPv4Address_constraint,
	OCTET_STRING_decode_ber,
	OCTET_STRING_encode_der,
	OCTET_STRING_decode_xer,
	OCTET_STRING_encode_xer,
	OCTET_STRING_decode_oer,
	OCTET_STRING_encode_oer,
	OCTET_STRING_decode_uper,
	OCTET_STRING_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IPv4Address_tags_1,
	sizeof(asn_DEF_IPv4Address_tags_1)
		/sizeof(asn_DEF_IPv4Address_tags_1[0]), /* 1 */
	asn_DEF_IPv4Address_tags_1,	/* Same as above */
	sizeof(asn_DEF_IPv4Address_tags_1)
		/sizeof(asn_DEF_IPv4Address_tags_1[0]), /* 1 */
	&asn_OER_type_IPv4Address_constr_1,
	&asn_PER_type_IPv4Address_constr_1,
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

