/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_MDTMode-NR-Extension.h"

/*
 * This type is implemented using ASN_XNAP_ProtocolIE_Single_Container_121P26,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_MDTMode_NR_Extension = {
	"MDTMode-NR-Extension",
	"MDTMode-NR-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1,
	sizeof(asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_MDTMode_NR_Extension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_MDTMode_NR_ExtensionIE_105,
	3,	/* Elements count */
	&asn_SPC_ASN_XNAP_MDTMode_NR_ExtensionIE_specs_105	/* Additional specs */
};

