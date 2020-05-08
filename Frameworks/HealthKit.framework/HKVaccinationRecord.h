/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKVaccinationRecord : HKMedicalRecord <HDCoding, HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKMedicalDate * _administrationDate;
    HKConcept * _bodySite;
    NSArray * _bodySiteCodings;
    NSString * _doseNumber;
    NSString * _doseQuantity;
    HKMedicalDate * _expirationDate;
    bool  _notGiven;
    bool  _patientReported;
    NSString * _performer;
    NSString * _reaction;
    NSArray * _reasons;
    NSArray * _reasonsCodings;
    NSArray * _reasonsNotGiven;
    NSArray * _reasonsNotGivenCodings;
    HKConcept * _route;
    NSArray * _routeCodings;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKConcept * _vaccination;
    NSArray * _vaccinationCodings;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly) bool notGiven;
@property (readonly) bool patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasons;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGiven;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (readonly, copy) HKConcept *route;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *vaccination;
@property (readonly, copy) NSArray *vaccinationCodings;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(bool)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(bool)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 config:(id /* block */)arg27;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 performer:(id)arg16 bodySiteCodings:(id)arg17 reaction:(id)arg18 notGiven:(bool)arg19 administrationDate:(id)arg20 statusCoding:(id)arg21 patientReported:(bool)arg22 routeCodings:(id)arg23 reasonsCodings:(id)arg24 reasonsNotGivenCodings:(id)arg25;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(bool)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(bool)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26;

- (void).cxx_destruct;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setBodySite:(id)arg1;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setNotGiven:(bool)arg1;
- (void)_setPatientReported:(bool)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setReasons:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGiven:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setRoute:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setVaccination:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)administrationDate;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySite;
- (id)bodySiteCodings;
- (id)bodySiteCodingsCollection;
- (id)bodySiteCodingsContext;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doseNumber;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (bool)notGiven;
- (bool)patientReported;
- (id)performer;
- (id)reaction;
- (id)reasons;
- (id)reasonsCodings;
- (id)reasonsCodingsCollection;
- (id)reasonsCodingsContexts;
- (id)reasonsNotGiven;
- (id)reasonsNotGivenCodings;
- (id)reasonsNotGivenCodingsCollection;
- (id)reasonsNotGivenCodingsContexts;
- (id)route;
- (id)routeCodings;
- (id)routeCodingsCollection;
- (id)routeCodingsContext;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (id)vaccination;
- (id)vaccinationCodings;
- (id)vaccinationCodingsCollection;
- (id)vaccinationCodingsContext;
- (id)vaccinationRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)meaningfulDateTitle;
- (long long)recordCategoryType;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
