/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObjectType : NSObject <NSCopying, NSSecureCoding> {
    short  _code;
    HKObjectType * _parentType;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) Class dataObjectClass;
@property (getter=_definition, nonatomic, readonly) struct { id x1; id x2; id x3; id x4; short x5; BOOL x6; unsigned char x7; }*definition;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) bool isClinicalType;
@property (nonatomic, retain) HKObjectType *parentType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_allCategoryTypes;
+ (id)_allCharacteristicTypes;
+ (id)_allCorrelationTypes;
+ (id)_allDataTypeIdentifiers;
+ (id)_allQuantityTypes;
+ (id)_allTypesOfClass:(Class)arg1;
+ (id)_allTypesWithIdentifierTable:(id)arg1;
+ (bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (bool)_allowAuthorizationForSharing:(bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (id)_clinicalTypesFromTypes:(id)arg1;
+ (void)_enumerateObjectTypesWithHandler:(id /* block */)arg1;
+ (id)_nonClinicalTypesFromTypes:(id)arg1;
+ (id)_objectTypeWithIdentifier:(id)arg1 class:(Class)arg2 lookupTable:(id)arg3;
+ (id)_objectTypesFromIdentifierArray:(id)arg1 error:(id*)arg2;
+ (id)_typeWithIdentifier:(id)arg1;
+ (id)_typesIncludingParentTypes:(id)arg1;
+ (id)accountOwnerTypeForIdentifier:(id)arg1;
+ (id)activityCacheType;
+ (id)activityMoveModeChangeType;
+ (id)activitySummaryType;
+ (id)allergyRecordTypeForIdentifier:(id)arg1;
+ (id)atrialFibrillationEventType;
+ (id)audioExposureEventType;
+ (id)audiogramSampleType;
+ (id)bradycardiaType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)clinicalTypeForIdentifier:(id)arg1;
+ (id)coachingEventType;
+ (id)conditionRecordTypeForIdentifier:(id)arg1;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(long long)arg1;
+ (id)dataTypeWithNumber:(id)arg1;
+ (id)deepBreathingSessionType;
+ (id)diagnosticTestReportTypeForIdentifier:(id)arg1;
+ (id)diagnosticTestResultTypeForIdentifier:(id)arg1;
+ (id)documentTypeForIdentifier:(id)arg1;
+ (id)exerciseGoal;
+ (id)fitnessFriendAchievementType;
+ (id)fitnessFriendActivitySnapshotType;
+ (id)fitnessFriendWorkoutType;
+ (id)heartRateType;
+ (id)heartStudyEventType;
+ (id)irregularlyIrregularPulseType;
+ (id)medicalTypeForIdentifier:(id)arg1;
+ (id)medicationDispenseRecordTypeForIdentifier:(id)arg1;
+ (id)medicationOrderTypeForIdentifier:(id)arg1;
+ (id)medicationRecordTypeForIdentifier:(id)arg1;
+ (id)menstrualFlowType;
+ (id)objectTypeForWorkoutMetric:(unsigned long long)arg1;
+ (id)procedureRecordTypeForIdentifier:(id)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)seriesTypeForIdentifier:(id)arg1;
+ (id)standGoal;
+ (bool)supportsSecureCoding;
+ (id)tachycardiaType;
+ (id)unknownRecordTypeForIdentifier:(id)arg1;
+ (id)vaccinationRecordTypeForIdentifier:(id)arg1;
+ (id)watchActivationType;
+ (id)workoutType;

- (void).cxx_destruct;
- (struct { id x1; id x2; id x3; id x4; short x5; BOOL x6; unsigned char x7; }*)_definition;
- (id)_hk_localizedNameKey;
- (id)_initWithCode:(long long)arg1;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (bool)_requiresAuthorization;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataObjectClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_localizedName;
- (id)hk_localizedNameForAuthSheet;
- (id)hk_localizedNameForLocale:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isClinicalType;
- (bool)isEqual:(id)arg1;
- (bool)isHealthRecordsType;
- (id)parentType;
- (void)setParentType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_hk_formatMetadataValueForMetadataKey:(id)arg1 object:(id)arg2 unitPreferenceController:(id)arg3;
- (long long)associatedSampleAggregationStyle;
- (id)hk_formatMetadataValue:(id)arg1 displayType:(id)arg2 unitPreferencesController:(id)arg3;
- (id)hk_formatPrimaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_formatSecondaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_metadataValueDisplayType;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2 formattingContext:(long long)arg3;
- (id)hk_primaryMetadataKey;
- (id)hk_secondaryMetadataKey;
- (Class)hk_valueFormatterClass;

@end
