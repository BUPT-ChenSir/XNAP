/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_NPRACHConfiguration_FDD_H_
#define	_ASN_XNAP_NPRACHConfiguration_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_NPRACH-CP-Length.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_NPRACHConfiguration-FDD */
typedef struct ASN_XNAP_NPRACHConfiguration_FDD {
	ASN_XNAP_NPRACH_CP_Length_t	 nprach_CP_length;
	OCTET_STRING_t	 anchorCarrier_NPRACHConfig;
	OCTET_STRING_t	*anchorCarrier_EDT_NPRACHConfig;	/* OPTIONAL */
	OCTET_STRING_t	*anchorCarrier_Format2_NPRACHConfig;	/* OPTIONAL */
	OCTET_STRING_t	*anchorCarrier_Format2_EDT_NPRACHConfig;	/* OPTIONAL */
	OCTET_STRING_t	*non_anchorCarrier_NPRACHConfig;	/* OPTIONAL */
	OCTET_STRING_t	*non_anchorCarrier_Format2_NPRACHConfig;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_NPRACHConfiguration_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_NPRACHConfiguration_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_NPRACHConfiguration_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_NPRACHConfiguration_FDD_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_NPRACHConfiguration_FDD_H_ */
#include <asn_internal.h>
