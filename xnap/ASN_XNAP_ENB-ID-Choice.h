/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ENB_ID_Choice_H_
#define	_ASN_XNAP_ENB_ID_Choice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ENB_ID_Choice_PR {
	ASN_XNAP_ENB_ID_Choice_PR_NOTHING,	/* No components present */
	ASN_XNAP_ENB_ID_Choice_PR_enb_ID_macro,
	ASN_XNAP_ENB_ID_Choice_PR_enb_ID_shortmacro,
	ASN_XNAP_ENB_ID_Choice_PR_enb_ID_longmacro,
	ASN_XNAP_ENB_ID_Choice_PR_choice_extension
} ASN_XNAP_ENB_ID_Choice_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ASN_XNAP_ENB-ID-Choice */
typedef struct ASN_XNAP_ENB_ID_Choice {
	ASN_XNAP_ENB_ID_Choice_PR present;
	union ASN_XNAP_ENB_ID_Choice_u {
		BIT_STRING_t	 enb_ID_macro;
		BIT_STRING_t	 enb_ID_shortmacro;
		BIT_STRING_t	 enb_ID_longmacro;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ENB_ID_Choice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ENB_ID_Choice;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_ENB_ID_Choice_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ENB_ID_Choice_1[4];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_ENB_ID_Choice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ENB_ID_Choice_H_ */
#include <asn_internal.h>
