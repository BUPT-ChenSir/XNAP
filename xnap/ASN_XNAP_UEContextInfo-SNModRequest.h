/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_UEContextInfo_SNModRequest_H_
#define	_ASN_XNAP_UEContextInfo_SNModRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_S-NG-RANnode-SecurityKey.h"
#include "ASN_XNAP_RFSP-Index.h"
#include "ASN_XNAP_LowerLayerPresenceStatusChange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_UESecurityCapabilities;
struct ASN_XNAP_UEAggregateMaximumBitRate;
struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_List;
struct ASN_XNAP_PDUSessionsToBeModified_SNModRequest_List;
struct ASN_XNAP_PDUSessionsToBeReleased_SNModRequest_List;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_UEContextInfo-SNModRequest */
typedef struct ASN_XNAP_UEContextInfo_SNModRequest {
	struct ASN_XNAP_UESecurityCapabilities	*ueSecurityCapabilities;	/* OPTIONAL */
	ASN_XNAP_S_NG_RANnode_SecurityKey_t	*s_ng_RANnode_SecurityKey;	/* OPTIONAL */
	struct ASN_XNAP_UEAggregateMaximumBitRate	*s_ng_RANnodeUE_AMBR;	/* OPTIONAL */
	ASN_XNAP_RFSP_Index_t	*indexToRatFrequencySelectionPriority;	/* OPTIONAL */
	ASN_XNAP_LowerLayerPresenceStatusChange_t	*lowerLayerPresenceStatusChange;	/* OPTIONAL */
	struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_List	*pduSessionResourceToBeAdded;	/* OPTIONAL */
	struct ASN_XNAP_PDUSessionsToBeModified_SNModRequest_List	*pduSessionResourceToBeModified;	/* OPTIONAL */
	struct ASN_XNAP_PDUSessionsToBeReleased_SNModRequest_List	*pduSessionResourceToBeReleased;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_UEContextInfo_SNModRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_UEContextInfo_SNModRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_UEContextInfo_SNModRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_UEContextInfo_SNModRequest_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_UEContextInfo_SNModRequest_H_ */
#include <asn_internal.h>
