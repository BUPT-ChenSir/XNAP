/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_H_
#define	_ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PDUSessionNetworkInstance.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_UPTransportLayerInformation;
struct ASN_XNAP_QoSFlowsToBeSetup_List_Setup_SNterminated;
struct ASN_XNAP_DataforwardingandOffloadingInfofromSource;
struct ASN_XNAP_QoSFlowsToBeSetup_List_Modified_SNterminated;
struct ASN_XNAP_QoSFlows_List_withCause;
struct ASN_XNAP_DRBsToBeModified_List_Modified_SNterminated;
struct ASN_XNAP_DRB_List_withCause;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_PDUSessionResourceModificationInfo-SNterminated */
typedef struct ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated {
	struct ASN_XNAP_UPTransportLayerInformation	*uL_NG_U_TNLatUPF;	/* OPTIONAL */
	ASN_XNAP_PDUSessionNetworkInstance_t	*pduSessionNetworkInstance;	/* OPTIONAL */
	struct ASN_XNAP_QoSFlowsToBeSetup_List_Setup_SNterminated	*qosFlowsToBeSetup_List;	/* OPTIONAL */
	struct ASN_XNAP_DataforwardingandOffloadingInfofromSource	*dataforwardinginfofromSource;	/* OPTIONAL */
	struct ASN_XNAP_QoSFlowsToBeSetup_List_Modified_SNterminated	*qosFlowsToBeModified_List;	/* OPTIONAL */
	struct ASN_XNAP_QoSFlows_List_withCause	*qoSFlowsToBeReleased_List;	/* OPTIONAL */
	struct ASN_XNAP_DRBsToBeModified_List_Modified_SNterminated	*drbsToBeModifiedList;	/* OPTIONAL */
	struct ASN_XNAP_DRB_List_withCause	*dRBsToBeReleased;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_PDUSessionResourceModificationInfo_SNterminated_H_ */
#include <asn_internal.h>
