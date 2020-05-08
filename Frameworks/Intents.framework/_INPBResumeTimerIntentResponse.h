/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBResumeTimerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBResumeTimerIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    NSArray * _resumedTimers;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resumedTimers;
@property (nonatomic, readonly) unsigned long long resumedTimersCount;
@property (readonly) Class superclass;

+ (Class)resumedTimersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addResumedTimers:(id)arg1;
- (void)clearResumedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resumedTimers;
- (id)resumedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumedTimersCount;
- (void)setResumedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
