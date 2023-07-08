/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_M5ReportAmountMDT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_M5ReportAmountMDT_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_M5ReportAmountMDT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_M5ReportAmountMDT_value2enum_1[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_M5ReportAmountMDT_enum2value_1[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_M5ReportAmountMDT_specs_1 = {
	asn_MAP_ASN_XNAP_M5ReportAmountMDT_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_M5ReportAmountMDT_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_M5ReportAmountMDT = {
	"M5ReportAmountMDT",
	"M5ReportAmountMDT",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1,
	sizeof(asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_M5ReportAmountMDT_tags_1[0]), /* 1 */
	{ &asn_OER_type_ASN_XNAP_M5ReportAmountMDT_constr_1, &asn_PER_type_ASN_XNAP_M5ReportAmountMDT_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_M5ReportAmountMDT_specs_1	/* Additional specs */
};

