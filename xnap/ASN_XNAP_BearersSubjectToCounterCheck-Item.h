/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "../xnap_asn.1/XnAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_BearersSubjectToCounterCheck_Item_H_
#define	_ASN_XNAP_BearersSubjectToCounterCheck_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DRB-ID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_BearersSubjectToCounterCheck-Item */
typedef struct ASN_XNAP_BearersSubjectToCounterCheck_Item {
	ASN_XNAP_DRB_ID_t	 drb_ID;
	unsigned long	 ul_count;
	unsigned long	 dl_count;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_BearersSubjectToCounterCheck_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ul_count_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_dl_count_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_BearersSubjectToCounterCheck_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_BearersSubjectToCounterCheck_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_BearersSubjectToCounterCheck_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_BearersSubjectToCounterCheck_Item_H_ */
#include <asn_internal.h>
