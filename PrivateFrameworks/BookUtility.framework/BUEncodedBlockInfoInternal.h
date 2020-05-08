/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo> {
    unsigned long long  _encodedLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long decodedLength;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)decodedLength;
- (id)description;
- (unsigned long long)encodedLength;
- (unsigned long long)hash;
- (id)initWithEncodedLength:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
