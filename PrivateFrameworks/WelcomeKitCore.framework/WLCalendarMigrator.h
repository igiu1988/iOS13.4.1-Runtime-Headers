/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLCalendarMigrator : NSObject <WLDataclassMigrating> {
    EKEventStore * _eventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentType;

- (void).cxx_destruct;
- (void)_importDataRecord:(id)arg1 summary:(id)arg2;
- (bool)accountBased;
- (id)contentType;
- (id)dataType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (bool)storeRecordDataInDatabase;

@end