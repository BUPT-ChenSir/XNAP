/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_TNLConfigurationInfo_H_
#define	_ASN_XNAP_TNLConfigurationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ExtTLAs;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_TNLConfigurationInfo */
typedef struct ASN_XNAP_TNLConfigurationInfo {
	struct ASN_XNAP_ExtTLAs	*extendedUPTransportLayerAddressesToAdd;	/* OPTIONAL */
	struct ASN_XNAP_ExtTLAs	*extendedUPTransportLayerAddressesToRemove;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_TNLConfigurationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_TNLConfigurationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_TNLConfigurationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_TNLConfigurationInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_TNLConfigurationInfo_H_ */
#include <asn_internal.h>
