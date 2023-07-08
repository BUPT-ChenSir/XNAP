/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_ImmediateMDT-NR.h"

#include "ASN_XNAP_M1Configuration.h"
#include "ASN_XNAP_M4Configuration.h"
#include "ASN_XNAP_M5Configuration.h"
#include "ASN_XNAP_M6Configuration.h"
#include "ASN_XNAP_M7Configuration.h"
#include "ASN_XNAP_BluetoothMeasurementConfiguration.h"
#include "ASN_XNAP_WLANMeasurementConfiguration.h"
#include "ASN_XNAP_SensorMeasurementConfiguration.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_ImmediateMDT_NR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ImmediateMDT_NR, measurementsToActivate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MeasurementsToActivate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementsToActivate"
		},
	{ ATF_POINTER, 10, offsetof(struct ASN_XNAP_ImmediateMDT_NR, m1Configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_M1Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m1Configuration"
		},
	{ ATF_POINTER, 9, offsetof(struct ASN_XNAP_ImmediateMDT_NR, m4Configuration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_M4Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m4Configuration"
		},
	{ ATF_POINTER, 8, offsetof(struct ASN_XNAP_ImmediateMDT_NR, m5Configuration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_M5Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m5Configuration"
		},
	{ ATF_POINTER, 7, offsetof(struct ASN_XNAP_ImmediateMDT_NR, mDT_Location_Info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MDT_Location_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mDT-Location-Info"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_XNAP_ImmediateMDT_NR, m6Configuration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_M6Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m6Configuration"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_ImmediateMDT_NR, m7Configuration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_M7Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m7Configuration"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_ImmediateMDT_NR, bluetoothMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_BluetoothMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetoothMeasurementConfiguration"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_ImmediateMDT_NR, wLANMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_WLANMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wLANMeasurementConfiguration"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_ImmediateMDT_NR, sensorMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_SensorMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorMeasurementConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ImmediateMDT_NR, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P136,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_ImmediateMDT_NR_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ImmediateMDT_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementsToActivate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m1Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* m4Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* m5Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mDT-Location-Info */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* m6Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* m7Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* bluetoothMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* wLANMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sensorMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ImmediateMDT_NR_specs_1 = {
	sizeof(struct ASN_XNAP_ImmediateMDT_NR),
	offsetof(struct ASN_XNAP_ImmediateMDT_NR, _asn_ctx),
	asn_MAP_ASN_XNAP_ImmediateMDT_NR_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_ImmediateMDT_NR_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ImmediateMDT_NR = {
	"ImmediateMDT-NR",
	"ImmediateMDT-NR",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1,
	sizeof(asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ImmediateMDT_NR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_ImmediateMDT_NR_1,
	11,	/* Elements count */
	&asn_SPC_ASN_XNAP_ImmediateMDT_NR_specs_1	/* Additional specs */
};

