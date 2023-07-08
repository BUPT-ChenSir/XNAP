/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_UEContextRefAtSN-HORequest.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_UEContextRefAtSN_HORequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextRefAtSN_HORequest, globalNG_RANNode_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_GlobalNG_RANNode_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNG-RANNode-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEContextRefAtSN_HORequest, sN_NG_RANnodeUEXnAPID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NG_RANnodeUEXnAPID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sN-NG-RANnodeUEXnAPID"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEContextRefAtSN_HORequest, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P396,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_UEContextRefAtSN_HORequest_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_UEContextRefAtSN_HORequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalNG-RANNode-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sN-NG-RANnodeUEXnAPID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_UEContextRefAtSN_HORequest_specs_1 = {
	sizeof(struct ASN_XNAP_UEContextRefAtSN_HORequest),
	offsetof(struct ASN_XNAP_UEContextRefAtSN_HORequest, _asn_ctx),
	asn_MAP_ASN_XNAP_UEContextRefAtSN_HORequest_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_UEContextRefAtSN_HORequest_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest = {
	"UEContextRefAtSN-HORequest",
	"UEContextRefAtSN-HORequest",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1,
	sizeof(asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEContextRefAtSN_HORequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_UEContextRefAtSN_HORequest_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_UEContextRefAtSN_HORequest_specs_1	/* Additional specs */
};

