/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase {
    NSArray * _payloadApps;
    NSArray * _payloadCategories;
    NSArray * _payloadWebSites;
}

@property (nonatomic, copy) NSArray *payloadApps;
@property (nonatomic, copy) NSArray *payloadCategories;
@property (nonatomic, copy) NSArray *payloadWebSites;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadApps;
- (id)payloadCategories;
- (id)payloadWebSites;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadApps:(id)arg1;
- (void)setPayloadCategories:(id)arg1;
- (void)setPayloadWebSites:(id)arg1;

@end
