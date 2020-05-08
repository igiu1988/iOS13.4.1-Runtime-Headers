/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTLVRecord : NSObject {
    NSData * _data;
    unsigned long long  _tag;
    NSData * _value;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) NSData *value;

+ (id)parseFromDataSource:(id)arg1;
+ (id)recordFromData:(id)arg1;
+ (id)sequenceOfRecordsFromData:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3;
- (unsigned long long)tag;
- (id)value;

@end
