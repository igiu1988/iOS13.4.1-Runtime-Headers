/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDMedicalRecordDisplayItemGroup : NSObject {
    WDMedicalRecordDaySummary * _daySummary;
    NSArray * _items;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) WDMedicalRecordDaySummary *daySummary;
@property (nonatomic, readonly, copy) NSArray *displayItems;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (id)displayItemGroupWithDaySummary:(id)arg1;
+ (id)displayItemGroupWithDisplayItems:(id)arg1;

- (void).cxx_destruct;
- (id)daySummary;
- (id)displayItemAtIndex:(long long)arg1;
- (id)displayItems;
- (id)items;
- (long long)numberOfDisplayItems;
- (void)setDaySummary:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
