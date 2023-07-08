/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ServedCellsToActivate_H_
#define	_ASN_XNAP_ServedCellsToActivate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ServedCellsToActivate_PR {
	ASN_XNAP_ServedCellsToActivate_PR_NOTHING,	/* No components present */
	ASN_XNAP_ServedCellsToActivate_PR_nr_cells,
	ASN_XNAP_ServedCellsToActivate_PR_e_utra_cells,
	ASN_XNAP_ServedCellsToActivate_PR_choice_extension
} ASN_XNAP_ServedCellsToActivate_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;
struct ASN_XNAP_NR_CGI;
struct ASN_XNAP_E_UTRA_CGI;

/* ASN_XNAP_ServedCellsToActivate */
typedef struct ASN_XNAP_ServedCellsToActivate {
	ASN_XNAP_ServedCellsToActivate_PR present;
	union ASN_XNAP_ServedCellsToActivate_u {
		struct ASN_XNAP_ServedCellsToActivate__nr_cells {
			A_SEQUENCE_OF(struct ASN_XNAP_NR_CGI) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_cells;
		struct ASN_XNAP_ServedCellsToActivate__e_utra_cells {
			A_SEQUENCE_OF(struct ASN_XNAP_E_UTRA_CGI) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *e_utra_cells;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ServedCellsToActivate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ServedCellsToActivate;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_ServedCellsToActivate_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ServedCellsToActivate_1[3];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_ServedCellsToActivate_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ServedCellsToActivate_H_ */
#include <asn_internal.h>