/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_VehicleUE_H_
#define	_ASN_XNAP_VehicleUE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_VehicleUE {
	ASN_XNAP_VehicleUE_authorized	= 0,
	ASN_XNAP_VehicleUE_not_authorized	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_VehicleUE;

/* ASN_XNAP_VehicleUE */
typedef long	 ASN_XNAP_VehicleUE_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_VehicleUE_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_VehicleUE;
extern const asn_INTEGER_specifics_t asn_SPC_VehicleUE_specs_1;
asn_struct_free_f VehicleUE_free;
asn_struct_print_f VehicleUE_print;
asn_constr_check_f VehicleUE_constraint;
ber_type_decoder_f VehicleUE_decode_ber;
der_type_encoder_f VehicleUE_encode_der;
xer_type_decoder_f VehicleUE_decode_xer;
xer_type_encoder_f VehicleUE_encode_xer;
oer_type_decoder_f VehicleUE_decode_oer;
oer_type_encoder_f VehicleUE_encode_oer;
per_type_decoder_f VehicleUE_decode_uper;
per_type_encoder_f VehicleUE_encode_uper;
per_type_decoder_f VehicleUE_decode_aper;
per_type_encoder_f VehicleUE_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_VehicleUE_H_ */
#include <asn_internal.h>
