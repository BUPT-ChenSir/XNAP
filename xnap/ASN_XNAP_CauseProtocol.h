/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_CauseProtocol_H_
#define	_ASN_XNAP_CauseProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_CauseProtocol {
	ASN_XNAP_CauseProtocol_transfer_syntax_error	= 0,
	ASN_XNAP_CauseProtocol_abstract_syntax_error_reject	= 1,
	ASN_XNAP_CauseProtocol_abstract_syntax_error_ignore_and_notify	= 2,
	ASN_XNAP_CauseProtocol_message_not_compatible_with_receiver_state	= 3,
	ASN_XNAP_CauseProtocol_semantic_error	= 4,
	ASN_XNAP_CauseProtocol_abstract_syntax_error_falsely_constructed_message	= 5,
	ASN_XNAP_CauseProtocol_unspecified	= 6
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_CauseProtocol;

/* ASN_XNAP_CauseProtocol */
typedef long	 ASN_XNAP_CauseProtocol_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_CauseProtocol_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CauseProtocol;
extern const asn_INTEGER_specifics_t asn_SPC_CauseProtocol_specs_1;
asn_struct_free_f CauseProtocol_free;
asn_struct_print_f CauseProtocol_print;
asn_constr_check_f CauseProtocol_constraint;
ber_type_decoder_f CauseProtocol_decode_ber;
der_type_encoder_f CauseProtocol_encode_der;
xer_type_decoder_f CauseProtocol_decode_xer;
xer_type_encoder_f CauseProtocol_encode_xer;
oer_type_decoder_f CauseProtocol_decode_oer;
oer_type_encoder_f CauseProtocol_encode_oer;
per_type_decoder_f CauseProtocol_decode_uper;
per_type_encoder_f CauseProtocol_encode_uper;
per_type_decoder_f CauseProtocol_decode_aper;
per_type_encoder_f CauseProtocol_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_CauseProtocol_H_ */
#include <asn_internal.h>
