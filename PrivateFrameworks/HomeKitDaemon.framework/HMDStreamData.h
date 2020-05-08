/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamData : HMFObject {
    NSData * _data;
    HMDStreamDataSequenceNumber * _sequenceNumber;
    NSString * _type;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)hash;
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 type:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)sequenceNumber;
- (id)type;

@end
