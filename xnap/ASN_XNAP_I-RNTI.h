/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_I_RNTI_H_
#define	_ASN_XNAP_I_RNTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_I_RNTI_PR {
	ASN_XNAP_I_RNTI_PR_NOTHING,	/* No components present */
	ASN_XNAP_I_RNTI_PR_i_RNTI_full,
	ASN_XNAP_I_RNTI_PR_i_RNTI_short,
	ASN_XNAP_I_RNTI_PR_choice_extension
} ASN_XNAP_I_RNTI_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ASN_XNAP_I-RNTI */
typedef struct ASN_XNAP_I_RNTI {
	ASN_XNAP_I_RNTI_PR present;
	union ASN_XNAP_I_RNTI_u {
		BIT_STRING_t	 i_RNTI_full;
		BIT_STRING_t	 i_RNTI_short;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_I_RNTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_I_RNTI;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_I_RNTI_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_I_RNTI_1[3];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_I_RNTI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_I_RNTI_H_ */
#include <asn_internal.h>
