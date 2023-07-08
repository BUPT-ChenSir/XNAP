/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_TimeToTrigger.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_TimeToTrigger_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_TimeToTrigger_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_TimeToTrigger_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms64" },
	{ 3,	4,	"ms80" },
	{ 4,	5,	"ms100" },
	{ 5,	5,	"ms128" },
	{ 6,	5,	"ms160" },
	{ 7,	5,	"ms256" },
	{ 8,	5,	"ms320" },
	{ 9,	5,	"ms480" },
	{ 10,	5,	"ms512" },
	{ 11,	5,	"ms640" },
	{ 12,	6,	"ms1024" },
	{ 13,	6,	"ms1280" },
	{ 14,	6,	"ms2560" },
	{ 15,	6,	"ms5120" }
};
static const unsigned int asn_MAP_ASN_XNAP_TimeToTrigger_enum2value_1[] = {
	0,	/* ms0(0) */
	4,	/* ms100(4) */
	12,	/* ms1024(12) */
	5,	/* ms128(5) */
	13,	/* ms1280(13) */
	6,	/* ms160(6) */
	7,	/* ms256(7) */
	14,	/* ms2560(14) */
	8,	/* ms320(8) */
	1,	/* ms40(1) */
	9,	/* ms480(9) */
	10,	/* ms512(10) */
	15,	/* ms5120(15) */
	2,	/* ms64(2) */
	11,	/* ms640(11) */
	3	/* ms80(3) */
};
const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_TimeToTrigger_specs_1 = {
	asn_MAP_ASN_XNAP_TimeToTrigger_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_TimeToTrigger_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_TimeToTrigger_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_TimeToTrigger = {
	"TimeToTrigger",
	"TimeToTrigger",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_TimeToTrigger_tags_1,
	sizeof(asn_DEF_ASN_XNAP_TimeToTrigger_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_TimeToTrigger_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_TimeToTrigger_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_TimeToTrigger_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_TimeToTrigger_tags_1[0]), /* 1 */
	{ &asn_OER_type_ASN_XNAP_TimeToTrigger_constr_1, &asn_PER_type_ASN_XNAP_TimeToTrigger_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_TimeToTrigger_specs_1	/* Additional specs */
};

