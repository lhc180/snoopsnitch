/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SIR_MeasurementList_H_
#define	_SIR_MeasurementList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SIR_MeasurementResults;

/* SIR-MeasurementList */
typedef struct SIR_MeasurementList {
	A_SEQUENCE_OF(struct SIR_MeasurementResults) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIR_MeasurementList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIR_MeasurementList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SIR-MeasurementResults.h"

#endif	/* _SIR_MeasurementList_H_ */
#include <asn_internal.h>
