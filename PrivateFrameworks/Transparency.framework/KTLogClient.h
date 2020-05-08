/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTLogClient : TransparencyLogClient {
    bool  _configured;
    NSURL * _consistencyProofURI;
    double  _expirationTime;
    NSURL * _publicKeysURI;
    NSURL * _queryURI;
}

@property bool configured;
@property (retain) NSURL *consistencyProofURI;
@property double expirationTime;
@property (retain) NSURL *publicKeysURI;
@property (retain) NSURL *queryURI;

+ (id)configBagRequest;
+ (id)configBagURL;
+ (id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3;
+ (id)formatEventName:(id)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (void)clearState:(id*)arg1;
- (bool)configurationExpired;
- (void)configure:(id /* block */)arg1;
- (bool)configureFromNetworkBag:(id)arg1 error:(id*)arg2;
- (bool)configureWithDisk:(id*)arg1;
- (bool)configured;
- (id)consistencyProofURI;
- (id)copyConfigurationBag:(id*)arg1;
- (void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadPublicKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadQuery:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)expirationTime;
- (void)fetchPublicKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)handleQueryResponse:(id)arg1 fetchError:(id)arg2 application:(id)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (bool)processConfigBagData:(id)arg1 error:(id*)arg2;
- (id)publicKeysURI;
- (id)queryURI;
- (id)readConfigFromDisk:(id*)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setConsistencyProofURI:(id)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setPublicKeysURI:(id)arg1;
- (void)setQueryURI:(id)arg1;
- (bool)validateConfigBagCertificates:(id)arg1 error:(id*)arg2;
- (bool)validateConfigBagEntries:(id)arg1 error:(id*)arg2;
- (bool)validateConfigBagSignature:(id)arg1 error:(id*)arg2;
- (bool)validateConfigEntries:(id)arg1 error:(id*)arg2;
- (bool)writeConfigToDisk:(id)arg1 error:(id*)arg2;

@end
