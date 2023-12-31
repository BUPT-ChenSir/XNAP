/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ActivatedServedCells.h"

#include "ASN_XNAP_ProtocolIE-Single-Container.h"
#include "ASN_XNAP_NR-CGI.h"
#include "ASN_XNAP_E-UTRA-CGI.h"
static int
memb_ASN_XNAP_nr_cells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_ASN_XNAP_e_utra_cells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_ASN_XNAP_nr_cells_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_nr_cells_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_e_utra_cells_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_e_utra_cells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_nr_cells_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_nr_cells_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_e_utra_cells_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16384)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_e_utra_cells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_ActivatedServedCells_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_ActivatedServedCells_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_XNAP_nr_cells_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ASN_XNAP_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_nr_cells_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_XNAP_nr_cells_specs_2 = {
	sizeof(struct ASN_XNAP_ActivatedServedCells__nr_cells),
	offsetof(struct ASN_XNAP_ActivatedServedCells__nr_cells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_nr_cells_2 = {
	"nr-cells",
	"nr-cells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_XNAP_nr_cells_tags_2,
	sizeof(asn_DEF_ASN_XNAP_nr_cells_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_nr_cells_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_nr_cells_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_nr_cells_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_nr_cells_tags_2[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_nr_cells_constr_2, &asn_PER_type_ASN_XNAP_nr_cells_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_ASN_XNAP_nr_cells_2,
	1,	/* Single element */
	&asn_SPC_ASN_XNAP_nr_cells_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_XNAP_e_utra_cells_4[] = {
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
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_e_utra_cells_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_XNAP_e_utra_cells_specs_4 = {
	sizeof(struct ASN_XNAP_ActivatedServedCells__e_utra_cells),
	offsetof(struct ASN_XNAP_ActivatedServedCells__e_utra_cells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_e_utra_cells_4 = {
	"e-utra-cells",
	"e-utra-cells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_XNAP_e_utra_cells_tags_4,
	sizeof(asn_DEF_ASN_XNAP_e_utra_cells_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_e_utra_cells_tags_4[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_e_utra_cells_tags_4,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_e_utra_cells_tags_4)
		/sizeof(asn_DEF_ASN_XNAP_e_utra_cells_tags_4[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_e_utra_cells_constr_4, &asn_PER_type_ASN_XNAP_e_utra_cells_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ASN_XNAP_e_utra_cells_4,
	1,	/* Single element */
	&asn_SPC_ASN_XNAP_e_utra_cells_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_ActivatedServedCells_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ActivatedServedCells, choice.nr_cells),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ASN_XNAP_nr_cells_2,
		0,
		{ &asn_OER_memb_ASN_XNAP_nr_cells_constr_2, &asn_PER_memb_ASN_XNAP_nr_cells_constr_2,  memb_ASN_XNAP_nr_cells_constraint_1 },
		0, 0, /* No default value */
		"nr-cells"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ActivatedServedCells, choice.e_utra_cells),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ASN_XNAP_e_utra_cells_4,
		0,
		{ &asn_OER_memb_ASN_XNAP_e_utra_cells_constr_4, &asn_PER_memb_ASN_XNAP_e_utra_cells_constr_4,  memb_ASN_XNAP_e_utra_cells_constraint_1 },
		0, 0, /* No default value */
		"e-utra-cells"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_ActivatedServedCells, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolIE_Single_Container_121P71,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ActivatedServedCells_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-cells */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utra-cells */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_ActivatedServedCells_specs_1 = {
	sizeof(struct ASN_XNAP_ActivatedServedCells),
	offsetof(struct ASN_XNAP_ActivatedServedCells, _asn_ctx),
	offsetof(struct ASN_XNAP_ActivatedServedCells, present),
	sizeof(((struct ASN_XNAP_ActivatedServedCells *)0)->present),
	asn_MAP_ASN_XNAP_ActivatedServedCells_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ActivatedServedCells = {
	"ActivatedServedCells",
	"ActivatedServedCells",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_ActivatedServedCells_constr_1, &asn_PER_type_ASN_XNAP_ActivatedServedCells_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_ActivatedServedCells_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_ActivatedServedCells_specs_1	/* Additional specs */
};

