/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_WLANMeasConfig_H_
#define	_ASN_XNAP_WLANMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_WLANMeasConfig {
	ASN_XNAP_WLANMeasConfig_setup	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_WLANMeasConfig;

/* ASN_XNAP_WLANMeasConfig */
typedef long	 ASN_XNAP_WLANMeasConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_WLANMeasConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_WLANMeasConfig;
extern const asn_INTEGER_specifics_t asn_SPC_WLANMeasConfig_specs_1;
asn_struct_free_f WLANMeasConfig_free;
asn_struct_print_f WLANMeasConfig_print;
asn_constr_check_f WLANMeasConfig_constraint;
ber_type_decoder_f WLANMeasConfig_decode_ber;
der_type_encoder_f WLANMeasConfig_encode_der;
xer_type_decoder_f WLANMeasConfig_decode_xer;
xer_type_encoder_f WLANMeasConfig_encode_xer;
oer_type_decoder_f WLANMeasConfig_decode_oer;
oer_type_encoder_f WLANMeasConfig_encode_oer;
per_type_decoder_f WLANMeasConfig_decode_uper;
per_type_encoder_f WLANMeasConfig_encode_uper;
per_type_decoder_f WLANMeasConfig_decode_aper;
per_type_encoder_f WLANMeasConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_WLANMeasConfig_H_ */
#include <asn_internal.h>
