/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Descriptions"
 * 	found in "../xnap_asn.1/XnAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_SuccessfulOutcome_H_
#define	_ASN_XNAP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_ProcedureCode.h"
#include "ASN_XNAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "ASN_XNAP_HandoverRequest.h"
#include "ASN_XNAP_HandoverRequestAcknowledge.h"
#include "ASN_XNAP_HandoverPreparationFailure.h"
#include "ASN_XNAP_RetrieveUEContextRequest.h"
#include "ASN_XNAP_RetrieveUEContextResponse.h"
#include "ASN_XNAP_RetrieveUEContextFailure.h"
#include "ASN_XNAP_SNodeAdditionRequest.h"
#include "ASN_XNAP_SNodeAdditionRequestAcknowledge.h"
#include "ASN_XNAP_SNodeAdditionRequestReject.h"
#include "ASN_XNAP_SNodeModificationRequest.h"
#include "ASN_XNAP_SNodeModificationRequestAcknowledge.h"
#include "ASN_XNAP_SNodeModificationRequestReject.h"
#include "ASN_XNAP_SNodeModificationRequired.h"
#include "ASN_XNAP_SNodeModificationConfirm.h"
#include "ASN_XNAP_SNodeModificationRefuse.h"
#include "ASN_XNAP_SNodeReleaseRequest.h"
#include "ASN_XNAP_SNodeReleaseRequestAcknowledge.h"
#include "ASN_XNAP_SNodeReleaseReject.h"
#include "ASN_XNAP_SNodeReleaseRequired.h"
#include "ASN_XNAP_SNodeReleaseConfirm.h"
#include "ASN_XNAP_SNodeChangeRequired.h"
#include "ASN_XNAP_SNodeChangeConfirm.h"
#include "ASN_XNAP_SNodeChangeRefuse.h"
#include "ASN_XNAP_XnRemovalRequest.h"
#include "ASN_XNAP_XnRemovalResponse.h"
#include "ASN_XNAP_XnRemovalFailure.h"
#include "ASN_XNAP_XnSetupRequest.h"
#include "ASN_XNAP_XnSetupResponse.h"
#include "ASN_XNAP_XnSetupFailure.h"
#include "ASN_XNAP_NGRANNodeConfigurationUpdate.h"
#include "ASN_XNAP_NGRANNodeConfigurationUpdateAcknowledge.h"
#include "ASN_XNAP_NGRANNodeConfigurationUpdateFailure.h"
#include "ASN_XNAP_E-UTRA-NR-CellResourceCoordinationRequest.h"
#include "ASN_XNAP_E-UTRA-NR-CellResourceCoordinationResponse.h"
#include "ASN_XNAP_CellActivationRequest.h"
#include "ASN_XNAP_CellActivationResponse.h"
#include "ASN_XNAP_CellActivationFailure.h"
#include "ASN_XNAP_ResetRequest.h"
#include "ASN_XNAP_ResetResponse.h"
#include "ASN_XNAP_ResourceStatusRequest.h"
#include "ASN_XNAP_ResourceStatusResponse.h"
#include "ASN_XNAP_ResourceStatusFailure.h"
#include "ASN_XNAP_MobilityChangeRequest.h"
#include "ASN_XNAP_MobilityChangeAcknowledge.h"
#include "ASN_XNAP_MobilityChangeFailure.h"
#include "ASN_XNAP_IABTransportMigrationManagementRequest.h"
#include "ASN_XNAP_IABTransportMigrationManagementResponse.h"
#include "ASN_XNAP_IABTransportMigrationManagementReject.h"
#include "ASN_XNAP_IABTransportMigrationModificationRequest.h"
#include "ASN_XNAP_IABTransportMigrationModificationResponse.h"
#include "ASN_XNAP_IABResourceCoordinationRequest.h"
#include "ASN_XNAP_IABResourceCoordinationResponse.h"
#include "ASN_XNAP_PartialUEContextTransfer.h"
#include "ASN_XNAP_PartialUEContextTransferAcknowledge.h"
#include "ASN_XNAP_PartialUEContextTransferFailure.h"
#include "ASN_XNAP_SNStatusTransfer.h"
#include "ASN_XNAP_HandoverCancel.h"
#include "ASN_XNAP_RANPaging.h"
#include "ASN_XNAP_XnUAddressIndication.h"
#include "ASN_XNAP_UEContextRelease.h"
#include "ASN_XNAP_SNodeReconfigurationComplete.h"
#include "ASN_XNAP_SNodeCounterCheckRequest.h"
#include "ASN_XNAP_RRCTransfer.h"
#include "ASN_XNAP_ErrorIndication.h"
#include "ASN_XNAP_PrivateMessage.h"
#include "ASN_XNAP_NotificationControlIndication.h"
#include "ASN_XNAP_ActivityNotification.h"
#include "ASN_XNAP_SecondaryRATDataUsageReport.h"
#include "ASN_XNAP_DeactivateTrace.h"
#include "ASN_XNAP_TraceStart.h"
#include "ASN_XNAP_HandoverSuccess.h"
#include "ASN_XNAP_ConditionalHandoverCancel.h"
#include "ASN_XNAP_EarlyStatusTransfer.h"
#include "ASN_XNAP_FailureIndication.h"
#include "ASN_XNAP_HandoverReport.h"
#include "ASN_XNAP_ResourceStatusUpdate.h"
#include "ASN_XNAP_AccessAndMobilityIndication.h"
#include "ASN_XNAP_CellTrafficTrace.h"
#include "ASN_XNAP_RANMulticastGroupPaging.h"
#include "ASN_XNAP_ScgFailureInformationReport.h"
#include "ASN_XNAP_ScgFailureTransfer.h"
#include "ASN_XNAP_F1CTrafficTransfer.h"
#include "ASN_XNAP_RetrieveUEContextConfirm.h"
#include "ASN_XNAP_CPCCancel.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_SuccessfulOutcome__value_PR {
	ASN_XNAP_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	ASN_XNAP_SuccessfulOutcome__value_PR_HandoverRequestAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_RetrieveUEContextResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeAdditionRequestAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeModificationRequestAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeModificationConfirm,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeReleaseRequestAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeReleaseConfirm,
	ASN_XNAP_SuccessfulOutcome__value_PR_SNodeChangeConfirm,
	ASN_XNAP_SuccessfulOutcome__value_PR_XnRemovalResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_XnSetupResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_NGRANNodeConfigurationUpdateAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_E_UTRA_NR_CellResourceCoordinationResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_CellActivationResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_ResetResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_ResourceStatusResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_MobilityChangeAcknowledge,
	ASN_XNAP_SuccessfulOutcome__value_PR_IABTransportMigrationManagementResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_IABTransportMigrationModificationResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_IABResourceCoordinationResponse,
	ASN_XNAP_SuccessfulOutcome__value_PR_PartialUEContextTransferAcknowledge
} ASN_XNAP_SuccessfulOutcome__value_PR;

/* ASN_XNAP_SuccessfulOutcome */
typedef struct ASN_XNAP_SuccessfulOutcome {
	ASN_XNAP_ProcedureCode_t	 procedureCode;
	ASN_XNAP_Criticality_t	 criticality;
	struct ASN_XNAP_SuccessfulOutcome__value {
		ASN_XNAP_SuccessfulOutcome__value_PR present;
		union ASN_XNAP_SuccessfulOutcome__ASN_XNAP_value_u {
			ASN_XNAP_HandoverRequestAcknowledge_t	 HandoverRequestAcknowledge;
			ASN_XNAP_RetrieveUEContextResponse_t	 RetrieveUEContextResponse;
			ASN_XNAP_SNodeAdditionRequestAcknowledge_t	 SNodeAdditionRequestAcknowledge;
			ASN_XNAP_SNodeModificationRequestAcknowledge_t	 SNodeModificationRequestAcknowledge;
			ASN_XNAP_SNodeModificationConfirm_t	 SNodeModificationConfirm;
			ASN_XNAP_SNodeReleaseRequestAcknowledge_t	 SNodeReleaseRequestAcknowledge;
			ASN_XNAP_SNodeReleaseConfirm_t	 SNodeReleaseConfirm;
			ASN_XNAP_SNodeChangeConfirm_t	 SNodeChangeConfirm;
			ASN_XNAP_XnRemovalResponse_t	 XnRemovalResponse;
			ASN_XNAP_XnSetupResponse_t	 XnSetupResponse;
			ASN_XNAP_NGRANNodeConfigurationUpdateAcknowledge_t	 NGRANNodeConfigurationUpdateAcknowledge;
			ASN_XNAP_E_UTRA_NR_CellResourceCoordinationResponse_t	 E_UTRA_NR_CellResourceCoordinationResponse;
			ASN_XNAP_CellActivationResponse_t	 CellActivationResponse;
			ASN_XNAP_ResetResponse_t	 ResetResponse;
			ASN_XNAP_ResourceStatusResponse_t	 ResourceStatusResponse;
			ASN_XNAP_MobilityChangeAcknowledge_t	 MobilityChangeAcknowledge;
			ASN_XNAP_IABTransportMigrationManagementResponse_t	 IABTransportMigrationManagementResponse;
			ASN_XNAP_IABTransportMigrationModificationResponse_t	 IABTransportMigrationModificationResponse;
			ASN_XNAP_IABResourceCoordinationResponse_t	 IABResourceCoordinationResponse;
			ASN_XNAP_PartialUEContextTransferAcknowledge_t	 PartialUEContextTransferAcknowledge;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
