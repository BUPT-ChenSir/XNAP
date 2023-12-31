/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_H_
#define	_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_E-UTRA-CGI.h"
#include "ASN_XNAP_ServedCellInformation-E-UTRA.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ServedCells_ToModify_E_UTRA_Item__deactivation_indication {
	ASN_XNAP_ServedCells_ToModify_E_UTRA_Item__deactivation_indication_deactivated	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item__deactivation_indication;

/* Forward declarations */
struct ASN_XNAP_NeighbourInformation_NR;
struct ASN_XNAP_NeighbourInformation_E_UTRA;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_ServedCells-ToModify-E-UTRA-Item */
typedef struct ASN_XNAP_ServedCells_ToModify_E_UTRA_Item {
	ASN_XNAP_E_UTRA_CGI_t	 old_ECGI;
	ASN_XNAP_ServedCellInformation_E_UTRA_t	 served_cell_info_E_UTRA;
	struct ASN_XNAP_NeighbourInformation_NR	*neighbour_info_NR;	/* OPTIONAL */
	struct ASN_XNAP_NeighbourInformation_E_UTRA	*neighbour_info_E_UTRA;	/* OPTIONAL */
	long	*deactivation_indication;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_deactivation_indication_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ServedCells_ToModify_E_UTRA_Item_H_ */
#include <asn_internal.h>
