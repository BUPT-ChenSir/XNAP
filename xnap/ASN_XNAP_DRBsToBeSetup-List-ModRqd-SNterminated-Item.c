/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_DRBsToBeSetup-List-ModRqd-SNterminated-Item.h"

#include "ASN_XNAP_PDCPSNLength.h"
#include "ASN_XNAP_UPTransportParameters.h"
#include "ASN_XNAP_ULConfiguration.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, drb_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, pDCP_SNLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_PDCPSNLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-SNLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, sn_UL_PDCP_UPTNLinfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sn-UL-PDCP-UPTNLinfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, dRB_QoS),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QoSFlowLevelQoSParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-QoS"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, secondary_SN_UL_PDCP_UP_TNLInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondary-SN-UL-PDCP-UP-TNLInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, duplicationActivation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DuplicationActivation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duplicationActivation"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, uL_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ULConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, qoSFlowsMappedtoDRB_ModRqd_SNterminated),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QoSFlowsSetupMappedtoDRB_ModRqd_SNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoSFlowsMappedtoDRB-ModRqd-SNterminated"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, rLC_Mode),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RLCMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rLC-Mode"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P257,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_oms_1[] = { 1, 4, 5, 6, 9 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDCP-SNLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sn-UL-PDCP-UPTNLinfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dRB-QoS */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* secondary-SN-UL-PDCP-UP-TNLInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* duplicationActivation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uL-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* qoSFlowsMappedtoDRB-ModRqd-SNterminated */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rLC-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_specs_1 = {
	sizeof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item),
	offsetof(struct ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item, _asn_ctx),
	asn_MAP_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item = {
	"DRBsToBeSetup-List-ModRqd-SNterminated-Item",
	"DRBsToBeSetup-List-ModRqd-SNterminated-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1,
	sizeof(asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_1,
	10,	/* Elements count */
	&asn_SPC_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated_Item_specs_1	/* Additional specs */
};

