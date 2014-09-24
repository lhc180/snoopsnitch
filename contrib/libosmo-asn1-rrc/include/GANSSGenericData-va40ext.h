/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GANSSGenericData_va40ext_H_
#define	_GANSSGenericData_va40ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSTimeModelsList_va40ext;
struct UE_Positioning_GANSS_ReferenceMeasurementInfo_va40ext;
struct UE_Positioning_GANSS_Almanac_va40ext;

/* GANSSGenericData-va40ext */
typedef struct GANSSGenericData_va40ext {
	struct GANSSTimeModelsList_va40ext	*ganssTimeModelsList	/* OPTIONAL */;
	struct UE_Positioning_GANSS_ReferenceMeasurementInfo_va40ext	*uePositioningGANSSReferenceMeasurementInfo	/* OPTIONAL */;
	struct UE_Positioning_GANSS_Almanac_va40ext	*uePositioningGANSSAlmanac	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSGenericData_va40ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSGenericData_va40ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSTimeModelsList-va40ext.h"
#include "UE-Positioning-GANSS-ReferenceMeasurementInfo-va40ext.h"
#include "UE-Positioning-GANSS-Almanac-va40ext.h"

#endif	/* _GANSSGenericData_va40ext_H_ */
#include <asn_internal.h>