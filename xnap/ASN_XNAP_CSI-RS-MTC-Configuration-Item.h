/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_CSI_RS_MTC_Configuration_Item_H_
#define	_ASN_XNAP_CSI_RS_MTC_Configuration_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_CSI_RS_MTC_Configuration_Item__csi_RS_Status {
	ASN_XNAP_CSI_RS_MTC_Configuration_Item__csi_RS_Status_activated	= 0,
	ASN_XNAP_CSI_RS_MTC_Configuration_Item__csi_RS_Status_deactivated	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_CSI_RS_MTC_Configuration_Item__csi_RS_Status;

/* Forward declarations */
struct ASN_XNAP_CSI_RS_Neighbour_List;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_CSI-RS-MTC-Configuration-Item */
typedef struct ASN_XNAP_CSI_RS_MTC_Configuration_Item {
	long	 csi_RS_Index;
	long	 csi_RS_Status;
	struct ASN_XNAP_CSI_RS_Neighbour_List	*csi_RS_Neighbour_List;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_CSI_RS_MTC_Configuration_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_csi_RS_Status_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CSI_RS_MTC_Configuration_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_CSI_RS_MTC_Configuration_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_CSI_RS_MTC_Configuration_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_CSI_RS_MTC_Configuration_Item_H_ */
#include <asn_internal.h>
