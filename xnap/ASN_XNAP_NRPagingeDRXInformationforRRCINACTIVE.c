/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE, nRPaging_eDRX_Cycle_Inactive),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRPaging_eDRX_Cycle_Inactive,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRPaging-eDRX-Cycle-Inactive"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P213,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRPaging-eDRX-Cycle-Inactive */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_specs_1 = {
	sizeof(struct ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE),
	offsetof(struct ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE, _asn_ctx),
	asn_MAP_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE = {
	"NRPagingeDRXInformationforRRCINACTIVE",
	"NRPagingeDRXInformationforRRCINACTIVE",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_NRPagingeDRXInformationforRRCINACTIVE_specs_1	/* Additional specs */
};

