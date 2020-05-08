/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {
    SSPersonalizeOffersResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SSPersonalizeOffersRequest *request;
@property (readonly) Class superclass;

+ (id)instanceWithItems:(id)arg1;

- (void).cxx_destruct;
- (void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startCompletionBlock:(id /* block */)arg1;

@end
