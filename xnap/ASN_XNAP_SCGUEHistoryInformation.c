/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_SCGUEHistoryInformation.h"

#include "ASN_XNAP_LastVisitedPSCellList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_SCGUEHistoryInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_SCGUEHistoryInformation, lastVisitedPSCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_LastVisitedPSCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lastVisitedPSCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_SCGUEHistoryInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P140,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_SCGUEHistoryInformation_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_SCGUEHistoryInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastVisitedPSCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_SCGUEHistoryInformation_specs_1 = {
	sizeof(struct ASN_XNAP_SCGUEHistoryInformation),
	offsetof(struct ASN_XNAP_SCGUEHistoryInformation, _asn_ctx),
	asn_MAP_ASN_XNAP_SCGUEHistoryInformation_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_SCGUEHistoryInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SCGUEHistoryInformation = {
	"SCGUEHistoryInformation",
	"SCGUEHistoryInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1,
	sizeof(asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SCGUEHistoryInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_SCGUEHistoryInformation_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_SCGUEHistoryInformation_specs_1	/* Additional specs */
};

