/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDSigningController : NSObject {
    AKAppleIDAuthenticationController * _authenticationController;
    NSXPCConnection * _connection;
    bool  _isProxy;
    NSXPCListenerEndpoint * _listenerEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _signerLock;
    NSObject<OS_dispatch_queue> * _signingQueue;
}

@property (nonatomic, retain) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) bool isProxy;

- (void).cxx_destruct;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(id /* block */)arg3;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)absintheSignatureForData:(id)arg1 completion:(id /* block */)arg2;
- (id)authenticationController;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (bool)isProxy;
- (void)setAuthenticationController:(id)arg1;
- (void)setIsProxy:(bool)arg1;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)signingHeadersForRequest:(id)arg1 completion:(id /* block */)arg2;

@end
