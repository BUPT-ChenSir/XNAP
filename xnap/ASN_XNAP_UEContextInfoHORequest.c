/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_UEContextInfoHORequest.h"

#include "ASN_XNAP_LocationReportingInformation.h"
#include "ASN_XNAP_MobilityRestrictionList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_UEContextInfoHORequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, ng_c_UE_reference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AMF_UE_NGAP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-c-UE-reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, cp_TNL_info_source),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_CPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-TNL-info-source"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, ueSecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_UESecurityCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSecurityCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, securityInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AS_SecurityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEContextInfoHORequest, indexToRatFrequencySelectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RFSP_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indexToRatFrequencySelectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, ue_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-AMBR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, pduSessionResourcesToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_PDUSessionResourcesToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionResourcesToBeSetup-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextInfoHORequest, rrc_Context),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-Context"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_UEContextInfoHORequest, locationReportingInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_LocationReportingInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationReportingInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_UEContextInfoHORequest, mrl),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MobilityRestrictionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrl"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEContextInfoHORequest, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P395,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_UEContextInfoHORequest_oms_1[] = { 4, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_UEContextInfoHORequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-c-UE-reference */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cp-TNL-info-source */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ueSecurityCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* securityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* indexToRatFrequencySelectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pduSessionResourcesToBeSetup-List */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rrc-Context */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationReportingInformation */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* mrl */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_UEContextInfoHORequest_specs_1 = {
	sizeof(struct ASN_XNAP_UEContextInfoHORequest),
	offsetof(struct ASN_XNAP_UEContextInfoHORequest, _asn_ctx),
	asn_MAP_ASN_XNAP_UEContextInfoHORequest_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_UEContextInfoHORequest_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_UEContextInfoHORequest = {
	"UEContextInfoHORequest",
	"UEContextInfoHORequest",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1,
	sizeof(asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEContextInfoHORequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_UEContextInfoHORequest_1,
	11,	/* Elements count */
	&asn_SPC_ASN_XNAP_UEContextInfoHORequest_specs_1	/* Additional specs */
};

