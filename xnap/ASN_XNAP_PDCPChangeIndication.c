/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PDCPChangeIndication.h"

#include "ASN_XNAP_ProtocolIE-Single-Container.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_from_S_NG_RAN_node_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_from_S_NG_RAN_node_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_from_M_NG_RAN_node_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_from_M_NG_RAN_node_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_PDCPChangeIndication_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_PDCPChangeIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_from_S_NG_RAN_node_value2enum_2[] = {
	{ 0,	33,	"s-ng-ran-node-key-update-required" },
	{ 1,	27,	"pdcp-data-recovery-required" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_from_S_NG_RAN_node_enum2value_2[] = {
	1,	/* pdcp-data-recovery-required(1) */
	0	/* s-ng-ran-node-key-update-required(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_from_S_NG_RAN_node_specs_2 = {
	asn_MAP_ASN_XNAP_from_S_NG_RAN_node_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_from_S_NG_RAN_node_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_from_S_NG_RAN_node_2 = {
	"from-S-NG-RAN-node",
	"from-S-NG-RAN-node",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2,
	sizeof(asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_from_S_NG_RAN_node_tags_2[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_from_S_NG_RAN_node_constr_2, &asn_PER_type_ASN_XNAP_from_S_NG_RAN_node_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_from_S_NG_RAN_node_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_from_M_NG_RAN_node_value2enum_6[] = {
	{ 0,	27,	"pdcp-data-recovery-required" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_from_M_NG_RAN_node_enum2value_6[] = {
	0	/* pdcp-data-recovery-required(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_from_M_NG_RAN_node_specs_6 = {
	asn_MAP_ASN_XNAP_from_M_NG_RAN_node_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_from_M_NG_RAN_node_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_from_M_NG_RAN_node_6 = {
	"from-M-NG-RAN-node",
	"from-M-NG-RAN-node",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6,
	sizeof(asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_from_M_NG_RAN_node_tags_6[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_from_M_NG_RAN_node_constr_6, &asn_PER_type_ASN_XNAP_from_M_NG_RAN_node_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_from_M_NG_RAN_node_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_PDCPChangeIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDCPChangeIndication, choice.from_S_NG_RAN_node),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_from_S_NG_RAN_node_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"from-S-NG-RAN-node"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDCPChangeIndication, choice.from_M_NG_RAN_node),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_from_M_NG_RAN_node_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"from-M-NG-RAN-node"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_PDCPChangeIndication, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PDCPChangeIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* from-S-NG-RAN-node */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* from-M-NG-RAN-node */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_PDCPChangeIndication_specs_1 = {
	sizeof(struct ASN_XNAP_PDCPChangeIndication),
	offsetof(struct ASN_XNAP_PDCPChangeIndication, _asn_ctx),
	offsetof(struct ASN_XNAP_PDCPChangeIndication, present),
	sizeof(((struct ASN_XNAP_PDCPChangeIndication *)0)->present),
	asn_MAP_ASN_XNAP_PDCPChangeIndication_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDCPChangeIndication = {
	"PDCPChangeIndication",
	"PDCPChangeIndication",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_PDCPChangeIndication_constr_1, &asn_PER_type_ASN_XNAP_PDCPChangeIndication_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_PDCPChangeIndication_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_PDCPChangeIndication_specs_1	/* Additional specs */
};

