/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ReportIntervalMDT_H_
#define	_ASN_XNAP_ReportIntervalMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ReportIntervalMDT {
	ASN_XNAP_ReportIntervalMDT_ms120	= 0,
	ASN_XNAP_ReportIntervalMDT_ms240	= 1,
	ASN_XNAP_ReportIntervalMDT_ms480	= 2,
	ASN_XNAP_ReportIntervalMDT_ms640	= 3,
	ASN_XNAP_ReportIntervalMDT_ms1024	= 4,
	ASN_XNAP_ReportIntervalMDT_ms2048	= 5,
	ASN_XNAP_ReportIntervalMDT_ms5120	= 6,
	ASN_XNAP_ReportIntervalMDT_ms10240	= 7,
	ASN_XNAP_ReportIntervalMDT_min1	= 8,
	ASN_XNAP_ReportIntervalMDT_min6	= 9,
	ASN_XNAP_ReportIntervalMDT_min12	= 10,
	ASN_XNAP_ReportIntervalMDT_min30	= 11,
	ASN_XNAP_ReportIntervalMDT_min60	= 12
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_ReportIntervalMDT;

/* ASN_XNAP_ReportIntervalMDT */
typedef long	 ASN_XNAP_ReportIntervalMDT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_ReportIntervalMDT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ReportIntervalMDT;
extern const asn_INTEGER_specifics_t asn_SPC_ReportIntervalMDT_specs_1;
asn_struct_free_f ReportIntervalMDT_free;
asn_struct_print_f ReportIntervalMDT_print;
asn_constr_check_f ReportIntervalMDT_constraint;
ber_type_decoder_f ReportIntervalMDT_decode_ber;
der_type_encoder_f ReportIntervalMDT_encode_der;
xer_type_decoder_f ReportIntervalMDT_decode_xer;
xer_type_encoder_f ReportIntervalMDT_encode_xer;
oer_type_decoder_f ReportIntervalMDT_decode_oer;
oer_type_encoder_f ReportIntervalMDT_encode_oer;
per_type_decoder_f ReportIntervalMDT_decode_uper;
per_type_encoder_f ReportIntervalMDT_encode_uper;
per_type_decoder_f ReportIntervalMDT_decode_aper;
per_type_encoder_f ReportIntervalMDT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ReportIntervalMDT_H_ */
#include <asn_internal.h>
