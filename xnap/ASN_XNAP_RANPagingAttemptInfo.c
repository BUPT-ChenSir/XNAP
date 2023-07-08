/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_RANPagingAttemptInfo.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_XNAP_pagingAttemptCount_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_XNAP_intendedNumberOfPagingAttempts_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ASN_XNAP_nextPagingAreaScope_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_nextPagingAreaScope_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_pagingAttemptCount_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_pagingAttemptCount_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  1,  16 }	/* (1..16,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_intendedNumberOfPagingAttempts_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_intendedNumberOfPagingAttempts_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  1,  16 }	/* (1..16,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_nextPagingAreaScope_value2enum_4[] = {
	{ 0,	4,	"same" },
	{ 1,	7,	"changed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_nextPagingAreaScope_enum2value_4[] = {
	1,	/* changed(1) */
	0	/* same(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_nextPagingAreaScope_specs_4 = {
	asn_MAP_ASN_XNAP_nextPagingAreaScope_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_nextPagingAreaScope_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_nextPagingAreaScope_4 = {
	"nextPagingAreaScope",
	"nextPagingAreaScope",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4,
	sizeof(asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_nextPagingAreaScope_tags_4[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_nextPagingAreaScope_constr_4, &asn_PER_type_ASN_XNAP_nextPagingAreaScope_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_nextPagingAreaScope_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_RANPagingAttemptInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_RANPagingAttemptInfo, pagingAttemptCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_pagingAttemptCount_constr_2, &asn_PER_memb_ASN_XNAP_pagingAttemptCount_constr_2,  memb_ASN_XNAP_pagingAttemptCount_constraint_1 },
		0, 0, /* No default value */
		"pagingAttemptCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_RANPagingAttemptInfo, intendedNumberOfPagingAttempts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_intendedNumberOfPagingAttempts_constr_3, &asn_PER_memb_ASN_XNAP_intendedNumberOfPagingAttempts_constr_3,  memb_ASN_XNAP_intendedNumberOfPagingAttempts_constraint_1 },
		0, 0, /* No default value */
		"intendedNumberOfPagingAttempts"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_RANPagingAttemptInfo, nextPagingAreaScope),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_nextPagingAreaScope_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextPagingAreaScope"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_RANPagingAttemptInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P288,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_RANPagingAttemptInfo_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_RANPagingAttemptInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingAttemptCount */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intendedNumberOfPagingAttempts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nextPagingAreaScope */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_RANPagingAttemptInfo_specs_1 = {
	sizeof(struct ASN_XNAP_RANPagingAttemptInfo),
	offsetof(struct ASN_XNAP_RANPagingAttemptInfo, _asn_ctx),
	asn_MAP_ASN_XNAP_RANPagingAttemptInfo_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_RANPagingAttemptInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_RANPagingAttemptInfo = {
	"RANPagingAttemptInfo",
	"RANPagingAttemptInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1,
	sizeof(asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_RANPagingAttemptInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_RANPagingAttemptInfo_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_RANPagingAttemptInfo_specs_1	/* Additional specs */
};

