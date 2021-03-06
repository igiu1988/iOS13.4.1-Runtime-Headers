/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKConcept : NSObject <NSSecureCoding> {
    NSMutableArray * _attributes;
    HKConceptIdentifier * _identifier;
    bool  _isUndefined;
    NSString * _nodeName;
    NSMutableArray * _relationships;
    bool  _relationshipsAreLoaded;
}

@property (nonatomic, readonly, copy) HKMedicalCoding *LOINCCode;
@property (nonatomic, readonly, copy) HKConceptAttribute *adHocCode;
@property (nonatomic, readonly, copy) NSArray *attributes;
@property (nonatomic, readonly, copy) HKConcept *chartedWithConcept;
@property (nonatomic, readonly) bool chartsBloodPressure;
@property (nonatomic, readonly, copy) HKConcept *groupByConcept;
@property (nonatomic, readonly) bool hidesOutOfRangeFilter;
@property (nonatomic, readonly, copy) HKConceptIdentifier *identifier;
@property (nonatomic, readonly) bool isAdHoc;
@property (nonatomic, readonly) bool isNebulous;
@property (nonatomic, readonly) bool isQualifiedForConceptRoom;
@property (nonatomic, readonly) bool isUndefined;
@property (nonatomic, readonly, copy) NSString *localizedPreferredName;
@property (nonatomic, copy) NSString *nodeName;
@property (nonatomic, readonly, copy) NSString *preferredName;
@property (nonatomic, readonly, copy) NSArray *relationships;
@property (nonatomic) bool relationshipsAreLoaded;
@property (nonatomic, readonly, copy) NSSet *validInRegions;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_buildCategoryIdentifierWithCode:(unsigned long long)arg1;
+ (id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2;
+ (id)allergyCategoryIdentifier;
+ (id)conditionCategoryIdentifier;
+ (id)fallbackLanguagesForLocale:(id)arg1;
+ (id)labCategoryIdentifier;
+ (id)medicationCategoryIdentifier;
+ (id)preferredLanguages;
+ (id)procedureCategoryIdentifier;
+ (bool)supportsSecureCoding;
+ (id)unknownCategoryIdentifier;
+ (id)vaccinationCategoryIdentifier;
+ (id)vitalCategoryIdentifier;

- (void).cxx_destruct;
- (id)LOINCCode;
- (id)_firstConceptOfRelationshipType:(id)arg1;
- (id)_init;
- (id)adHocCode;
- (void)addAttribute:(id)arg1;
- (void)addRelationships:(id)arg1;
- (id)attributes;
- (id)attributesForName:(id)arg1;
- (id)chartedWithConcept;
- (bool)chartsBloodPressure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstAttributeForName:(id)arg1;
- (id)groupByConcept;
- (unsigned long long)hash;
- (bool)hidesOutOfRangeFilter;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAdHoc;
- (bool)isEqual:(id)arg1;
- (bool)isNebulous;
- (bool)isUndefined;
- (id)localizedPreferredName;
- (id)nodeName;
- (id)preferredName;
- (id)relationships;
- (bool)relationshipsAreLoaded;
- (void)setNodeName:(id)arg1;
- (void)setRelationshipsAreLoaded:(bool)arg1;
- (id)validInRegions;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)isQualifiedForConceptRoom;

@end
