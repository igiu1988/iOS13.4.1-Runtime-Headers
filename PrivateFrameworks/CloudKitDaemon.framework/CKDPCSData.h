/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSData : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    NSString * _etag;
    struct _OpaquePCSShareProtection { } * _pcs;
    NSData * _pcsData;
    NSString * _pcsKeyID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSSecureCoding> *itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*pcs;
@property (nonatomic, copy) NSData *pcsData;
@property (nonatomic, retain) NSString *pcsKeyID;
@property (readonly) Class superclass;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1;
- (id)itemID;
- (struct _OpaquePCSShareProtection { }*)pcs;
- (id)pcsData;
- (id)pcsKeyID;
- (void)setEtag:(id)arg1;
- (void)setPcs:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPcsData:(id)arg1;
- (void)setPcsKeyID:(id)arg1;
- (bool)shouldEncodePCSData;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
