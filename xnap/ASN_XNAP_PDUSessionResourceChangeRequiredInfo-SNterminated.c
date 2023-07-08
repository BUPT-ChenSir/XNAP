/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PDUSessionResourceChangeRequiredInfo-SNterminated.h"

#include "ASN_XNAP_DataforwardingandOffloadingInfofromSource.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated, dataforwardinginfofromSource),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DataforwardingandOffloadingInfofromSource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataforwardinginfofromSource"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P252,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataforwardinginfofromSource */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_specs_1 = {
	sizeof(struct ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated),
	offsetof(struct ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated, _asn_ctx),
	asn_MAP_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated = {
	"PDUSessionResourceChangeRequiredInfo-SNterminated",
	"PDUSessionResourceChangeRequiredInfo-SNterminated",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1,
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_PDUSessionResourceChangeRequiredInfo_SNterminated_specs_1	/* Additional specs */
};

