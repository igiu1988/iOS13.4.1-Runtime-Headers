/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICHTTPArchive : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _archiveDirectoryPath;
    NSMutableArray * _archiveFilePaths;
    NSDictionary * _creatorDictionary;
    NSString * _currentArchiveFileName;
    NSDateFormatter * _dateFormatter;
    NSObject<OS_dispatch_source> * _flushTimer;
    bool  _hasValidArchiveDirectory;
    NSMutableArray * _loggedEvents;
}

+ (id)sharedArchive;

- (void).cxx_destruct;
- (id)_archiveCreator;
- (id)_archiveForRequest:(id)arg1;
- (id)_archiveForResponse:(id)arg1 responseData:(id)arg2;
- (id)_arrayFromHeaderDictionary:(id)arg1;
- (void)_loadExistingArchivePaths;
- (void)_onQueueFlush;
- (void)_pruneOldArchives;
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3;
- (void)dealloc;
- (void)flush;
- (id)init;

@end