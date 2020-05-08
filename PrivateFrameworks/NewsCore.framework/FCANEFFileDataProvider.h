/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider> {
    NSString * _filePath;
    FCInterestToken * _holdToken;
    long long  _options;
    NSData * _wrappingKey;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) FCInterestToken *holdToken;
@property (nonatomic, readonly) bool isRawFileConsumable;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSData *wrappingKey;

- (void).cxx_destruct;
- (id)data;
- (id)filePath;
- (id)holdToken;
- (id)initWithFilePath:(id)arg1 wrappingKey:(id)arg2 options:(long long)arg3 holdToken:(id)arg4;
- (bool)isRawFileConsumable;
- (long long)options;
- (id)wrappingKey;

@end
