/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_GNB_DU_Cell_Resource_Configuration_H_
#define	_ASN_XNAP_GNB_DU_Cell_Resource_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_SSB-subcarrierSpacing.h"
#include "ASN_XNAP_DUFTransmissionPeriodicity.h"
#include "ASN_XNAP_HSNATransmissionPeriodicity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_DUF_Slot_Config_List;
struct ASN_XNAP_HSNASlotConfigList;
struct ASN_XNAP_RBsetConfiguration;
struct ASN_XNAP_FreqDomainHSNAconfiguration_List;
struct ASN_XNAP_NACellResourceConfigurationList;
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_GNB-DU-Cell-Resource-Configuration */
typedef struct ASN_XNAP_GNB_DU_Cell_Resource_Configuration {
	ASN_XNAP_SSB_subcarrierSpacing_t	 subcarrierSpacing;
	ASN_XNAP_DUFTransmissionPeriodicity_t	*dUFTransmissionPeriodicity;	/* OPTIONAL */
	struct ASN_XNAP_DUF_Slot_Config_List	*dUF_Slot_Config_List;	/* OPTIONAL */
	ASN_XNAP_HSNATransmissionPeriodicity_t	 hSNATransmissionPeriodicity;
	struct ASN_XNAP_HSNASlotConfigList	*hNSASlotConfigList;	/* OPTIONAL */
	struct ASN_XNAP_RBsetConfiguration	*rBsetConfiguration;	/* OPTIONAL */
	struct ASN_XNAP_FreqDomainHSNAconfiguration_List	*freqDomainHSNAconfiguration_List;	/* OPTIONAL */
	struct ASN_XNAP_NACellResourceConfigurationList	*nACellResourceConfigurationList;	/* OPTIONAL */
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_GNB_DU_Cell_Resource_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_GNB_DU_Cell_Resource_Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_GNB_DU_Cell_Resource_Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_GNB_DU_Cell_Resource_Configuration_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_GNB_DU_Cell_Resource_Configuration_H_ */
#include <asn_internal.h>
