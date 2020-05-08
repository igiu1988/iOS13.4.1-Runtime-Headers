/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICallTimeGroup : NSObject {
    CHManager * _callHistoryManager;
    PSSpecifier * _currentCallTimeSpecifier;
    PSSpecifier * _groupSpecifier;
    PSListController * _hostController;
    PSSpecifier * _lifetimeCallTimeSpecifier;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSSpecifier *currentCallTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSSpecifier *lifetimeCallTimeSpecifier;

- (void).cxx_destruct;
- (id)callHistoryManager;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(bool)arg1;
- (id)currentCallTimeSpecifier;
- (id)groupSpecifier;
- (void)handleCallTimersChanged;
- (id)hostController;
- (id)initWithListController:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)lifetimeCallTimeSpecifier;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCurrentCallTimeSpecifier:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLifetimeCallTimeSpecifier:(id)arg1;
- (id)specifiers;

@end