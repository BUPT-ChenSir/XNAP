/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ResponseType-ReconfComplete.h"

#include "ASN_XNAP_Configuration-successfully-applied.h"
#include "ASN_XNAP_Configuration-rejected-by-M-NG-RANNode.h"
#include "ASN_XNAP_ProtocolIE-Single-Container.h"
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_ResponseType_ReconfComplete_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_ResponseType_ReconfComplete_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_ResponseType_ReconfComplete_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ResponseType_ReconfComplete, choice.configuration_successfully_applied),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_Configuration_successfully_applied,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configuration-successfully-applied"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ResponseType_ReconfComplete, choice.configuration_rejected_by_M_NG_RANNode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_Configuration_rejected_by_M_NG_RANNode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configuration-rejected-by-M-NG-RANNode"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ResponseType_ReconfComplete, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ResponseType_ReconfComplete_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* configuration-successfully-applied */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* configuration-rejected-by-M-NG-RANNode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_ResponseType_ReconfComplete_specs_1 = {
	sizeof(struct ASN_XNAP_ResponseType_ReconfComplete),
	offsetof(struct ASN_XNAP_ResponseType_ReconfComplete, _asn_ctx),
	offsetof(struct ASN_XNAP_ResponseType_ReconfComplete, present),
	sizeof(((struct ASN_XNAP_ResponseType_ReconfComplete *)0)->present),
	asn_MAP_ASN_XNAP_ResponseType_ReconfComplete_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ResponseType_ReconfComplete = {
	"ResponseType-ReconfComplete",
	"ResponseType-ReconfComplete",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_ResponseType_ReconfComplete_constr_1, &asn_PER_type_ASN_XNAP_ResponseType_ReconfComplete_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_ResponseType_ReconfComplete_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_ResponseType_ReconfComplete_specs_1	/* Additional specs */
};

