/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-CommonDataTypes"
 * 	found in "../xnap_asn.1/XnAP-CommonDataTypes.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_PrivateIE-ID.h"

static int
memb_ASN_XNAP_local_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_local_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_local_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_PrivateIE_ID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_XNAP_PrivateIE_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_PrivateIE_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PrivateIE_ID, choice.local),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_local_constr_2, &asn_PER_memb_ASN_XNAP_local_constr_2,  memb_ASN_XNAP_local_constraint_1 },
		0, 0, /* No default value */
		"local"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PrivateIE_ID, choice.global),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"global"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_PrivateIE_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* local */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* global */
};
asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_PrivateIE_ID_specs_1 = {
	sizeof(struct ASN_XNAP_PrivateIE_ID),
	offsetof(struct ASN_XNAP_PrivateIE_ID, _asn_ctx),
	offsetof(struct ASN_XNAP_PrivateIE_ID, present),
	sizeof(((struct ASN_XNAP_PrivateIE_ID *)0)->present),
	asn_MAP_ASN_XNAP_PrivateIE_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PrivateIE_ID = {
	"PrivateIE-ID",
	"PrivateIE-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_XNAP_PrivateIE_ID_constr_1, &asn_PER_type_ASN_XNAP_PrivateIE_ID_constr_1, CHOICE_constraint },
	asn_MBR_ASN_XNAP_PrivateIE_ID_1,
	2,	/* Elements count */
	&asn_SPC_ASN_XNAP_PrivateIE_ID_specs_1	/* Additional specs */
};

