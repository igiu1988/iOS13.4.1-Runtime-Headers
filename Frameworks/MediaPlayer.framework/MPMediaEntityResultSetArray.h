/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    NSMutableArray * _entities;
    NSObject<OS_dispatch_queue> * _entitiesQueue;
    Class  _entityClass;
    MPMediaLibrary * _library;
    MPMediaQueryCriteria * _queryCriteria;
    <MPMediaLibraryResultSet> * _resultSet;
    long long  _revision;
    MPMediaQuerySectionInfo * _sectionInfo;
}

@property (nonatomic, readonly) <MPMediaLibraryResultSet> *resultSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;
- (bool)isQueryResultSetInvalidated;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)resultSet;
- (id)sectionInfo;

@end
