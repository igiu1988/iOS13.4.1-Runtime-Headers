/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICCameraFolder : ICCameraItem {
    NSMutableArray * _files;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _filesLock;
    NSMutableArray * _folders;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _foldersLock;
}

@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, retain) NSMutableArray *files;
@property (nonatomic, retain) NSMutableArray *folders;

- (void)addFile:(id)arg1;
- (void)addFolder:(id)arg1;
- (bool)containsItem:(id)arg1;
- (id)contents;
- (void)dealloc;
- (void)deleteFile:(id)arg1;
- (void)deleteFolder:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)description;
- (id)files;
- (id)folders;
- (bool)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)lockFiles;
- (void)lockFolders;
- (id)metadata;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setFiles:(id)arg1;
- (void)setFolders:(id)arg1;
- (struct CGImage { }*)thumbnail;
- (void)unlockFiles;
- (void)unlockFolders;
- (id)valueForUndefinedKey:(id)arg1;

@end