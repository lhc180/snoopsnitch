/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SystemSpecificCapUpdateReqList_r8_H_
#define	_SystemSpecificCapUpdateReqList_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemSpecificCapUpdateReq-r8.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemSpecificCapUpdateReqList-r8 */
typedef struct SystemSpecificCapUpdateReqList_r8 {
	A_SEQUENCE_OF(SystemSpecificCapUpdateReq_r8_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemSpecificCapUpdateReqList_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemSpecificCapUpdateReqList_r8;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemSpecificCapUpdateReqList_r8_H_ */
#include <asn_internal.h>