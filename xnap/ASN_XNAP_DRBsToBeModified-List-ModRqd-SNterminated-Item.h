/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_H_
#define	_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DRB-ID.h"
#include "ASN_XNAP_PDCPDuplicationConfiguration.h"
#include "ASN_XNAP_DuplicationActivation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_UPTransportParameters;
struct ASN_XNAP_QoSFlowLevelQoSParameters;
struct ASN_XNAP_ULConfiguration;
struct ASN_XNAP_QoSFlowsModifiedMappedtoDRB_ModRqd_SNterminated;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_DRBsToBeModified-List-ModRqd-SNterminated-Item */
typedef struct ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item {
	ASN_XNAP_DRB_ID_t	 drb_ID;
	struct ASN_XNAP_UPTransportParameters	*sN_UL_PDCP_UP_TNLInfo;	/* OPTIONAL */
	struct ASN_XNAP_QoSFlowLevelQoSParameters	*dRB_QoS;	/* OPTIONAL */
	struct ASN_XNAP_UPTransportParameters	*secondary_SN_UL_PDCP_UP_TNLInfo;	/* OPTIONAL */
	struct ASN_XNAP_ULConfiguration	*uL_Configuration;	/* OPTIONAL */
	ASN_XNAP_PDCPDuplicationConfiguration_t	*pdcpDuplicationConfiguration;	/* OPTIONAL */
	ASN_XNAP_DuplicationActivation_t	*duplicationActivation;	/* OPTIONAL */
	struct ASN_XNAP_QoSFlowsModifiedMappedtoDRB_ModRqd_SNterminated	*qoSFlowsMappedtoDRB_ModRqd_SNterminated;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_DRBsToBeModified_List_ModRqd_SNterminated_Item_H_ */
#include <asn_internal.h>