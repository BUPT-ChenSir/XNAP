/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_IAB_MT_Cell_List_Item_H_
#define	_ASN_XNAP_IAB_MT_Cell_List_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_NR-Cell-Identity.h"
#include "ASN_XNAP_DU-RX-MT-RX.h"
#include "ASN_XNAP_DU-TX-MT-TX.h"
#include "ASN_XNAP_DU-RX-MT-TX.h"
#include "ASN_XNAP_DU-TX-MT-RX.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_IAB-MT-Cell-List-Item */
typedef struct ASN_XNAP_IAB_MT_Cell_List_Item {
	ASN_XNAP_NR_Cell_Identity_t	 nRCellIdentity;
	ASN_XNAP_DU_RX_MT_RX_t	 dU_RX_MT_RX;
	ASN_XNAP_DU_TX_MT_TX_t	 dU_TX_MT_TX;
	ASN_XNAP_DU_RX_MT_TX_t	 dU_RX_MT_TX;
	ASN_XNAP_DU_TX_MT_RX_t	 dU_TX_MT_RX;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_IAB_MT_Cell_List_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_IAB_MT_Cell_List_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_IAB_MT_Cell_List_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_IAB_MT_Cell_List_Item_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_IAB_MT_Cell_List_Item_H_ */
#include <asn_internal.h>
