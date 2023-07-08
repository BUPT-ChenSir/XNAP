/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_H_
#define	_ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_BroadcastEUTRAPLMNs.h"
#include "ASN_XNAP_TAC.h"
#include "ASN_XNAP_E-UTRA-Cell-Identity.h"
#include "ASN_XNAP_RANAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_BPLMN-ID-Info-EUTRA-Item */
typedef struct ASN_XNAP_BPLMN_ID_Info_EUTRA_Item {
	ASN_XNAP_BroadcastEUTRAPLMNs_t	 broadcastPLMNs;
	ASN_XNAP_TAC_t	 tac;
	ASN_XNAP_E_UTRA_Cell_Identity_t	 e_utraCI;
	ASN_XNAP_RANAC_t	*ranac;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_BPLMN_ID_Info_EUTRA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_H_ */
#include <asn_internal.h>
