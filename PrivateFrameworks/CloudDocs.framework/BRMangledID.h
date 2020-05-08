/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRMangledID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _mangledIDString;
}

@property (nonatomic, readonly) NSString *aliasTargetContainerString;
@property (nonatomic, readonly) NSString *appLibraryOrZoneName;
@property (nonatomic, readonly) bool isBRTestMangledID;
@property (nonatomic, readonly) bool isCloudDocsMangledID;
@property (nonatomic, readonly) bool isDesktopMangledID;
@property (nonatomic, readonly) bool isDocumentsMangledID;
@property (nonatomic, readonly) bool isPassbookMangledID;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) NSString *mangledIDString;
@property (nonatomic, readonly) NSString *ownerName;

+ (id)_containerIDFromSharedContainerID:(id)arg1 validate:(bool)arg2;
+ (id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(bool)arg2;
+ (id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(bool)arg3;
+ (id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(bool)arg2;
+ (id)_privateMangledContainerID:(id)arg1 validate:(bool)arg2;
+ (id)_privateUnmangledContainerID:(id)arg1 validate:(bool)arg2;
+ (id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(bool)arg3;
+ (id)cloudDocsMangledID;
+ (id)desktopMangledID;
+ (id)documentsMangledID;
+ (id)sideCarMangledID;
+ (bool)supportsSecureCoding;
+ (bool)validateContainerID:(id)arg1;
+ (bool)validateMangledIDString:(id)arg1;
+ (bool)validateOwnerName:(id)arg1;

- (void).cxx_destruct;
- (id)aliasTargetContainerString;
- (id)appLibraryOrZoneName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAliasTargetContainerString:(id)arg1;
- (id)initWithAppLibraryName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMangledString:(id)arg1;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (bool)isBRTestMangledID;
- (bool)isCloudDocsMangledID;
- (bool)isDesktopMangledID;
- (bool)isDocumentsMangledID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMangledID:(id)arg1;
- (bool)isPassbookMangledID;
- (bool)isPrivate;
- (bool)isShared;
- (id)mangledIDString;
- (id)ownerName;

@end
