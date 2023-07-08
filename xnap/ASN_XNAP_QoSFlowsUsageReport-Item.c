/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_QoSFlowsUsageReport-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_rATType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_rATType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_rATType_value2enum_3[] = {
	{ 0,	2,	"nr" },
	{ 1,	5,	"eutra" },
	{ 2,	13,	"nr-unlicensed" },
	{ 3,	17,	"e-utra-unlicensed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_rATType_enum2value_3[] = {
	3,	/* e-utra-unlicensed(3) */
	1,	/* eutra(1) */
	0,	/* nr(0) */
	2	/* nr-unlicensed(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_rATType_specs_3 = {
	asn_MAP_ASN_XNAP_rATType_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_rATType_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_rATType_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_rATType_3 = {
	"rATType",
	"rATType",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_rATType_tags_3,
	sizeof(asn_DEF_ASN_XNAP_rATType_tags_3)
		/sizeof(asn_DEF_ASN_XNAP_rATType_tags_3[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_rATType_tags_3,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_rATType_tags_3)
		/sizeof(asn_DEF_ASN_XNAP_rATType_tags_3[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_rATType_constr_3, &asn_PER_type_ASN_XNAP_rATType_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_rATType_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_QoSFlowsUsageReport_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_QoSFlowsUsageReport_Item, qosFlowIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QoSFlowIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_QoSFlowsUsageReport_Item, rATType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_rATType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rATType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_QoSFlowsUsageReport_Item, qoSFlowsTimedReportList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_VolumeTimedReportList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoSFlowsTimedReportList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_QoSFlowsUsageReport_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P284,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_QoSFlowsUsageReport_Item_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_QoSFlowsUsageReport_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qosFlowIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rATType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* qoSFlowsTimedReportList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_QoSFlowsUsageReport_Item_specs_1 = {
	sizeof(struct ASN_XNAP_QoSFlowsUsageReport_Item),
	offsetof(struct ASN_XNAP_QoSFlowsUsageReport_Item, _asn_ctx),
	asn_MAP_ASN_XNAP_QoSFlowsUsageReport_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_QoSFlowsUsageReport_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item = {
	"QoSFlowsUsageReport-Item",
	"QoSFlowsUsageReport-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1,
	sizeof(asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_QoSFlowsUsageReport_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_QoSFlowsUsageReport_Item_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_QoSFlowsUsageReport_Item_specs_1	/* Additional specs */
};

