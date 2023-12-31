/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_H_
#define	_ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DRB-ID.h"
#include "ASN_XNAP_UPTransportLayerInformation.h"
#include "ASN_XNAP_LCID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_UPTransportLayerInformation;
struct ASN_XNAP_RLC_Status;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_DRBsToBeModified-List-ModRqd-MNterminated-Item */
typedef struct ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item {
	ASN_XNAP_DRB_ID_t	 drb_ID;
	ASN_XNAP_UPTransportLayerInformation_t	 sN_DL_SCG_UP_TNLInfo;
	struct ASN_XNAP_UPTransportLayerInformation	*secondary_SN_DL_SCG_UP_TNLInfo;	/* OPTIONAL */
	ASN_XNAP_LCID_t	*lCID;	/* OPTIONAL */
	struct ASN_XNAP_RLC_Status	*rlc_status;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_DRBsToBeModified_List_ModRqd_MNterminated_Item_H_ */
#include <asn_internal.h>
