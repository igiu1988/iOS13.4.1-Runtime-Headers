/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate> {
    HKClinicalAccount * _account;
    HKAccountOwner * _accountOwner;
    HKMedicalRecord * _medicalRecord;
    WDMedicalRecordDetailDataProvider * _medicalRecordDataProvider;
    HRProfile * _profile;
}

@property (nonatomic, readonly, copy) HKClinicalAccount *account;
@property (nonatomic, readonly, copy) HKAccountOwner *accountOwner;
@property (nonatomic, retain) HKMedicalRecord *medicalRecord;
@property (nonatomic, retain) WDMedicalRecordDetailDataProvider *medicalRecordDataProvider;
@property (nonatomic, retain) HRProfile *profile;

- (void).cxx_destruct;
- (void)_tapToRadar:(id)arg1;
- (id)account;
- (id)accountOwner;
- (void)detailDataProviderHasDisplayItemUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 medicalRecord:(id)arg2;
- (id)medicalRecord;
- (id)medicalRecordDataProvider;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)setMedicalRecord:(id)arg1;
- (void)setMedicalRecordDataProvider:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
