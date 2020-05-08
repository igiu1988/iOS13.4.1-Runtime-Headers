/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PhotosGraphTestQuestion : PHQuestion {
    NSDictionary * _additionalInfo;
    unsigned short  _displayType;
    NSString * _entityIdentifier;
    unsigned short  _entityType;
    double  _score;
    unsigned short  _state;
    unsigned short  _type;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, readonly) unsigned short displayType;
@property (nonatomic, readonly) NSString *entityIdentifier;
@property (nonatomic, readonly) unsigned short entityType;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7;
- (double)score;
- (unsigned short)state;
- (unsigned short)type;

@end
