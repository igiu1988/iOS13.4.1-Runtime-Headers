/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface _EMMessageDatabaseIDCollectionItemID : EMMessageCollectionItemID <EFCacheable> {
    long long  _databaseID;
}

@property (nonatomic, readonly) long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)cachedSelf;
- (long long)databaseID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
