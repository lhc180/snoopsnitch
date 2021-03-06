/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_SelectedServiceInfo_H_
#define	_MBMS_SelectedServiceInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "MBMS-SelectedServicesListFull.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_SelectedServiceInfo__status_PR {
	MBMS_SelectedServiceInfo__status_PR_NOTHING,	/* No components present */
	MBMS_SelectedServiceInfo__status_PR_none,
	MBMS_SelectedServiceInfo__status_PR_some
} MBMS_SelectedServiceInfo__status_PR;

/* MBMS-SelectedServiceInfo */
typedef struct MBMS_SelectedServiceInfo {
	struct MBMS_SelectedServiceInfo__status {
		MBMS_SelectedServiceInfo__status_PR present;
		union MBMS_SelectedServiceInfo__status_u {
			NULL_t	 none;
			MBMS_SelectedServicesListFull_t	 some;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} status;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SelectedServiceInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SelectedServiceInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_SelectedServiceInfo_H_ */
#include <asn_internal.h>
