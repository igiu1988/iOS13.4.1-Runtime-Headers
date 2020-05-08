/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    int  _entityType;
    int  _rowID;
    bool  _temporary;
}

@property (nonatomic, readonly) CADObjectID *CADObjectID;
@property (nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) bool isTemporary;
@property (nonatomic, readonly) int rowID;
@property (nonatomic, readonly) NSString *stringRepresentation;

+ (id)CADObjectIDsFromEKObjectIDs:(id)arg1;
+ (id)EKObjectIDsFromCADObjectIDs:(id)arg1;
+ (id)objectIDWithCADObjectID:(id)arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;

- (id)CADObjectID;
- (id)URIRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (long long)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (int)rowID;
- (id)stringRepresentation;

@end