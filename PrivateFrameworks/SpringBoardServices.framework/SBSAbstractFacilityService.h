/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {
    SBSServiceFacilityClient * _client;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) SBSServiceFacilityClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)serviceFacilityClientClass;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)client;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
