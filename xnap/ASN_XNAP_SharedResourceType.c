/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_SharedResourceType.h"

#include "ASN_XNAP_SharedResourceType-UL-OnlySharing.h"
#include "ASN_XNAP_SharedResourceType-ULDL-Sharing.h"
#include "ASN_XNAP_ProtocolIE-Single-Container.h"
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_SharedResourceType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_SharedResourceType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_SharedResourceType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_SharedResourceType, choice.ul_onlySharing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_SharedResourceType_UL_OnlySharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-onlySharing"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_SharedResourceType, choice.ul_and_dl_Sharing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_SharedResourceType_ULDL_Sharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-and-dl-Sharing"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_SharedResourceType, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P47,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_SharedResourceType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-onlySharing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-and-dl-Sharing */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_SharedResourceType_specs_1 = {
	sizeof(struct ASN_XNAP_SharedResourceType),
	offsetof(struct ASN_XNAP_SharedResourceType, _asn_ctx),
	offsetof(struct ASN_XNAP_SharedResourceType, present),
	sizeof(((struct ASN_XNAP_SharedResourceType *)0)->present),
	asn_MAP_ASN_XNAP_SharedResourceType_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SharedResourceType = {
	"SharedResourceType",
	"SharedResourceType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_SharedResourceType_constr_1, &asn_PER_type_ASN_XNAP_SharedResourceType_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_SharedResourceType_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_SharedResourceType_specs_1	/* Additional specs */
};

