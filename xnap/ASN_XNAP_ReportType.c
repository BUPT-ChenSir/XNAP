/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ReportType.h"

#include "ASN_XNAP_Periodical.h"
#include "ASN_XNAP_EventTriggered.h"
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_ReportType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_ReportType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_ReportType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ReportType, choice.periodical),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_Periodical,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodical"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ReportType, choice.eventTriggered),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_EventTriggered,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggered"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ReportType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodical */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventTriggered */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_ReportType_specs_1 = {
	sizeof(struct ASN_XNAP_ReportType),
	offsetof(struct ASN_XNAP_ReportType, _asn_ctx),
	offsetof(struct ASN_XNAP_ReportType, present),
	sizeof(((struct ASN_XNAP_ReportType *)0)->present),
	asn_MAP_ASN_XNAP_ReportType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ReportType = {
	"ReportType",
	"ReportType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_ReportType_constr_1, &asn_PER_type_ASN_XNAP_ReportType_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_ReportType_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_ReportType_specs_1	/* Additional specs */
};

