/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_UEAppLayerMeasConfigInfo.h"

#include "ASN_XNAP_MDTAlignmentInfo.h"
#include "ASN_XNAP_AreaScopeOfQMC.h"
#include "ASN_XNAP_S-NSSAIListQoE.h"
#include "ASN_XNAP_AvailableRVQoEMetrics.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_UEAppLayerMeasConfigInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, qOEReference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QOEReference,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qOEReference"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, qOEMeasConfigAppLayerID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QOEMeasConfAppLayerID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qOEMeasConfigAppLayerID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, serviceType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ServiceType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serviceType"
		},
	{ ATF_POINTER, 8, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, qOEMeasStatus),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QOEMeasStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qOEMeasStatus"
		},
	{ ATF_POINTER, 7, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, containerAppLayerMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ContainerAppLayerMeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"containerAppLayerMeasConfig"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, mDTAlignmentInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MDTAlignmentInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mDTAlignmentInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, measCollectionEntityIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MeasCollectionEntityIPAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCollectionEntityIPAddress"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, areaScopeOfQMC),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AreaScopeOfQMC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaScopeOfQMC"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, s_NSSAIListQoE),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_S_NSSAIListQoE,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NSSAIListQoE"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, availableRVQoEMetrics),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AvailableRVQoEMetrics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"availableRVQoEMetrics"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P380,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_UEAppLayerMeasConfigInfo_oms_1[] = { 1, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_UEAppLayerMeasConfigInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qOEReference */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qOEMeasConfigAppLayerID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* serviceType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qOEMeasStatus */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* containerAppLayerMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mDTAlignmentInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measCollectionEntityIPAddress */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* areaScopeOfQMC */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* s-NSSAIListQoE */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* availableRVQoEMetrics */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_UEAppLayerMeasConfigInfo_specs_1 = {
	sizeof(struct ASN_XNAP_UEAppLayerMeasConfigInfo),
	offsetof(struct ASN_XNAP_UEAppLayerMeasConfigInfo, _asn_ctx),
	asn_MAP_ASN_XNAP_UEAppLayerMeasConfigInfo_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_UEAppLayerMeasConfigInfo_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo = {
	"UEAppLayerMeasConfigInfo",
	"UEAppLayerMeasConfigInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1,
	sizeof(asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEAppLayerMeasConfigInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_UEAppLayerMeasConfigInfo_1,
	11,	/* Elements count */
	&asn_SPC_ASN_XNAP_UEAppLayerMeasConfigInfo_specs_1	/* Additional specs */
};
