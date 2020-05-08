/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _amountDeleted;
}

@property (nonatomic) unsigned long long amountDeleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (unsigned long long)amountDeleted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (void)setAmountDeleted:(unsigned long long)arg1;

@end
