/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTVerifier : NSObject {
    TransparencyApplication * _application;
    NSString * _applicationIdentifier;
    NSXPCConnection * _connection;
}

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)application;
- (id)applicationIdentifier;
- (void)clearLogClientConfiguration:(id /* block */)arg1;
- (void)clearPublicKeyStoreState:(id /* block */)arg1;
- (void)clearState:(id /* block */)arg1;
- (id)connection;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(id /* block */)arg6;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(id /* block */)arg5;
- (void)copyApplicationState:(id /* block */)arg1;
- (void)copyApplicationTranscript:(id /* block */)arg1;
- (void)copyDaemonState:(id /* block */)arg1;
- (void)copyDataStoreStatistics:(id /* block */)arg1;
- (void)copyKeyStoreState:(id /* block */)arg1;
- (void)copyKeyStoreStateFromDisk:(id /* block */)arg1;
- (void)copyLogClientConfiguration:(id /* block */)arg1;
- (void)forceApplicationConfig:(id /* block */)arg1;
- (void)forceApplicationKeysDownload:(id /* block */)arg1;
- (void)forceApplicationKeysFetch:(id /* block */)arg1;
- (void)forceConfigUpdate:(id /* block */)arg1;
- (void)forceDutyCycle:(id /* block */)arg1;
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(id /* block */)arg3;
- (id)initWithApplication:(id)arg1;
- (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)invokeXPCSynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)setApplication:(id)arg1;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id*)arg5;
- (void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id*)arg6;
- (void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id*)arg5;
- (void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(id /* block */)arg4;

@end
