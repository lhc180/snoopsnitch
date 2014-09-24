/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Event2c_r11_H_
#define	_Event2c_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HysteresisInterFreq.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus_r10;
struct NonUsedFreqParameterList_r11;

/* Event2c-r11 */
typedef struct Event2c_r11 {
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus_r10	*reportingCellStatus	/* OPTIONAL */;
	struct NonUsedFreqParameterList_r11	*nonUsedFreqParameterList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2c_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2c_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportingCellStatus-r10.h"
#include "NonUsedFreqParameterList-r11.h"

#endif	/* _Event2c_r11_H_ */
#include <asn_internal.h>