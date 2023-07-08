/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NPRACHConfiguration-TDD.h"

#include "ASN_XNAP_Non-AnchorCarrierFrequencylist.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_NPRACHConfiguration_TDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, nprach_preambleFormat),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NPRACH_preambleFormat,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-preambleFormat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, anchorCarrier_NPRACHConfigTDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anchorCarrier-NPRACHConfigTDD"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, non_anchorCarrierFequencyConfiglist),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_Non_AnchorCarrierFrequencylist,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-anchorCarrierFequencyConfiglist"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, non_anchorCarrier_NPRACHConfigTDD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-anchorCarrier-NPRACHConfigTDD"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P203,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_NPRACHConfiguration_TDD_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NPRACHConfiguration_TDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-preambleFormat */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* anchorCarrier-NPRACHConfigTDD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* non-anchorCarrierFequencyConfiglist */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* non-anchorCarrier-NPRACHConfigTDD */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NPRACHConfiguration_TDD_specs_1 = {
	sizeof(struct ASN_XNAP_NPRACHConfiguration_TDD),
	offsetof(struct ASN_XNAP_NPRACHConfiguration_TDD, _asn_ctx),
	asn_MAP_ASN_XNAP_NPRACHConfiguration_TDD_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NPRACHConfiguration_TDD_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD = {
	"NPRACHConfiguration-TDD",
	"NPRACHConfiguration-TDD",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NPRACHConfiguration_TDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NPRACHConfiguration_TDD_1,
	5,	/* Elements count */
	&asn_SPC_ASN_XNAP_NPRACHConfiguration_TDD_specs_1	/* Additional specs */
};
