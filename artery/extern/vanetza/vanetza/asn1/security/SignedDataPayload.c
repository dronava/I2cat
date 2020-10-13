/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "SignedDataPayload.h"

static asn_oer_constraints_t asn_OER_type_SignedDataPayload_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SignedDataPayload_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SignedDataPayload_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SignedDataPayload, data),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ieee1609Dot2Data,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data"
		},
	{ ATF_POINTER, 1, offsetof(struct SignedDataPayload, extDataHash),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_HashedData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extDataHash"
		},
};
static const int asn_MAP_SignedDataPayload_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SignedDataPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignedDataPayload_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* data */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* extDataHash */
};
asn_SEQUENCE_specifics_t asn_SPC_SignedDataPayload_specs_1 = {
	sizeof(struct SignedDataPayload),
	offsetof(struct SignedDataPayload, _asn_ctx),
	asn_MAP_SignedDataPayload_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SignedDataPayload_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignedDataPayload = {
	"SignedDataPayload",
	"SignedDataPayload",
	&asn_OP_SEQUENCE,
	asn_DEF_SignedDataPayload_tags_1,
	sizeof(asn_DEF_SignedDataPayload_tags_1)
		/sizeof(asn_DEF_SignedDataPayload_tags_1[0]), /* 1 */
	asn_DEF_SignedDataPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignedDataPayload_tags_1)
		/sizeof(asn_DEF_SignedDataPayload_tags_1[0]), /* 1 */
	{ &asn_OER_type_SignedDataPayload_constr_1, &asn_PER_type_SignedDataPayload_constr_1, SEQUENCE_constraint },
	asn_MBR_SignedDataPayload_1,
	2,	/* Elements count */
	&asn_SPC_SignedDataPayload_specs_1	/* Additional specs */
};

