/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STUniquedManagedObject : NSManagedObject

@property (readonly, copy) NSString *externalClassName;
@property (nonatomic, readonly) NSUUID *sortKey;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (id)externalClassName;
- (void)updateUniqueIdentifier;

@end
