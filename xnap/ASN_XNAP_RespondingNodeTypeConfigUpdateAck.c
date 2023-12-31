/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_RespondingNodeTypeConfigUpdateAck.h"

#include "ASN_XNAP_RespondingNodeTypeConfigUpdateAck-ng-eNB.h"
#include "ASN_XNAP_RespondingNodeTypeConfigUpdateAck-gNB.h"
#include "ASN_XNAP_ProtocolIE-Single-Container.h"
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck, choice.ng_eNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_ng_eNB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-eNB"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck, choice.gNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_gNB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P67,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-eNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gNB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_specs_1 = {
	sizeof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck),
	offsetof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck, _asn_ctx),
	offsetof(struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck, present),
	sizeof(((struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck *)0)->present),
	asn_MAP_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_RespondingNodeTypeConfigUpdateAck = {
	"RespondingNodeTypeConfigUpdateAck",
	"RespondingNodeTypeConfigUpdateAck",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_constr_1, &asn_PER_type_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_RespondingNodeTypeConfigUpdateAck_specs_1	/* Additional specs */
};

