/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PDCPSNLength.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_ulPDCPSNLength_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_ulPDCPSNLength_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_dlPDCPSNLength_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_dlPDCPSNLength_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_ulPDCPSNLength_value2enum_2[] = {
	{ 0,	7,	"v12bits" },
	{ 1,	7,	"v18bits" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_ulPDCPSNLength_enum2value_2[] = {
	0,	/* v12bits(0) */
	1	/* v18bits(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_ulPDCPSNLength_specs_2 = {
	asn_MAP_ASN_XNAP_ulPDCPSNLength_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_ulPDCPSNLength_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ulPDCPSNLength_2 = {
	"ulPDCPSNLength",
	"ulPDCPSNLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2,
	sizeof(asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_ulPDCPSNLength_tags_2[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_ulPDCPSNLength_constr_2, &asn_PER_type_ASN_XNAP_ulPDCPSNLength_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_ulPDCPSNLength_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_dlPDCPSNLength_value2enum_6[] = {
	{ 0,	7,	"v12bits" },
	{ 1,	7,	"v18bits" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_dlPDCPSNLength_enum2value_6[] = {
	0,	/* v12bits(0) */
	1	/* v18bits(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_dlPDCPSNLength_specs_6 = {
	asn_MAP_ASN_XNAP_dlPDCPSNLength_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_dlPDCPSNLength_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_dlPDCPSNLength_6 = {
	"dlPDCPSNLength",
	"dlPDCPSNLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6,
	sizeof(asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_dlPDCPSNLength_tags_6[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_dlPDCPSNLength_constr_6, &asn_PER_type_ASN_XNAP_dlPDCPSNLength_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_dlPDCPSNLength_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_PDCPSNLength_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDCPSNLength, ulPDCPSNLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ulPDCPSNLength_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ulPDCPSNLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDCPSNLength, dlPDCPSNLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_dlPDCPSNLength_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dlPDCPSNLength"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_PDCPSNLength, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P223,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_PDCPSNLength_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_PDCPSNLength_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PDCPSNLength_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ulPDCPSNLength */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dlPDCPSNLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDCPSNLength_specs_1 = {
	sizeof(struct ASN_XNAP_PDCPSNLength),
	offsetof(struct ASN_XNAP_PDCPSNLength, _asn_ctx),
	asn_MAP_ASN_XNAP_PDCPSNLength_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_PDCPSNLength_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDCPSNLength = {
	"PDCPSNLength",
	"PDCPSNLength",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_PDCPSNLength_tags_1,
	sizeof(asn_DEF_ASN_XNAP_PDCPSNLength_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDCPSNLength_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_PDCPSNLength_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_PDCPSNLength_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDCPSNLength_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_PDCPSNLength_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_PDCPSNLength_specs_1	/* Additional specs */
};

