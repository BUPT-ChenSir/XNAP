/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-CommonDataTypes"
 * 	found in "../xnap_asn.1/XnAP-CommonDataTypes.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ProcedureCode_H_
#define	_ASN_XNAP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_XNAP_ProcedureCode */
typedef long	 ASN_XNAP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ProcedureCode;
asn_struct_free_f ASN_XNAP_ProcedureCode_free;
asn_struct_print_f ASN_XNAP_ProcedureCode_print;
asn_constr_check_f ASN_XNAP_ProcedureCode_constraint;
ber_type_decoder_f ASN_XNAP_ProcedureCode_decode_ber;
der_type_encoder_f ASN_XNAP_ProcedureCode_encode_der;
xer_type_decoder_f ASN_XNAP_ProcedureCode_decode_xer;
xer_type_encoder_f ASN_XNAP_ProcedureCode_encode_xer;
oer_type_decoder_f ASN_XNAP_ProcedureCode_decode_oer;
oer_type_encoder_f ASN_XNAP_ProcedureCode_encode_oer;
per_type_decoder_f ASN_XNAP_ProcedureCode_decode_uper;
per_type_encoder_f ASN_XNAP_ProcedureCode_encode_uper;
per_type_decoder_f ASN_XNAP_ProcedureCode_decode_aper;
per_type_encoder_f ASN_XNAP_ProcedureCode_encode_aper;
#define ASN_XNAP_ProcedureCode_id_handoverPreparation	((ASN_XNAP_ProcedureCode_t)0)
#define ASN_XNAP_ProcedureCode_id_sNStatusTransfer	((ASN_XNAP_ProcedureCode_t)1)
#define ASN_XNAP_ProcedureCode_id_handoverCancel	((ASN_XNAP_ProcedureCode_t)2)
#define ASN_XNAP_ProcedureCode_id_retrieveUEContext	((ASN_XNAP_ProcedureCode_t)3)
#define ASN_XNAP_ProcedureCode_id_rANPaging	((ASN_XNAP_ProcedureCode_t)4)
#define ASN_XNAP_ProcedureCode_id_xnUAddressIndication	((ASN_XNAP_ProcedureCode_t)5)
#define ASN_XNAP_ProcedureCode_id_uEContextRelease	((ASN_XNAP_ProcedureCode_t)6)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeAdditionPreparation	((ASN_XNAP_ProcedureCode_t)7)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeReconfigurationCompletion	((ASN_XNAP_ProcedureCode_t)8)
#define ASN_XNAP_ProcedureCode_id_mNGRANnodeinitiatedSNGRANnodeModificationPreparation	((ASN_XNAP_ProcedureCode_t)9)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeinitiatedSNGRANnodeModificationPreparation	((ASN_XNAP_ProcedureCode_t)10)
#define ASN_XNAP_ProcedureCode_id_mNGRANnodeinitiatedSNGRANnodeRelease	((ASN_XNAP_ProcedureCode_t)11)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeinitiatedSNGRANnodeRelease	((ASN_XNAP_ProcedureCode_t)12)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeCounterCheck	((ASN_XNAP_ProcedureCode_t)13)
#define ASN_XNAP_ProcedureCode_id_sNGRANnodeChange	((ASN_XNAP_ProcedureCode_t)14)
#define ASN_XNAP_ProcedureCode_id_rRCTransfer	((ASN_XNAP_ProcedureCode_t)15)
#define ASN_XNAP_ProcedureCode_id_xnRemoval	((ASN_XNAP_ProcedureCode_t)16)
#define ASN_XNAP_ProcedureCode_id_xnSetup	((ASN_XNAP_ProcedureCode_t)17)
#define ASN_XNAP_ProcedureCode_id_nGRANnodeConfigurationUpdate	((ASN_XNAP_ProcedureCode_t)18)
#define ASN_XNAP_ProcedureCode_id_cellActivation	((ASN_XNAP_ProcedureCode_t)19)
#define ASN_XNAP_ProcedureCode_id_reset	((ASN_XNAP_ProcedureCode_t)20)
#define ASN_XNAP_ProcedureCode_id_errorIndication	((ASN_XNAP_ProcedureCode_t)21)
#define ASN_XNAP_ProcedureCode_id_privateMessage	((ASN_XNAP_ProcedureCode_t)22)
#define ASN_XNAP_ProcedureCode_id_notificationControl	((ASN_XNAP_ProcedureCode_t)23)
#define ASN_XNAP_ProcedureCode_id_activityNotification	((ASN_XNAP_ProcedureCode_t)24)
#define ASN_XNAP_ProcedureCode_id_e_UTRA_NR_CellResourceCoordination	((ASN_XNAP_ProcedureCode_t)25)
#define ASN_XNAP_ProcedureCode_id_secondaryRATDataUsageReport	((ASN_XNAP_ProcedureCode_t)26)
#define ASN_XNAP_ProcedureCode_id_deactivateTrace	((ASN_XNAP_ProcedureCode_t)27)
#define ASN_XNAP_ProcedureCode_id_traceStart	((ASN_XNAP_ProcedureCode_t)28)
#define ASN_XNAP_ProcedureCode_id_handoverSuccess	((ASN_XNAP_ProcedureCode_t)29)
#define ASN_XNAP_ProcedureCode_id_conditionalHandoverCancel	((ASN_XNAP_ProcedureCode_t)30)
#define ASN_XNAP_ProcedureCode_id_earlyStatusTransfer	((ASN_XNAP_ProcedureCode_t)31)
#define ASN_XNAP_ProcedureCode_id_failureIndication	((ASN_XNAP_ProcedureCode_t)32)
#define ASN_XNAP_ProcedureCode_id_handoverReport	((ASN_XNAP_ProcedureCode_t)33)
#define ASN_XNAP_ProcedureCode_id_resourceStatusReportingInitiation	((ASN_XNAP_ProcedureCode_t)34)
#define ASN_XNAP_ProcedureCode_id_resourceStatusReporting	((ASN_XNAP_ProcedureCode_t)35)
#define ASN_XNAP_ProcedureCode_id_mobilitySettingsChange	((ASN_XNAP_ProcedureCode_t)36)
#define ASN_XNAP_ProcedureCode_id_accessAndMobilityIndication	((ASN_XNAP_ProcedureCode_t)37)
#define ASN_XNAP_ProcedureCode_id_cellTrafficTrace	((ASN_XNAP_ProcedureCode_t)38)
#define ASN_XNAP_ProcedureCode_id_RANMulticastGroupPaging	((ASN_XNAP_ProcedureCode_t)39)
#define ASN_XNAP_ProcedureCode_id_scgFailureInformationReport	((ASN_XNAP_ProcedureCode_t)40)
#define ASN_XNAP_ProcedureCode_id_ProcedureCode41_NotToBeUsed	((ASN_XNAP_ProcedureCode_t)41)
#define ASN_XNAP_ProcedureCode_id_scgFailureTransfer	((ASN_XNAP_ProcedureCode_t)42)
#define ASN_XNAP_ProcedureCode_id_f1CTrafficTransfer	((ASN_XNAP_ProcedureCode_t)43)
#define ASN_XNAP_ProcedureCode_id_iABTransportMigrationManagement	((ASN_XNAP_ProcedureCode_t)44)
#define ASN_XNAP_ProcedureCode_id_iABTransportMigrationModification	((ASN_XNAP_ProcedureCode_t)45)
#define ASN_XNAP_ProcedureCode_id_iABResourceCoordination	((ASN_XNAP_ProcedureCode_t)46)
#define ASN_XNAP_ProcedureCode_id_retrieveUEContextConfirm	((ASN_XNAP_ProcedureCode_t)47)
#define ASN_XNAP_ProcedureCode_id_cPCCancel	((ASN_XNAP_ProcedureCode_t)48)
#define ASN_XNAP_ProcedureCode_id_partialUEContextTransfer	((ASN_XNAP_ProcedureCode_t)49)

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ProcedureCode_H_ */
#include <asn_internal.h>
