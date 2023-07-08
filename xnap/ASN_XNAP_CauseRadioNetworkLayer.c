/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_CauseRadioNetworkLayer.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_CauseRadioNetworkLayer_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_CauseRadioNetworkLayer_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  52 }	/* (0..52,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_CauseRadioNetworkLayer_value2enum_1[] = {
	{ 0,	18,	"cell-not-available" },
	{ 1,	36,	"handover-desirable-for-radio-reasons" },
	{ 2,	27,	"handover-target-not-allowed" },
	{ 3,	18,	"invalid-AMF-Set-ID" },
	{ 4,	43,	"no-radio-resources-available-in-target-cell" },
	{ 5,	16,	"partial-handover" },
	{ 6,	27,	"reduce-load-in-serving-cell" },
	{ 7,	30,	"resource-optimisation-handover" },
	{ 8,	22,	"time-critical-handover" },
	{ 9,	22,	"tXnRELOCoverall-expiry" },
	{ 10,	19,	"tXnRELOCprep-expiry" },
	{ 11,	16,	"unknown-GUAMI-ID" },
	{ 12,	36,	"unknown-local-NG-RAN-node-UE-XnAP-ID" },
	{ 13,	42,	"inconsistent-remote-NG-RAN-node-UE-XnAP-ID" },
	{ 14,	63,	"encryption-and-or-integrity-protection-algorithms-not-supported" },
	{ 15,	23,	"not-used-causes-value-1" },
	{ 16,	33,	"multiple-PDU-session-ID-instances" },
	{ 17,	22,	"unknown-PDU-session-ID" },
	{ 18,	19,	"unknown-QoS-Flow-ID" },
	{ 19,	30,	"multiple-QoS-Flow-ID-instances" },
	{ 20,	18,	"switch-off-ongoing" },
	{ 21,	23,	"not-supported-5QI-value" },
	{ 22,	19,	"tXnDCoverall-expiry" },
	{ 23,	16,	"tXnDCprep-expiry" },
	{ 24,	34,	"action-desirable-for-radio-reasons" },
	{ 25,	11,	"reduce-load" },
	{ 26,	21,	"resource-optimisation" },
	{ 27,	20,	"time-critical-action" },
	{ 28,	18,	"target-not-allowed" },
	{ 29,	28,	"no-radio-resources-available" },
	{ 30,	23,	"invalid-QoS-combination" },
	{ 31,	35,	"encryption-algorithms-not-supported" },
	{ 32,	19,	"procedure-cancelled" },
	{ 33,	11,	"rRM-purpose" },
	{ 34,	21,	"improve-user-bit-rate" },
	{ 35,	15,	"user-inactivity" },
	{ 36,	29,	"radio-connection-with-UE-lost" },
	{ 37,	40,	"failure-in-the-radio-interface-procedure" },
	{ 38,	27,	"bearer-option-not-supported" },
	{ 39,	36,	"up-integrity-protection-not-possible" },
	{ 40,	42,	"up-confidentiality-protection-not-possible" },
	{ 41,	39,	"resources-not-available-for-the-slice-s" },
	{ 42,	26,	"ue-max-IP-data-rate-reason" },
	{ 43,	31,	"cP-integrity-protection-failure" },
	{ 44,	31,	"uP-integrity-protection-failure" },
	{ 45,	29,	"slice-not-supported-by-NG-RAN" },
	{ 46,	11,	"mN-Mobility" },
	{ 47,	11,	"sN-Mobility" },
	{ 48,	23,	"count-reaches-max-value" },
	{ 49,	34,	"unknown-old-NG-RAN-node-UE-XnAP-ID" },
	{ 50,	13,	"pDCP-Overload" },
	{ 51,	20,	"drb-id-not-available" },
	{ 52,	11,	"unspecified" },
	{ 53,	23,	"ue-context-id-not-known" },
	{ 54,	25,	"non-relocation-of-context" },
	{ 55,	29,	"cho-cpc-resources-tobechanged" },
	{ 56,	28,	"rSN-not-available-for-the-UP" },
	{ 57,	17,	"npn-access-denied" },
	{ 58,	28,	"report-characteristics-empty" },
	{ 59,	23,	"existing-measurement-ID" },
	{ 60,	37,	"measurement-temporarily-not-available" },
	{ 61,	40,	"measurement-not-supported-for-the-object" },
	{ 62,	15,	"ue-power-saving" },
	{ 63,	35,	"unknown-NG-RAN-node2-Measurement-ID" },
	{ 64,	28,	"insufficient-ue-capabilities" },
	{ 65,	14,	"normal-release" },
	{ 66,	26,	"value-out-of-allowed-range" },
	{ 67,	35,	"scg-activation-deactivation-failure" },
	{ 68,	49,	"scg-deactivation-failure-due-to-data-transmission" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_CauseRadioNetworkLayer_enum2value_1[] = {
	24,	/* action-desirable-for-radio-reasons(24) */
	38,	/* bearer-option-not-supported(38) */
	43,	/* cP-integrity-protection-failure(43) */
	0,	/* cell-not-available(0) */
	55,	/* cho-cpc-resources-tobechanged(55) */
	48,	/* count-reaches-max-value(48) */
	51,	/* drb-id-not-available(51) */
	31,	/* encryption-algorithms-not-supported(31) */
	14,	/* encryption-and-or-integrity-protection-algorithms-not-supported(14) */
	59,	/* existing-measurement-ID(59) */
	37,	/* failure-in-the-radio-interface-procedure(37) */
	1,	/* handover-desirable-for-radio-reasons(1) */
	2,	/* handover-target-not-allowed(2) */
	34,	/* improve-user-bit-rate(34) */
	13,	/* inconsistent-remote-NG-RAN-node-UE-XnAP-ID(13) */
	64,	/* insufficient-ue-capabilities(64) */
	3,	/* invalid-AMF-Set-ID(3) */
	30,	/* invalid-QoS-combination(30) */
	46,	/* mN-Mobility(46) */
	61,	/* measurement-not-supported-for-the-object(61) */
	60,	/* measurement-temporarily-not-available(60) */
	16,	/* multiple-PDU-session-ID-instances(16) */
	19,	/* multiple-QoS-Flow-ID-instances(19) */
	29,	/* no-radio-resources-available(29) */
	4,	/* no-radio-resources-available-in-target-cell(4) */
	54,	/* non-relocation-of-context(54) */
	65,	/* normal-release(65) */
	21,	/* not-supported-5QI-value(21) */
	15,	/* not-used-causes-value-1(15) */
	57,	/* npn-access-denied(57) */
	50,	/* pDCP-Overload(50) */
	5,	/* partial-handover(5) */
	32,	/* procedure-cancelled(32) */
	33,	/* rRM-purpose(33) */
	56,	/* rSN-not-available-for-the-UP(56) */
	36,	/* radio-connection-with-UE-lost(36) */
	25,	/* reduce-load(25) */
	6,	/* reduce-load-in-serving-cell(6) */
	58,	/* report-characteristics-empty(58) */
	26,	/* resource-optimisation(26) */
	7,	/* resource-optimisation-handover(7) */
	41,	/* resources-not-available-for-the-slice-s(41) */
	47,	/* sN-Mobility(47) */
	67,	/* scg-activation-deactivation-failure(67) */
	68,	/* scg-deactivation-failure-due-to-data-transmission(68) */
	45,	/* slice-not-supported-by-NG-RAN(45) */
	20,	/* switch-off-ongoing(20) */
	22,	/* tXnDCoverall-expiry(22) */
	23,	/* tXnDCprep-expiry(23) */
	9,	/* tXnRELOCoverall-expiry(9) */
	10,	/* tXnRELOCprep-expiry(10) */
	28,	/* target-not-allowed(28) */
	27,	/* time-critical-action(27) */
	8,	/* time-critical-handover(8) */
	44,	/* uP-integrity-protection-failure(44) */
	53,	/* ue-context-id-not-known(53) */
	42,	/* ue-max-IP-data-rate-reason(42) */
	62,	/* ue-power-saving(62) */
	11,	/* unknown-GUAMI-ID(11) */
	63,	/* unknown-NG-RAN-node2-Measurement-ID(63) */
	17,	/* unknown-PDU-session-ID(17) */
	18,	/* unknown-QoS-Flow-ID(18) */
	12,	/* unknown-local-NG-RAN-node-UE-XnAP-ID(12) */
	49,	/* unknown-old-NG-RAN-node-UE-XnAP-ID(49) */
	52,	/* unspecified(52) */
	40,	/* up-confidentiality-protection-not-possible(40) */
	39,	/* up-integrity-protection-not-possible(39) */
	35,	/* user-inactivity(35) */
	66	/* value-out-of-allowed-range(66) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_CauseRadioNetworkLayer_specs_1 = {
	asn_MAP_ASN_XNAP_CauseRadioNetworkLayer_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_CauseRadioNetworkLayer_enum2value_1,	/* N => "tag"; sorted by N */
	69,	/* Number of elements in the maps */
	54,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CauseRadioNetworkLayer = {
	"CauseRadioNetworkLayer",
	"CauseRadioNetworkLayer",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1,
	sizeof(asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_CauseRadioNetworkLayer_tags_1[0]), /* 1 */
	{ &asn_OER_type_ASN_XNAP_CauseRadioNetworkLayer_constr_1, &asn_PER_type_ASN_XNAP_CauseRadioNetworkLayer_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_CauseRadioNetworkLayer_specs_1	/* Additional specs */
};
