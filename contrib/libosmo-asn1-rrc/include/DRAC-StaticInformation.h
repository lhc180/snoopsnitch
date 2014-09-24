/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DRAC_StaticInformation_H_
#define	_DRAC_StaticInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransmissionTimeValidity.h"
#include "TimeDurationBeforeRetry.h"
#include "DRAC-ClassIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRAC-StaticInformation */
typedef struct DRAC_StaticInformation {
	TransmissionTimeValidity_t	 transmissionTimeValidity;
	TimeDurationBeforeRetry_t	 timeDurationBeforeRetry;
	DRAC_ClassIdentity_t	 drac_ClassIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRAC_StaticInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRAC_StaticInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _DRAC_StaticInformation_H_ */
#include <asn_internal.h>