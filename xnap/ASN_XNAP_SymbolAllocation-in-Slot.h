/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_SymbolAllocation_in_Slot_H_
#define	_ASN_XNAP_SymbolAllocation_in_Slot_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_SymbolAllocation_in_Slot_PR {
	ASN_XNAP_SymbolAllocation_in_Slot_PR_NOTHING,	/* No components present */
	ASN_XNAP_SymbolAllocation_in_Slot_PR_allDL,
	ASN_XNAP_SymbolAllocation_in_Slot_PR_allUL,
	ASN_XNAP_SymbolAllocation_in_Slot_PR_bothDLandUL,
	ASN_XNAP_SymbolAllocation_in_Slot_PR_choice_extension
} ASN_XNAP_SymbolAllocation_in_Slot_PR;

/* Forward declarations */
struct ASN_XNAP_SymbolAllocation_in_Slot_AllDL;
struct ASN_XNAP_SymbolAllocation_in_Slot_AllUL;
struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ASN_XNAP_SymbolAllocation-in-Slot */
typedef struct ASN_XNAP_SymbolAllocation_in_Slot {
	ASN_XNAP_SymbolAllocation_in_Slot_PR present;
	union ASN_XNAP_SymbolAllocation_in_Slot_u {
		struct ASN_XNAP_SymbolAllocation_in_Slot_AllDL	*allDL;
		struct ASN_XNAP_SymbolAllocation_in_Slot_AllUL	*allUL;
		struct ASN_XNAP_SymbolAllocation_in_Slot_BothDLandUL	*bothDLandUL;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_SymbolAllocation_in_Slot_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SymbolAllocation_in_Slot;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_SymbolAllocation_in_Slot_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_SymbolAllocation_in_Slot_1[4];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_SymbolAllocation_in_Slot_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_SymbolAllocation_in_Slot_H_ */
#include <asn_internal.h>
