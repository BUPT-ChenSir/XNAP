/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_RAT_RestrictionInformation_H_
#define	_ASN_XNAP_RAT_RestrictionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_RAT_RestrictionInformation {
	ASN_XNAP_RAT_RestrictionInformation_e_UTRA	= 0,
	ASN_XNAP_RAT_RestrictionInformation_nR	= 1,
	ASN_XNAP_RAT_RestrictionInformation_nR_unlicensed	= 2,
	ASN_XNAP_RAT_RestrictionInformation_nR_LEO	= 3,
	ASN_XNAP_RAT_RestrictionInformation_nR_MEO	= 4,
	ASN_XNAP_RAT_RestrictionInformation_nR_GEO	= 5,
	ASN_XNAP_RAT_RestrictionInformation_nR_OTHERSAT	= 6
} e_ASN_XNAP_RAT_RestrictionInformation;

/* ASN_XNAP_RAT-RestrictionInformation */
typedef BIT_STRING_t	 ASN_XNAP_RAT_RestrictionInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_RAT_RestrictionInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_RAT_RestrictionInformation;
asn_struct_free_f ASN_XNAP_RAT_RestrictionInformation_free;
asn_struct_print_f ASN_XNAP_RAT_RestrictionInformation_print;
asn_constr_check_f ASN_XNAP_RAT_RestrictionInformation_constraint;
ber_type_decoder_f ASN_XNAP_RAT_RestrictionInformation_decode_ber;
der_type_encoder_f ASN_XNAP_RAT_RestrictionInformation_encode_der;
xer_type_decoder_f ASN_XNAP_RAT_RestrictionInformation_decode_xer;
xer_type_encoder_f ASN_XNAP_RAT_RestrictionInformation_encode_xer;
oer_type_decoder_f ASN_XNAP_RAT_RestrictionInformation_decode_oer;
oer_type_encoder_f ASN_XNAP_RAT_RestrictionInformation_encode_oer;
per_type_decoder_f ASN_XNAP_RAT_RestrictionInformation_decode_uper;
per_type_encoder_f ASN_XNAP_RAT_RestrictionInformation_encode_uper;
per_type_decoder_f ASN_XNAP_RAT_RestrictionInformation_decode_aper;
per_type_encoder_f ASN_XNAP_RAT_RestrictionInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_RAT_RestrictionInformation_H_ */
#include <asn_internal.h>
