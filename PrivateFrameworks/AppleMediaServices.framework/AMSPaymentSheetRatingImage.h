/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPaymentSheetRatingImage : NSObject {
    NSString * _URLString;
    long long  _ratingType;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly, copy) NSString *localAssetName;
@property (nonatomic, readonly) long long ratingType;
@property (getter=isServerSupplied, nonatomic, readonly) bool serverSupplied;
@property (nonatomic, readonly) bool tint;
@property (nonatomic, readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)URLString;
- (long long)_ratingTypeForType:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (bool)isServerSupplied;
- (id)localAssetName;
- (long long)ratingType;
- (bool)tint;
- (id)value;

@end
