/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NR-ResourceCoordinationInfo.h"

#include "ASN_XNAP_E-UTRA-CGI.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_ASN_XNAP_ul_coordination_info_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 4400)) {
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
memb_ASN_XNAP_dl_coordination_info_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 4400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_ul_coordination_info_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(6..4400)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_ul_coordination_info_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 13,  13,  6,  4400 }	/* (SIZE(6..4400)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_dl_coordination_info_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(6..4400)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_dl_coordination_info_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 13,  13,  6,  4400 }	/* (SIZE(6..4400)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_NR_ResourceCoordinationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, nr_cell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-cell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, ul_coordination_info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ASN_XNAP_ul_coordination_info_constr_3, &asn_PER_memb_ASN_XNAP_ul_coordination_info_constr_3,  memb_ASN_XNAP_ul_coordination_info_constraint_1 },
		0, 0, /* No default value */
		"ul-coordination-info"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, dl_coordination_info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ASN_XNAP_dl_coordination_info_constr_4, &asn_PER_memb_ASN_XNAP_dl_coordination_info_constr_4,  memb_ASN_XNAP_dl_coordination_info_constraint_1 },
		0, 0, /* No default value */
		"dl-coordination-info"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, e_utra_cell),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra-cell"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, nr_coordination_assistance_info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NR_CoordinationAssistanceInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-coordination-assistance-info"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P179,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_NR_ResourceCoordinationInfo_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NR_ResourceCoordinationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-cell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-coordination-info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-coordination-info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-utra-cell */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nr-coordination-assistance-info */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NR_ResourceCoordinationInfo_specs_1 = {
	sizeof(struct ASN_XNAP_NR_ResourceCoordinationInfo),
	offsetof(struct ASN_XNAP_NR_ResourceCoordinationInfo, _asn_ctx),
	asn_MAP_ASN_XNAP_NR_ResourceCoordinationInfo_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NR_ResourceCoordinationInfo_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo = {
	"NR-ResourceCoordinationInfo",
	"NR-ResourceCoordinationInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NR_ResourceCoordinationInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NR_ResourceCoordinationInfo_1,
	6,	/* Elements count */
	&asn_SPC_ASN_XNAP_NR_ResourceCoordinationInfo_specs_1	/* Additional specs */
};

