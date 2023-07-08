/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_CellAssistanceInfo_NR_H_
#define	_ASN_XNAP_CellAssistanceInfo_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_CellAssistanceInfo_NR_PR {
	ASN_XNAP_CellAssistanceInfo_NR_PR_NOTHING,	/* No components present */
	ASN_XNAP_CellAssistanceInfo_NR_PR_limitedNR_List,
	ASN_XNAP_CellAssistanceInfo_NR_PR_full_List,
	ASN_XNAP_CellAssistanceInfo_NR_PR_choice_extension
} ASN_XNAP_CellAssistanceInfo_NR_PR;
typedef enum ASN_XNAP_CellAssistanceInfo_NR__full_List {
	ASN_XNAP_CellAssistanceInfo_NR__full_List_all_served_cells_NR	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_CellAssistanceInfo_NR__full_List;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;
struct ASN_XNAP_NR_CGI;

/* ASN_XNAP_CellAssistanceInfo-NR */
typedef struct ASN_XNAP_CellAssistanceInfo_NR {
	ASN_XNAP_CellAssistanceInfo_NR_PR present;
	union ASN_XNAP_CellAssistanceInfo_NR_u {
		struct ASN_XNAP_CellAssistanceInfo_NR__limitedNR_List {
			A_SEQUENCE_OF(struct ASN_XNAP_NR_CGI) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *limitedNR_List;
		long	 full_List;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_CellAssistanceInfo_NR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_full_List_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CellAssistanceInfo_NR;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_CellAssistanceInfo_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_CellAssistanceInfo_NR_1[3];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_CellAssistanceInfo_NR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_CellAssistanceInfo_NR_H_ */
#include <asn_internal.h>
