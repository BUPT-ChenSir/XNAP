/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_PDUSessionResourcesToBeSetup_Item_H_
#define	_ASN_XNAP_PDUSessionResourcesToBeSetup_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PDUSession-ID.h"
#include "ASN_XNAP_S-NSSAI.h"
#include "ASN_XNAP_UPTransportLayerInformation.h"
#include "ASN_XNAP_PDUSessionType.h"
#include "ASN_XNAP_PDUSessionNetworkInstance.h"
#include "ASN_XNAP_QoSFlowsToBeSetup-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_PDUSessionAggregateMaximumBitRate;
struct ASN_XNAP_UPTransportLayerInformation;
struct ASN_XNAP_SecurityIndication;
struct ASN_XNAP_DataforwardingandOffloadingInfofromSource;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_PDUSessionResourcesToBeSetup-Item */
typedef struct ASN_XNAP_PDUSessionResourcesToBeSetup_Item {
	ASN_XNAP_PDUSession_ID_t	 pduSessionId;
	ASN_XNAP_S_NSSAI_t	 s_NSSAI;
	struct ASN_XNAP_PDUSessionAggregateMaximumBitRate	*pduSessionAMBR;	/* OPTIONAL */
	ASN_XNAP_UPTransportLayerInformation_t	 uL_NG_U_TNLatUPF;
	struct ASN_XNAP_UPTransportLayerInformation	*source_DL_NG_U_TNL_Information;	/* OPTIONAL */
	struct ASN_XNAP_SecurityIndication	*securityIndication;	/* OPTIONAL */
	ASN_XNAP_PDUSessionType_t	 pduSessionType;
	ASN_XNAP_PDUSessionNetworkInstance_t	*pduSessionNetworkInstance;	/* OPTIONAL */
	ASN_XNAP_QoSFlowsToBeSetup_List_t	 qosFlowsToBeSetup_List;
	struct ASN_XNAP_DataforwardingandOffloadingInfofromSource	*dataforwardinginfofromSource;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PDUSessionResourcesToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_PDUSessionResourcesToBeSetup_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_PDUSessionResourcesToBeSetup_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_PDUSessionResourcesToBeSetup_Item_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_PDUSessionResourcesToBeSetup_Item_H_ */
#include <asn_internal.h>
