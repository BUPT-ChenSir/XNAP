/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_UEAggregateMaximumBitRate.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_UEAggregateMaximumBitRate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEAggregateMaximumBitRate, dl_UE_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-UE-AMBR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_UEAggregateMaximumBitRate, ul_UE_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-UE-AMBR"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_UEAggregateMaximumBitRate, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P379,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_UEAggregateMaximumBitRate_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_UEAggregateMaximumBitRate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-UE-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-UE-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_UEAggregateMaximumBitRate_specs_1 = {
	sizeof(struct ASN_XNAP_UEAggregateMaximumBitRate),
	offsetof(struct ASN_XNAP_UEAggregateMaximumBitRate, _asn_ctx),
	asn_MAP_ASN_XNAP_UEAggregateMaximumBitRate_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_UEAggregateMaximumBitRate_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate = {
	"UEAggregateMaximumBitRate",
	"UEAggregateMaximumBitRate",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1,
	sizeof(asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_UEAggregateMaximumBitRate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_UEAggregateMaximumBitRate_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_UEAggregateMaximumBitRate_specs_1	/* Additional specs */
};

