/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PDUSessionResourceModificationInfo-MNterminated.h"

#include "ASN_XNAP_DRBsToBeSetupList-Setup-MNterminated.h"
#include "ASN_XNAP_DRBsToBeModifiedList-Modification-MNterminated.h"
#include "ASN_XNAP_DRB-List-withCause.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, pduSessionType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_PDUSessionType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionType"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, dRBsToBeSetup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRBsToBeSetupList_Setup_MNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBsToBeSetup"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, dRBsToBeModified),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRBsToBeModifiedList_Modification_MNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBsToBeModified"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, dRBsToBeReleased),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRB_List_withCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBsToBeReleased"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P248,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pduSessionType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dRBsToBeSetup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dRBsToBeModified */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dRBsToBeReleased */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_specs_1 = {
	sizeof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated),
	offsetof(struct ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated, _asn_ctx),
	asn_MAP_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated = {
	"PDUSessionResourceModificationInfo-MNterminated",
	"PDUSessionResourceModificationInfo-MNterminated",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1,
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_1,
	5,	/* Elements count */
	&asn_SPC_ASN_XNAP_PDUSessionResourceModificationInfo_MNterminated_specs_1	/* Additional specs */
};

