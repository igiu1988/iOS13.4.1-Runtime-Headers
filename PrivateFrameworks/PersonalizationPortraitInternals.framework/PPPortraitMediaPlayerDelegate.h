/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPPortraitMediaPlayerDelegate : NSObject <MPRequestResponseControllerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _donationDelaySeconds;
    PPNamedEntityStore * _namedEntityStore;
    MPCPlayerResponse * _pendingDonation;
    NSDate * _pendingDonationTimestamp;
    MPRequestResponseController * _requestController;
    bool  _useSGNamedEntityDissector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_response:(id)arg1 isEqualTo:(id)arg2;
+ (id)_setupRequest;
+ (id)bundleIdOfCurrentForegroundApp;

- (void).cxx_destruct;
- (void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)init;
- (id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(bool)arg3 useSGNamedEntityDissector:(bool)arg4;
- (void)processResponse:(id)arg1;
- (void)waitForQueueEmpty;

@end
