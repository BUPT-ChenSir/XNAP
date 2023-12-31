/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_IABCellInformation_H_
#define	_ASN_XNAP_IABCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_NR-CGI.h"
#include "ASN_XNAP_RACH-Config-Common.h"
#include "ASN_XNAP_RACH-Config-Common-IAB.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_Mode_Info;
struct ASN_XNAP_IAB_STC_Info;
struct ASN_XNAP_MultiplexingInfo;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_IABCellInformation */
typedef struct ASN_XNAP_IABCellInformation {
	ASN_XNAP_NR_CGI_t	 nRCGI;
	struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_Mode_Info	*iAB_DU_Cell_Resource_Configuration_Mode_Info;	/* OPTIONAL */
	struct ASN_XNAP_IAB_STC_Info	*iAB_STC_Info;	/* OPTIONAL */
	ASN_XNAP_RACH_Config_Common_t	*rACH_Config_Common;	/* OPTIONAL */
	ASN_XNAP_RACH_Config_Common_IAB_t	*rACH_Config_Common_IAB;	/* OPTIONAL */
	OCTET_STRING_t	*cSI_RS_Configuration;	/* OPTIONAL */
	OCTET_STRING_t	*sR_Configuration;	/* OPTIONAL */
	OCTET_STRING_t	*pDCCH_ConfigSIB1;	/* OPTIONAL */
	OCTET_STRING_t	*sCS_Common;	/* OPTIONAL */
	struct ASN_XNAP_MultiplexingInfo	*multiplexingInfo;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_IABCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_IABCellInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_IABCellInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_IABCellInformation_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_IABCellInformation_H_ */
#include <asn_internal.h>
