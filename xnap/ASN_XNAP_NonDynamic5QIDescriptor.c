/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NonDynamic5QIDescriptor.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_NonDynamic5QIDescriptor_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, fiveQI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_FiveQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveQI"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, priorityLevelQoS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_PriorityLevelQoS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityLevelQoS"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, averagingWindow),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AveragingWindow,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"averagingWindow"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, maximumDataBurstVolume),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MaximumDataBurstVolume,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maximumDataBurstVolume"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P190,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_NonDynamic5QIDescriptor_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NonDynamic5QIDescriptor_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fiveQI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* priorityLevelQoS */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* averagingWindow */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maximumDataBurstVolume */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NonDynamic5QIDescriptor_specs_1 = {
	sizeof(struct ASN_XNAP_NonDynamic5QIDescriptor),
	offsetof(struct ASN_XNAP_NonDynamic5QIDescriptor, _asn_ctx),
	asn_MAP_ASN_XNAP_NonDynamic5QIDescriptor_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NonDynamic5QIDescriptor_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor = {
	"NonDynamic5QIDescriptor",
	"NonDynamic5QIDescriptor",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NonDynamic5QIDescriptor_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NonDynamic5QIDescriptor_1,
	5,	/* Elements count */
	&asn_SPC_ASN_XNAP_NonDynamic5QIDescriptor_specs_1	/* Additional specs */
};

