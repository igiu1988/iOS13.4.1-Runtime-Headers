/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProvidingPrivate> {
    NSMutableDictionary * _factorProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateFactorsWithNamespaceId:(unsigned int)arg1;
- (id)levelForFactor:(id)arg1 withNamespace:(unsigned int)arg2;
- (id)providerForNamespace:(unsigned int)arg1;
- (id)treatmentIdWithNamespace:(unsigned int)arg1;

@end
