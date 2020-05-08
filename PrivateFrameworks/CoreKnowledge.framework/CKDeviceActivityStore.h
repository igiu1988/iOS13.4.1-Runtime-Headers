/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKDeviceActivityStore : NSObject <CKWritableDeviceActivityStore> {
    void store;
}

- (void).cxx_destruct;
- (id)init;
- (void)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;

@end