/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
 */

@interface AAUIAchievementLocalizationProvider : NSObject {
    NSDate * _currentDateOverride;
    NSCalendar * _gregorianCalendar;
    NSString * _name;
    FIUIUnitManager * _unitManager;
    bool  _wheelchairUser;
}

@property (nonatomic, retain) NSDate *currentDateOverride;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) FIUIUnitManager *unitManager;
@property (nonatomic) bool wheelchairUser;

- (void).cxx_destruct;
- (id)_achievementValueWithAchievement:(id)arg1;
- (id)_allStringCombinationsWithPrefix:(id)arg1 andSuffixes:(id)arg2;
- (id)_backDateStringForDate:(id)arg1 achievement:(id)arg2 dateStyle:(unsigned long long)arg3;
- (id)_buildKeyWithKeyBaseString:(id)arg1;
- (id)_buildKeyWithKeyBaseString:(id)arg1 andSuffixes:(id)arg2;
- (id)_calculateSuffixCombinations:(id)arg1;
- (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2 template:(id)arg3;
- (id)_formattedEnergyValue:(id)arg1 template:(id)arg2;
- (id)_goalValueWithAchievement:(id)arg1;
- (id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2;
- (id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2 localizationBundleURL:(id)arg3;
- (id)_pluralizeLocalizedString:(id)arg1 withAchievement:(id)arg2;
- (id)_progressValueWithAchievement:(id)arg1;
- (id)_quantityToGoalValueWithAchievement:(id)arg1;
- (id)_remainingProgressValueWithUnit:(id)arg1 achievement:(id)arg2;
- (id)_replacePlaceholdersInString:(id)arg1 withAchievement:(id)arg2;
- (id)_stringByTrimmingPlaceholderMarkersFromString:(id)arg1;
- (id)_suffixesForLocalizedStringLookup;
- (id)_userEnergyUnitSuffix;
- (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2;
- (id)achievedAlertBackDescriptionForAchievement:(id)arg1 sizeVariant:(long long)arg2 dateSizeVariant:(long long)arg3;
- (id)achievedAlertDescriptionForAchievement:(id)arg1;
- (id)achievedDescriptionForAchievement:(id)arg1;
- (id)achievedShortDescriptionForAchievement:(id)arg1;
- (id)currentDate;
- (id)currentDateOverride;
- (id)friendAchievedDescriptionForAchievement:(id)arg1;
- (id)friendAchievedTitleForAchievement:(id)arg1;
- (id)gregorianCalendar;
- (id)init;
- (id)localizedStringForKey:(id)arg1 withAchievement:(id)arg2;
- (id)name;
- (void)setCurrentDateOverride:(id)arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUnitManager:(id)arg1;
- (void)setWheelchairUser:(bool)arg1;
- (id)shareDescriptionForAchievement:(id)arg1;
- (id)titleForAchievement:(id)arg1;
- (id)unachievedAlertBackDescriptionForAchievement:(id)arg1;
- (id)unachievedAlertDescriptionForAchievement:(id)arg1;
- (id)unachievedDescriptionForAchievement:(id)arg1;
- (id)unachievedShortDescriptionForAchievement:(id)arg1;
- (id)unitManager;
- (bool)wheelchairUser;

@end
