/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NPN-Support.h"

#include "ASN_XNAP_NPN-Support-SNPN.h"
#include "ASN_XNAP_ProtocolIE-Single-Container.h"
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_NPN_Support_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_NPN_Support_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_NPN_Support_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_NPN_Support, choice.sNPN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NPN_Support_SNPN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sNPN"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_NPN_Support, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NPN_Support_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sNPN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_NPN_Support_specs_1 = {
	sizeof(struct ASN_XNAP_NPN_Support),
	offsetof(struct ASN_XNAP_NPN_Support, _asn_ctx),
	offsetof(struct ASN_XNAP_NPN_Support, present),
	sizeof(((struct ASN_XNAP_NPN_Support *)0)->present),
	asn_MAP_ASN_XNAP_NPN_Support_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NPN_Support = {
	"NPN-Support",
	"NPN-Support",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_NPN_Support_constr_1, &asn_PER_type_ASN_XNAP_NPN_Support_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_NPN_Support_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_NPN_Support_specs_1	/* Additional specs */
};

