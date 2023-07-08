/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_SymbolAllocation-in-Slot-BothDLandUL.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_ASN_XNAP_numberofDLSymbols_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 13)) {
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
memb_ASN_XNAP_numberofULSymbols_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_numberofDLSymbols_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_numberofDLSymbols_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_numberofULSymbols_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_numberofULSymbols_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL, numberofDLSymbols),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_numberofDLSymbols_constr_2, &asn_PER_memb_ASN_XNAP_numberofDLSymbols_constr_2,  memb_ASN_XNAP_numberofDLSymbols_constraint_1 },
		0, 0, /* No default value */
		"numberofDLSymbols"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL, numberofULSymbols),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_numberofULSymbols_constr_3, &asn_PER_memb_ASN_XNAP_numberofULSymbols_constr_3,  memb_ASN_XNAP_numberofULSymbols_constraint_1 },
		0, 0, /* No default value */
		"numberofULSymbols"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P357,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberofDLSymbols */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberofULSymbols */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_specs_1 = {
	sizeof(struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL),
	offsetof(struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL, _asn_ctx),
	asn_MAP_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL = {
	"SymbolAllocation-in-Slot-BothDLandUL",
	"SymbolAllocation-in-Slot-BothDLandUL",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1,
	sizeof(asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL_specs_1	/* Additional specs */
};

