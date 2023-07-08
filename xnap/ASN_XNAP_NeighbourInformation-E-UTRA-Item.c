/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NeighbourInformation-E-UTRA-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_NeighbourInformation_E_UTRA_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, e_utra_PCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-PCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, e_utra_cgi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-cgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, earfcn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, tac),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tac"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, ranac),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RANAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P184,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_NeighbourInformation_E_UTRA_Item_oms_1[] = { 4, 5 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-utra-PCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utra-cgi */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* earfcn */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tac */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NeighbourInformation_E_UTRA_Item_specs_1 = {
	sizeof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item),
	offsetof(struct ASN_XNAP_NeighbourInformation_E_UTRA_Item, _asn_ctx),
	asn_MAP_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NeighbourInformation_E_UTRA_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item = {
	"NeighbourInformation-E-UTRA-Item",
	"NeighbourInformation-E-UTRA-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NeighbourInformation_E_UTRA_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NeighbourInformation_E_UTRA_Item_1,
	6,	/* Elements count */
	&asn_SPC_ASN_XNAP_NeighbourInformation_E_UTRA_Item_specs_1	/* Additional specs */
};

