/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttachment : EKObject

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURL *URLForPendingFileCopy;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *fileFormat;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) bool isBinary;
@property (nonatomic, readonly) NSString *localRelativePath;
@property (nonatomic, readonly) NSURL *localURL;

+ (id)_copyFileAtURLToTemporaryDirectory:(id)arg1;
+ (id)createTempDestinationURLWithExtension:(id)arg1;
+ (Class)frozenClass;

- (id)URL;
- (id)URLForPendingFileCopy;
- (id)UUID;
- (id)XPropertiesData;
- (long long)compareFileNames:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalId;
- (id)fileFormat;
- (id)fileName;
- (id)fileNameRaw;
- (id)fileSize;
- (id)initWithFilepath:(id)arg1;
- (bool)isBinary;
- (id)localRelativePath;
- (id)localURL;
- (id)semanticIdentifier;
- (void)setExternalId:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFileNameRaw:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setIsBinary:(bool)arg1;
- (void)setLocalRelativePath:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLForPendingFileCopy:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setXPropertiesData:(id)arg1;

@end
