/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_LastVisitedCell_Item_H_
#define	_ASN_XNAP_LastVisitedCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_LastVisitedNGRANCellInformation.h"
#include "ASN_XNAP_LastVisitedEUTRANCellInformation.h"
#include "ASN_XNAP_LastVisitedUTRANCellInformation.h"
#include "ASN_XNAP_LastVisitedGERANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_LastVisitedCell_Item_PR {
	ASN_XNAP_LastVisitedCell_Item_PR_NOTHING,	/* No components present */
	ASN_XNAP_LastVisitedCell_Item_PR_nG_RAN_Cell,
	ASN_XNAP_LastVisitedCell_Item_PR_e_UTRAN_Cell,
	ASN_XNAP_LastVisitedCell_Item_PR_uTRAN_Cell,
	ASN_XNAP_LastVisitedCell_Item_PR_gERAN_Cell,
	ASN_XNAP_LastVisitedCell_Item_PR_choice_extension
} ASN_XNAP_LastVisitedCell_Item_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ASN_XNAP_LastVisitedCell-Item */
typedef struct ASN_XNAP_LastVisitedCell_Item {
	ASN_XNAP_LastVisitedCell_Item_PR present;
	union ASN_XNAP_LastVisitedCell_Item_u {
		ASN_XNAP_LastVisitedNGRANCellInformation_t	 nG_RAN_Cell;
		ASN_XNAP_LastVisitedEUTRANCellInformation_t	 e_UTRAN_Cell;
		ASN_XNAP_LastVisitedUTRANCellInformation_t	 uTRAN_Cell;
		ASN_XNAP_LastVisitedGERANCellInformation_t	 gERAN_Cell;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_LastVisitedCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_LastVisitedCell_Item;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_LastVisitedCell_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_LastVisitedCell_Item_1[5];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_LastVisitedCell_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_LastVisitedCell_Item_H_ */
#include <asn_internal.h>
