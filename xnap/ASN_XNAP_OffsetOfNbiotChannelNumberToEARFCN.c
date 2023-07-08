/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  24 }	/* (0..24,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_value2enum_1[] = {
	{ 0,	8,	"minusTen" },
	{ 1,	9,	"minusNine" },
	{ 2,	17,	"minusEightDotFive" },
	{ 3,	10,	"minusEight" },
	{ 4,	10,	"minusSeven" },
	{ 5,	8,	"minusSix" },
	{ 6,	9,	"minusFive" },
	{ 7,	16,	"minusFourDotFive" },
	{ 8,	9,	"minusFour" },
	{ 9,	10,	"minusThree" },
	{ 10,	8,	"minusTwo" },
	{ 11,	8,	"minusOne" },
	{ 12,	16,	"minusZeroDotFive" },
	{ 13,	4,	"zero" },
	{ 14,	3,	"one" },
	{ 15,	3,	"two" },
	{ 16,	5,	"three" },
	{ 17,	12,	"threeDotFive" },
	{ 18,	4,	"four" },
	{ 19,	4,	"five" },
	{ 20,	3,	"six" },
	{ 21,	5,	"seven" },
	{ 22,	12,	"sevenDotFive" },
	{ 23,	5,	"eight" },
	{ 24,	4,	"nine" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_enum2value_1[] = {
	23,	/* eight(23) */
	19,	/* five(19) */
	18,	/* four(18) */
	3,	/* minusEight(3) */
	2,	/* minusEightDotFive(2) */
	6,	/* minusFive(6) */
	8,	/* minusFour(8) */
	7,	/* minusFourDotFive(7) */
	1,	/* minusNine(1) */
	11,	/* minusOne(11) */
	4,	/* minusSeven(4) */
	5,	/* minusSix(5) */
	0,	/* minusTen(0) */
	9,	/* minusThree(9) */
	10,	/* minusTwo(10) */
	12,	/* minusZeroDotFive(12) */
	24,	/* nine(24) */
	14,	/* one(14) */
	21,	/* seven(21) */
	22,	/* sevenDotFive(22) */
	20,	/* six(20) */
	16,	/* three(16) */
	17,	/* threeDotFive(17) */
	15,	/* two(15) */
	13	/* zero(13) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_specs_1 = {
	asn_MAP_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_enum2value_1,	/* N => "tag"; sorted by N */
	25,	/* Number of elements in the maps */
	26,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN = {
	"OffsetOfNbiotChannelNumberToEARFCN",
	"OffsetOfNbiotChannelNumberToEARFCN",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1,
	sizeof(asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_tags_1[0]), /* 1 */
	{ &asn_OER_type_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_constr_1, &asn_PER_type_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_OffsetOfNbiotChannelNumberToEARFCN_specs_1	/* Additional specs */
};

