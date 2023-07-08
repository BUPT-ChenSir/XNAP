/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_PDCPChangeIndication_H_
#define	_ASN_XNAP_PDCPChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_PDCPChangeIndication_PR {
	ASN_XNAP_PDCPChangeIndication_PR_NOTHING,	/* No components present */
	ASN_XNAP_PDCPChangeIndication_PR_from_S_NG_RAN_node,
	ASN_XNAP_PDCPChangeIndication_PR_from_M_NG_RAN_node,
	ASN_XNAP_PDCPChangeIndication_PR_choice_extension
} ASN_XNAP_PDCPChangeIndication_PR;
typedef enum ASN_XNAP_PDCPChangeIndication__from_S_NG_RAN_node {
	ASN_XNAP_PDCPChangeIndication__from_S_NG_RAN_node_s_ng_ran_node_key_update_required	= 0,
	ASN_XNAP_PDCPChangeIndication__from_S_NG_RAN_node_pdcp_data_recovery_required	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_PDCPChangeIndication__from_S_NG_RAN_node;
typedef enum ASN_XNAP_PDCPChangeIndication__from_M_NG_RAN_node {
	ASN_XNAP_PDCPChangeIndication__from_M_NG_RAN_node_pdcp_data_recovery_required	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_PDCPChangeIndication__from_M_NG_RAN_node;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ASN_XNAP_PDCPChangeIndication */
typedef struct ASN_XNAP_PDCPChangeIndication {
	ASN_XNAP_PDCPChangeIndication_PR present;
	union ASN_XNAP_PDCPChangeIndication_u {
		long	 from_S_NG_RAN_node;
		long	 from_M_NG_RAN_node;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PDCPChangeIndication_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_from_S_NG_RAN_node_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_from_M_NG_RAN_node_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDCPChangeIndication;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_PDCPChangeIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_PDCPChangeIndication_1[3];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_PDCPChangeIndication_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_PDCPChangeIndication_H_ */
#include <asn_internal.h>
