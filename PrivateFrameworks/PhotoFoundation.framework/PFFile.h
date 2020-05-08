/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFFile : NSObject <NSCopying, PFFile> {
    NSString * _cachedPath;
    struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; } * _fileInfo;
    unsigned long long  _pathHash;
    NSURL * _url;
    NSString * _uti;
}

@property (readonly) NSString *UTI;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long fileSize;
@property (readonly) bool isDirectory;
@property (readonly) NSString *path;
@property (nonatomic, readonly) unsigned long long pathHash;
@property (readonly) NSURL *url;

+ (id)assetType:(id)arg1;
+ (bool)createEmptyFileAtURL:(id)arg1;
+ (id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id*)arg5;
+ (id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id*)arg4;
+ (bool)directoryExists:(id)arg1;
+ (int)disableOSCachingForURL:(id)arg1;
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(bool)arg2;
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(bool)arg2 fixCreationDate:(bool)arg3;
+ (bool)fileExists:(id)arg1;
+ (id)fileWithPath:(id)arg1;
+ (id)fileWithURL:(id)arg1;
+ (id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2;
+ (bool)pathExists:(id)arg1;
+ (id)realPathFromFileAlias:(id)arg1;
+ (void)reenableOSCachingForFileDescriptor:(int)arg1;
+ (id)resourceIdentifierForURL:(id)arg1;
+ (long long)sizeOf:(id)arg1 includeSubFolders:(bool)arg2;
+ (id)uniqueFileSystemNameForName:(id)arg1 inDirectory:(id)arg2;

- (void).cxx_destruct;
- (id)UTI;
- (id)assetType;
- (id)attributes;
- (const struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)cachedStat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)directoryEnumerator;
- (bool)exists;
- (id)extension;
- (id)fileByResolvingFileAlias;
- (id)fileComponent;
- (id)fileCreationDate;
- (id)fileExtension;
- (id)fileModificationDate;
- (id)fileName;
- (unsigned long long)fileSize;
- (const char *)fileSystemRepresentation;
- (int)fileType;
- (id)folderPath;
- (long long)folderSize_recursive:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFile:(id)arg1;
- (bool)isFile;
- (bool)isFileAlias;
- (bool)isInTrash;
- (bool)isLockedInFinder;
- (bool)isSymLink;
- (bool)isXMPType;
- (id)labelNumber;
- (void)lock;
- (id)lockInFinder;
- (void)logFileAccess;
- (id)modificationDate;
- (id)name;
- (id)newFileByAppendingPathComponent:(id)arg1;
- (id)newFileIOStream;
- (id)newFileIStream;
- (id)path;
- (bool)pathExists;
- (unsigned long long)pathHash;
- (unsigned short)posixPermissions;
- (void)setLabelNumber:(id)arg1;
- (long long)size;
- (bool)tryLock;
- (void)uncacheStat;
- (void)unlock;
- (id)unlockInFinder;
- (id)url;
- (id)volume;

@end
