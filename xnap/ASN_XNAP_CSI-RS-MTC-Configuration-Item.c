/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_CSI-RS-MTC-Configuration-Item.h"

#include "ASN_XNAP_CSI-RS-Neighbour-List.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_XNAP_csi_RS_Index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 95)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ASN_XNAP_csi_RS_Status_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_csi_RS_Status_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_csi_RS_Index_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..95) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_csi_RS_Index_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  95 }	/* (0..95) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_csi_RS_Status_value2enum_3[] = {
	{ 0,	9,	"activated" },
	{ 1,	11,	"deactivated" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_csi_RS_Status_enum2value_3[] = {
	0,	/* activated(0) */
	1	/* deactivated(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_csi_RS_Status_specs_3 = {
	asn_MAP_ASN_XNAP_csi_RS_Status_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_csi_RS_Status_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_csi_RS_Status_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_csi_RS_Status_3 = {
	"csi-RS-Status",
	"csi-RS-Status",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_csi_RS_Status_tags_3,
	sizeof(asn_DEF_ASN_XNAP_csi_RS_Status_tags_3)
		/sizeof(asn_DEF_ASN_XNAP_csi_RS_Status_tags_3[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_csi_RS_Status_tags_3,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_csi_RS_Status_tags_3)
		/sizeof(asn_DEF_ASN_XNAP_csi_RS_Status_tags_3[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_csi_RS_Status_constr_3, &asn_PER_type_ASN_XNAP_csi_RS_Status_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_csi_RS_Status_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_CSI_RS_MTC_Configuration_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item, csi_RS_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_csi_RS_Index_constr_2, &asn_PER_memb_ASN_XNAP_csi_RS_Index_constr_2,  memb_ASN_XNAP_csi_RS_Index_constraint_1 },
		0, 0, /* No default value */
		"csi-RS-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item, csi_RS_Status),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_csi_RS_Status_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Status"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item, csi_RS_Neighbour_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_CSI_RS_Neighbour_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Neighbour-List"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_CSI_RS_MTC_Configuration_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-Status */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-Neighbour-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_CSI_RS_MTC_Configuration_Item_specs_1 = {
	sizeof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item),
	offsetof(struct ASN_XNAP_CSI_RS_MTC_Configuration_Item, _asn_ctx),
	asn_MAP_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_CSI_RS_MTC_Configuration_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item = {
	"CSI-RS-MTC-Configuration-Item",
	"CSI-RS-MTC-Configuration-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1,
	sizeof(asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_CSI_RS_MTC_Configuration_Item_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_CSI_RS_MTC_Configuration_Item_specs_1	/* Additional specs */
};

