/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebAuthenticateAction : NSObject <AMSUIWebActionRunnable> {
    AMSUIWebClientContext * _context;
    bool  _makeCurrentAccount;
    bool  _pauseTimeouts;
    AMSAuthenticateRequest * _request;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool makeCurrentAccount;
@property (nonatomic) bool pauseTimeouts;
@property (nonatomic, retain) AMSAuthenticateRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)makeCurrentAccount;
- (bool)pauseTimeouts;
- (id)request;
- (id)runAction;
- (void)setContext:(id)arg1;
- (void)setMakeCurrentAccount:(bool)arg1;
- (void)setPauseTimeouts:(bool)arg1;
- (void)setRequest:(id)arg1;

@end