/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DRAC_SysInfo_H_
#define	_DRAC_SysInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransmissionProbability.h"
#include "MaximumBitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRAC-SysInfo */
typedef struct DRAC_SysInfo {
	TransmissionProbability_t	 transmissionProbability;
	MaximumBitRate_t	 maximumBitRate;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRAC_SysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRAC_SysInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _DRAC_SysInfo_H_ */
#include <asn_internal.h>
