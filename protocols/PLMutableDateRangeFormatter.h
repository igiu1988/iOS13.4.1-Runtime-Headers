/* Generated by EzioChiu.
 */

@protocol PLMutableDateRangeFormatter <NSObject>

@required

- (bool)autoUpdateOnChanges;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (NSLocale *)locale;
- (void)setAutoUpdateOnChanges:(bool)arg1;
- (void)setLocale:(NSLocale *)arg1;
- (void)setShouldOmitYear:(bool)arg1;
- (void)setUseLocalDates:(bool)arg1;
- (bool)shouldOmitYear;
- (bool)useLocalDates;

@end
