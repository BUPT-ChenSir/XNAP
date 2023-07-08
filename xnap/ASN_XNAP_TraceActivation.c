/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_TraceActivation.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_ASN_XNAP_interfaces_to_trace_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ASN_XNAP_interfaces_to_trace_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_ASN_XNAP_interfaces_to_trace_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_XNAP_TraceActivation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TraceActivation, ng_ran_TraceID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NG_RANTraceID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-ran-TraceID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TraceActivation, interfaces_to_trace),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ASN_XNAP_interfaces_to_trace_constr_3, &asn_PER_memb_ASN_XNAP_interfaces_to_trace_constr_3,  memb_ASN_XNAP_interfaces_to_trace_constraint_1 },
		0, 0, /* No default value */
		"interfaces-to-trace"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TraceActivation, trace_depth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_Trace_Depth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trace-depth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TraceActivation, trace_coll_address),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trace-coll-address"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_TraceActivation, ie_Extension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P374,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ie-Extension"
		},
};
static const int asn_MAP_ASN_XNAP_TraceActivation_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_TraceActivation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_TraceActivation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-ran-TraceID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interfaces-to-trace */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trace-depth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trace-coll-address */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ie-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_TraceActivation_specs_1 = {
	sizeof(struct ASN_XNAP_TraceActivation),
	offsetof(struct ASN_XNAP_TraceActivation, _asn_ctx),
	asn_MAP_ASN_XNAP_TraceActivation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_TraceActivation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_TraceActivation = {
	"TraceActivation",
	"TraceActivation",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_TraceActivation_tags_1,
	sizeof(asn_DEF_ASN_XNAP_TraceActivation_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_TraceActivation_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_TraceActivation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_TraceActivation_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_TraceActivation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_TraceActivation_1,
	5,	/* Elements count */
	&asn_SPC_ASN_XNAP_TraceActivation_specs_1	/* Additional specs */
};

