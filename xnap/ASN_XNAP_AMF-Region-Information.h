/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_AMF_Region_Information_H_
#define	_ASN_XNAP_AMF_Region_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <oer_support.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_GlobalAMF_Region_Information;

/* ASN_XNAP_AMF-Region-Information */
typedef struct ASN_XNAP_AMF_Region_Information {
	A_SEQUENCE_OF(struct ASN_XNAP_GlobalAMF_Region_Information) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_AMF_Region_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_AMF_Region_Information;
extern asn_SET_OF_specifics_t asn_SPC_ASN_XNAP_AMF_Region_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_AMF_Region_Information_1[1];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_AMF_Region_Information_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_AMF_Region_Information_H_ */
#include <asn_internal.h>
