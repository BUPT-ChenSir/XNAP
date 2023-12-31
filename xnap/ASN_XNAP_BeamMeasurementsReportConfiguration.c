/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_BeamMeasurementsReportConfiguration.h"

#include "ASN_XNAP_BeamMeasurementsReportQuantity.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_BeamMeasurementsReportConfiguration_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_BeamMeasurementsReportConfiguration, beamMeasurementsReportQuantity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_BeamMeasurementsReportQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamMeasurementsReportQuantity"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_BeamMeasurementsReportConfiguration, maxNrofRS_IndexesToReport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MaxNrofRS_IndexesToReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNrofRS-IndexesToReport"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_BeamMeasurementsReportConfiguration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_BeamMeasurementsReportConfiguration_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_BeamMeasurementsReportConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* beamMeasurementsReportQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNrofRS-IndexesToReport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_BeamMeasurementsReportConfiguration_specs_1 = {
	sizeof(struct ASN_XNAP_BeamMeasurementsReportConfiguration),
	offsetof(struct ASN_XNAP_BeamMeasurementsReportConfiguration, _asn_ctx),
	asn_MAP_ASN_XNAP_BeamMeasurementsReportConfiguration_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_BeamMeasurementsReportConfiguration_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration = {
	"BeamMeasurementsReportConfiguration",
	"BeamMeasurementsReportConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1,
	sizeof(asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_BeamMeasurementsReportConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_BeamMeasurementsReportConfiguration_1,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_BeamMeasurementsReportConfiguration_specs_1	/* Additional specs */
};

