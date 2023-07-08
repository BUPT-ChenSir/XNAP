/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ResourceCoordRequest_gNB_initiated_H_
#define	_ASN_XNAP_ResourceCoordRequest_gNB_initiated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DataTrafficResourceIndication.h"
#include "ASN_XNAP_SpectrumSharingGroupID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;
struct ASN_XNAP_E_UTRA_CGI;
struct ASN_XNAP_NR_CGI;

/* ASN_XNAP_ResourceCoordRequest-gNB-initiated */
typedef struct ASN_XNAP_ResourceCoordRequest_gNB_initiated {
	ASN_XNAP_DataTrafficResourceIndication_t	 dataTrafficResourceIndication;
	struct ASN_XNAP_ResourceCoordRequest_gNB_initiated__listofE_UTRACells {
		A_SEQUENCE_OF(struct ASN_XNAP_E_UTRA_CGI) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listofE_UTRACells;
	ASN_XNAP_SpectrumSharingGroupID_t	 spectrumSharingGroupID;
	struct ASN_XNAP_ResourceCoordRequest_gNB_initiated__listofNRCells {
		A_SEQUENCE_OF(struct ASN_XNAP_NR_CGI) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listofNRCells;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ResourceCoordRequest_gNB_initiated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ResourceCoordRequest_gNB_initiated;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ResourceCoordRequest_gNB_initiated_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ResourceCoordRequest_gNB_initiated_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ResourceCoordRequest_gNB_initiated_H_ */
#include <asn_internal.h>
