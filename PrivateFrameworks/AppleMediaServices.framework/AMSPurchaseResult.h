/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchaseResult : NSObject {
    NSString * _correlationID;
    NSError * _error;
    AMSPurchase * _purchase;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, copy) NSString *correlationID;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) AMSPurchase *purchase;
@property (nonatomic, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)correlationID;
- (id)error;
- (id)purchase;
- (id)responseDictionary;
- (void)setCorrelationID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end