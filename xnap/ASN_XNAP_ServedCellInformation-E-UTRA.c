/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ServedCellInformation-E-UTRA.h"

#include "ASN_XNAP_E-UTRAPRACHConfiguration.h"
#include "ASN_XNAP_MBSFNSubframeInfo-E-UTRA.h"
#include "ASN_XNAP_E-UTRAMultibandInfoList.h"
#include "ASN_XNAP_ProtectedE-UTRAResourceIndication.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
#include "ASN_XNAP_ServedCellInformation-E-UTRA-perBPLMN.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_XNAP_broadcastPLMNs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ASN_XNAP_broadcastPLMNs_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..12)) */};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_broadcastPLMNs_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_freqBandIndicatorPriority_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_freqBandIndicatorPriority_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_bandwidthReducedSI_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_bandwidthReducedSI_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_broadcastPLMNs_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..12)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_broadcastPLMNs_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_XNAP_broadcastPLMNs_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_perBPLMN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_XNAP_broadcastPLMNs_specs_6 = {
	sizeof(struct ASN_XNAP_ServedCellInformation_E_UTRA__broadcastPLMNs),
	offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA__broadcastPLMNs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_broadcastPLMNs_6 = {
	"broadcastPLMNs",
	"broadcastPLMNs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6,
	sizeof(asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6)
		/sizeof(asn_DEF_ASN_XNAP_broadcastPLMNs_tags_6[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_broadcastPLMNs_constr_6, &asn_PER_type_ASN_XNAP_broadcastPLMNs_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_ASN_XNAP_broadcastPLMNs_6,
	1,	/* Single element */
	&asn_SPC_ASN_XNAP_broadcastPLMNs_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_freqBandIndicatorPriority_value2enum_13[] = {
	{ 0,	13,	"not-broadcast" },
	{ 1,	9,	"broadcast" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_freqBandIndicatorPriority_enum2value_13[] = {
	1,	/* broadcast(1) */
	0	/* not-broadcast(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_freqBandIndicatorPriority_specs_13 = {
	asn_MAP_ASN_XNAP_freqBandIndicatorPriority_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_freqBandIndicatorPriority_enum2value_13,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_freqBandIndicatorPriority_13 = {
	"freqBandIndicatorPriority",
	"freqBandIndicatorPriority",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13,
	sizeof(asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13)
		/sizeof(asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13)
		/sizeof(asn_DEF_ASN_XNAP_freqBandIndicatorPriority_tags_13[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_freqBandIndicatorPriority_constr_13, &asn_PER_type_ASN_XNAP_freqBandIndicatorPriority_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_freqBandIndicatorPriority_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_bandwidthReducedSI_value2enum_17[] = {
	{ 0,	9,	"scheduled" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_bandwidthReducedSI_enum2value_17[] = {
	0	/* scheduled(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_bandwidthReducedSI_specs_17 = {
	asn_MAP_ASN_XNAP_bandwidthReducedSI_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_bandwidthReducedSI_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_bandwidthReducedSI_17 = {
	"bandwidthReducedSI",
	"bandwidthReducedSI",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17,
	sizeof(asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17)
		/sizeof(asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17)
		/sizeof(asn_DEF_ASN_XNAP_bandwidthReducedSI_tags_17[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_bandwidthReducedSI_constr_17, &asn_PER_type_ASN_XNAP_bandwidthReducedSI_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_bandwidthReducedSI_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_ServedCellInformation_E_UTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, e_utra_pci),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-pci"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, e_utra_cgi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-cgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, tac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tac"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, ranac),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_RANAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, broadcastPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ASN_XNAP_broadcastPLMNs_6,
		0,
		{ &asn_OER_memb_ASN_XNAP_broadcastPLMNs_constr_6, &asn_PER_memb_ASN_XNAP_broadcastPLMNs_constr_6,  memb_ASN_XNAP_broadcastPLMNs_constraint_1 },
		0, 0, /* No default value */
		"broadcastPLMNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, e_utra_mode_info),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_ModeInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-mode-info"
		},
	{ ATF_POINTER, 8, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, numberofAntennaPorts),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NumberOfAntennaPorts_E_UTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberofAntennaPorts"
		},
	{ ATF_POINTER, 7, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, prach_configuration),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAPRACHConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-configuration"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, mBSFNsubframeInfo),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MBSFNSubframeInfo_E_UTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mBSFNsubframeInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, multibandInfo),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAMultibandInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multibandInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, freqBandIndicatorPriority),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_freqBandIndicatorPriority_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicatorPriority"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, bandwidthReducedSI),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_bandwidthReducedSI_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandwidthReducedSI"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, protectedE_UTRAResourceIndication),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtectedE_UTRAResourceIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedE-UTRAResourceIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P320,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_oms_1[] = { 3, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-utra-pci */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utra-cgi */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tac */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* broadcastPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-utra-mode-info */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* numberofAntennaPorts */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* prach-configuration */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* mBSFNsubframeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* multibandInfo */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* freqBandIndicatorPriority */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* bandwidthReducedSI */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* protectedE-UTRAResourceIndication */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ServedCellInformation_E_UTRA_specs_1 = {
	sizeof(struct ASN_XNAP_ServedCellInformation_E_UTRA),
	offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA, _asn_ctx),
	asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	14,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA = {
	"ServedCellInformation-E-UTRA",
	"ServedCellInformation-E-UTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1,
	sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_ServedCellInformation_E_UTRA_1,
	14,	/* Elements count */
	&asn_SPC_ASN_XNAP_ServedCellInformation_E_UTRA_specs_1	/* Additional specs */
};

