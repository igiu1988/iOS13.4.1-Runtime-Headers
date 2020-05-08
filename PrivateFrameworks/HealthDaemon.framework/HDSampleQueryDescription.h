/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleQueryDescription : NSObject <NSCopying> {
    id /* block */  _authorizationFilter;
    NSDictionary * _encodingOptions;
    _HKFilter * _filter;
    NSPredicate * _predicate;
    NSSet * _restrictedSourceEntities;
    NSSet * _sampleTypes;
    HDSQLitePredicate * _sqlitePredicate;
}

@property (nonatomic, readonly, copy) id /* block */ authorizationFilter;
@property (nonatomic, readonly, copy) NSDictionary *encodingOptions;
@property (nonatomic, readonly, copy) _HKFilter *filter;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSSet *restrictedSourceEntities;
@property (nonatomic, readonly, copy) NSSet *sampleTypes;
@property (nonatomic, readonly, copy) HDSQLitePredicate *sqlitePredicate;

+ (id)sampleQueryDescriptionWithSampleType:(id)arg1;
+ (id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)sampleQueryDescriptionWithSampleTypes:(id)arg1 predicate:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)authorizationFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodingOptions;
- (id)filter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 encodingOptions:(id)arg3 restrictedSourceEntities:(id)arg4 authorizationFilter:(id /* block */)arg5 filter:(id)arg6 sqlitePredicate:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)restrictedSourceEntities;
- (id)sampleTypes;
- (id)sqlitePredicate;

@end
