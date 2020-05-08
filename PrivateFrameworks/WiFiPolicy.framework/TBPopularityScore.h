/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface TBPopularityScore : NSObject <TBScore> {
    unsigned long long  _score;
    NSString * _typeDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long score;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *typeDescription;

+ (id)popularityScoreWithValue:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)arg1;
- (unsigned long long)score;
- (void)setScore:(unsigned long long)arg1;
- (void)setTypeDescription:(id)arg1;
- (id)typeDescription;

@end
