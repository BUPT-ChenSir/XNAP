/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_GBRQoSFlowInfo_H_
#define	_ASN_XNAP_GBRQoSFlowInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_BitRate.h"
#include <NativeEnumerated.h>
#include "ASN_XNAP_PacketLossRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_GBRQoSFlowInfo__notificationControl {
	ASN_XNAP_GBRQoSFlowInfo__notificationControl_notification_requested	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_GBRQoSFlowInfo__notificationControl;

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_GBRQoSFlowInfo */
typedef struct ASN_XNAP_GBRQoSFlowInfo {
	ASN_XNAP_BitRate_t	 maxFlowBitRateDL;
	ASN_XNAP_BitRate_t	 maxFlowBitRateUL;
	ASN_XNAP_BitRate_t	 guaranteedFlowBitRateDL;
	ASN_XNAP_BitRate_t	 guaranteedFlowBitRateUL;
	long	*notificationControl;	/* OPTIONAL */
	ASN_XNAP_PacketLossRate_t	*maxPacketLossRateDL;	/* OPTIONAL */
	ASN_XNAP_PacketLossRate_t	*maxPacketLossRateUL;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_GBRQoSFlowInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_notificationControl_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_GBRQoSFlowInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_GBRQoSFlowInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_GBRQoSFlowInfo_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_GBRQoSFlowInfo_H_ */
#include <asn_internal.h>
