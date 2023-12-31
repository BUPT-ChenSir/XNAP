/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PDUSessionResourceModRqdInfo-SNterminated.h"

#include "ASN_XNAP_UPTransportLayerInformation.h"
#include "ASN_XNAP_QoSFlows-List-withCause.h"
#include "ASN_XNAP_DataforwardingandOffloadingInfofromSource.h"
#include "ASN_XNAP_DRBsToBeSetup-List-ModRqd-SNterminated.h"
#include "ASN_XNAP_DRBsToBeModified-List-ModRqd-SNterminated.h"
#include "ASN_XNAP_DRB-List-withCause.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_1[] = {
	{ ATF_POINTER, 7, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, dL_NG_U_TNLatNG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-NG-U-TNLatNG-RAN"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, qoSFlowsToBeReleased_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_QoSFlows_List_withCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoSFlowsToBeReleased-List"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, dataforwardinginfofromSource),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DataforwardingandOffloadingInfofromSource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataforwardinginfofromSource"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, drbsToBeSetupList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRBsToBeSetup_List_ModRqd_SNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drbsToBeSetupList"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, drbsToBeModifiedList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drbsToBeModifiedList"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, dRBsToBeReleased),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DRB_List_withCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBsToBeReleased"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P256,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-NG-U-TNLatNG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qoSFlowsToBeReleased-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dataforwardinginfofromSource */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* drbsToBeSetupList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* drbsToBeModifiedList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dRBsToBeReleased */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_specs_1 = {
	sizeof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated),
	offsetof(struct ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated, _asn_ctx),
	asn_MAP_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated = {
	"PDUSessionResourceModRqdInfo-SNterminated",
	"PDUSessionResourceModRqdInfo-SNterminated",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1,
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_1,
	7,	/* Elements count */
	&asn_SPC_ASN_XNAP_PDUSessionResourceModRqdInfo_SNterminated_specs_1	/* Additional specs */
};

