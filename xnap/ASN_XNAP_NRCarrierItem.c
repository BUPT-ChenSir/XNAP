/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_NRCarrierItem.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_ASN_XNAP_offsetToCarrier_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2199)) {
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
memb_ASN_XNAP_carrierBandwidth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 275)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_offsetToCarrier_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_offsetToCarrier_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  12,  12,  0,  2199 }	/* (0..2199,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_carrierBandwidth_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_carrierBandwidth_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  9,  9,  0,  275 }	/* (0..275,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_NRCarrierItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NRCarrierItem, carrierSCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRSCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierSCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NRCarrierItem, offsetToCarrier),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_offsetToCarrier_constr_3, &asn_PER_memb_ASN_XNAP_offsetToCarrier_constr_3,  memb_ASN_XNAP_offsetToCarrier_constraint_1 },
		0, 0, /* No default value */
		"offsetToCarrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NRCarrierItem, carrierBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ASN_XNAP_carrierBandwidth_constr_4, &asn_PER_memb_ASN_XNAP_carrierBandwidth_constr_4,  memb_ASN_XNAP_carrierBandwidth_constraint_1 },
		0, 0, /* No default value */
		"carrierBandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NRCarrierItem, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P189,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_NRCarrierItem_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_NRCarrierItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_NRCarrierItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierSCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetToCarrier */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NRCarrierItem_specs_1 = {
	sizeof(struct ASN_XNAP_NRCarrierItem),
	offsetof(struct ASN_XNAP_NRCarrierItem, _asn_ctx),
	asn_MAP_ASN_XNAP_NRCarrierItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_NRCarrierItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NRCarrierItem = {
	"NRCarrierItem",
	"NRCarrierItem",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_NRCarrierItem_tags_1,
	sizeof(asn_DEF_ASN_XNAP_NRCarrierItem_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NRCarrierItem_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_NRCarrierItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_NRCarrierItem_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_NRCarrierItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_NRCarrierItem_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_NRCarrierItem_specs_1	/* Additional specs */
};

