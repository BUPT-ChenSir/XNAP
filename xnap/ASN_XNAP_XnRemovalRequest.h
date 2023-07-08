/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_XnRemovalRequest_H_
#define	_ASN_XNAP_XnRemovalRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_XNAP_XnRemovalRequest */
typedef struct ASN_XNAP_XnRemovalRequest {
	ASN_XNAP_ProtocolIE_Container_119P48_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_XnRemovalRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_XnRemovalRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_XnRemovalRequest_H_ */
#include <asn_internal.h>
