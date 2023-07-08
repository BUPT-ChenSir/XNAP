/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ResourceCoordResponse-ng-eNB-initiated.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
#include "ASN_XNAP_E-UTRA-CGI.h"
static int
memb_ASN_XNAP_listofE_UTRACells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16384)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ASN_XNAP_listofE_UTRACells_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_listofE_UTRACells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_listofE_UTRACells_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_listofE_UTRACells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_XNAP_listofE_UTRACells_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ASN_XNAP_E_UTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_XNAP_listofE_UTRACells_specs_4 = {
	sizeof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated__listofE_UTRACells),
	offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated__listofE_UTRACells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_listofE_UTRACells_4 = {
	"listofE-UTRACells",
	"listofE-UTRACells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4,
	sizeof(asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_listofE_UTRACells_tags_4[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_listofE_UTRACells_constr_4, &asn_PER_type_ASN_XNAP_listofE_UTRACells_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ASN_XNAP_listofE_UTRACells_4,
	1,	/* Single element */
	&asn_SPC_ASN_XNAP_listofE_UTRACells_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated, dataTrafficResourceIndication),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_DataTrafficResourceIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataTrafficResourceIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated, spectrumSharingGroupID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_SpectrumSharingGroupID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spectrumSharingGroupID"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated, listofE_UTRACells),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ASN_XNAP_listofE_UTRACells_4,
		0,
		{ &asn_OER_memb_ASN_XNAP_listofE_UTRACells_constr_4, &asn_PER_memb_ASN_XNAP_listofE_UTRACells_constr_4,  memb_ASN_XNAP_listofE_UTRACells_constraint_1 },
		0, 0, /* No default value */
		"listofE-UTRACells"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P436,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataTrafficResourceIndication */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* spectrumSharingGroupID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* listofE-UTRACells */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_specs_1 = {
	sizeof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated),
	offsetof(struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated, _asn_ctx),
	asn_MAP_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated = {
	"ResourceCoordResponse-ng-eNB-initiated",
	"ResourceCoordResponse-ng-eNB-initiated",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1,
	sizeof(asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_specs_1	/* Additional specs */
};

