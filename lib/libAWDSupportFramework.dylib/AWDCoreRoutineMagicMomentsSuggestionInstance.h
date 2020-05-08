/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying> {
    int  _confidence;
    int  _durationSinceLastSuggestion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int confidence : 1; 
        unsigned int durationSinceLastSuggestion : 1; 
        unsigned int reposponceTime : 1; 
    }  _has;
    int  _reposponceTime;
    NSString * _suggestionId;
    NSMutableArray * _suggestions;
    unsigned long long  _timestamp;
}

@property (nonatomic) int confidence;
@property (nonatomic) int durationSinceLastSuggestion;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasDurationSinceLastSuggestion;
@property (nonatomic) bool hasReposponceTime;
@property (nonatomic, readonly) bool hasSuggestionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reposponceTime;
@property (nonatomic, retain) NSString *suggestionId;
@property (nonatomic, retain) NSMutableArray *suggestions;
@property (nonatomic) unsigned long long timestamp;

+ (Class)suggestionsType;

- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)durationSinceLastSuggestion;
- (bool)hasConfidence;
- (bool)hasDurationSinceLastSuggestion;
- (bool)hasReposponceTime;
- (bool)hasSuggestionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reposponceTime;
- (void)setConfidence:(int)arg1;
- (void)setDurationSinceLastSuggestion:(int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasDurationSinceLastSuggestion:(bool)arg1;
- (void)setHasReposponceTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReposponceTime:(int)arg1;
- (void)setSuggestionId:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestionId;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
