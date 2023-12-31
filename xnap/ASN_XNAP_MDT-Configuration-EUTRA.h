/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_MDT_Configuration_EUTRA_H_
#define	_ASN_XNAP_MDT_Configuration_EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_MDT-Activation.h"
#include "ASN_XNAP_MDTMode-EUTRA.h"
#include "ASN_XNAP_MDTPLMNList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_AreaScopeOfMDT_EUTRA;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_MDT-Configuration-EUTRA */
typedef struct ASN_XNAP_MDT_Configuration_EUTRA {
	ASN_XNAP_MDT_Activation_t	 mdt_Activation;
	struct ASN_XNAP_AreaScopeOfMDT_EUTRA	*areaScopeOfMDT_EUTRA;	/* OPTIONAL */
	ASN_XNAP_MDTMode_EUTRA_t	 mDTMode_EUTRA;
	ASN_XNAP_MDTPLMNList_t	 signallingBasedMDTPLMNList;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_MDT_Configuration_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_MDT_Configuration_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_MDT_Configuration_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_MDT_Configuration_EUTRA_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_MDT_Configuration_EUTRA_H_ */
#include <asn_internal.h>
