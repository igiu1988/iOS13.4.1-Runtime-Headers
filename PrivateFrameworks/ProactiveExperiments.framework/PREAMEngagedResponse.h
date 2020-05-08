/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREAMEngagedResponse : PBCodable <NSCopying> {
    int  _ageGroup;
    NSString * _experimentId;
    int  _generationStatus;
    struct { 
        unsigned int ageGroup : 1; 
        unsigned int generationStatus : 1; 
        unsigned int inputMethod : 1; 
        unsigned int modelId : 1; 
        unsigned int numberOfCustomResponses : 1; 
        unsigned int numberOfResponsesGenerated : 1; 
        unsigned int position : 1; 
        unsigned int replyTextId : 1; 
        unsigned int responseClassId : 1; 
        unsigned int hasQuestionMark : 1; 
        unsigned int isApricotDevice : 1; 
        unsigned int isCustomResponse : 1; 
    }  _has;
    bool  _hasQuestionMark;
    NSString * _hostProcess;
    int  _inputMethod;
    bool  _isApricotDevice;
    bool  _isCustomResponse;
    NSString * _lang;
    NSString * _locale;
    unsigned int  _modelId;
    unsigned int  _numberOfCustomResponses;
    unsigned int  _numberOfResponsesGenerated;
    unsigned int  _position;
    unsigned int  _replyTextId;
    unsigned int  _responseClassId;
    NSString * _treatmentId;
    NSString * _treatmentModelName;
}

@property (nonatomic) int ageGroup;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) int generationStatus;
@property (nonatomic) bool hasAgeGroup;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic) bool hasGenerationStatus;
@property (nonatomic) bool hasHasQuestionMark;
@property (nonatomic, readonly) bool hasHostProcess;
@property (nonatomic) bool hasInputMethod;
@property (nonatomic) bool hasIsApricotDevice;
@property (nonatomic) bool hasIsCustomResponse;
@property (nonatomic, readonly) bool hasLang;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasModelId;
@property (nonatomic) bool hasNumberOfCustomResponses;
@property (nonatomic) bool hasNumberOfResponsesGenerated;
@property (nonatomic) bool hasPosition;
@property (nonatomic) bool hasQuestionMark;
@property (nonatomic) bool hasReplyTextId;
@property (nonatomic) bool hasResponseClassId;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, readonly) bool hasTreatmentModelName;
@property (nonatomic, retain) NSString *hostProcess;
@property (nonatomic) int inputMethod;
@property (nonatomic) bool isApricotDevice;
@property (nonatomic) bool isCustomResponse;
@property (nonatomic, retain) NSString *lang;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) unsigned int numberOfCustomResponses;
@property (nonatomic) unsigned int numberOfResponsesGenerated;
@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *treatmentModelName;

- (void).cxx_destruct;
- (int)StringAsAgeGroup:(id)arg1;
- (int)StringAsGenerationStatus:(id)arg1;
- (int)StringAsInputMethod:(id)arg1;
- (int)ageGroup;
- (id)ageGroupAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (int)generationStatus;
- (id)generationStatusAsString:(int)arg1;
- (bool)hasAgeGroup;
- (bool)hasExperimentId;
- (bool)hasGenerationStatus;
- (bool)hasHasQuestionMark;
- (bool)hasHostProcess;
- (bool)hasInputMethod;
- (bool)hasIsApricotDevice;
- (bool)hasIsCustomResponse;
- (bool)hasLang;
- (bool)hasLocale;
- (bool)hasModelId;
- (bool)hasNumberOfCustomResponses;
- (bool)hasNumberOfResponsesGenerated;
- (bool)hasPosition;
- (bool)hasQuestionMark;
- (bool)hasReplyTextId;
- (bool)hasResponseClassId;
- (bool)hasTreatmentId;
- (bool)hasTreatmentModelName;
- (unsigned long long)hash;
- (id)hostProcess;
- (int)inputMethod;
- (id)inputMethodAsString:(int)arg1;
- (bool)isApricotDevice;
- (bool)isCustomResponse;
- (bool)isEqual:(id)arg1;
- (id)lang;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelId;
- (unsigned int)numberOfCustomResponses;
- (unsigned int)numberOfResponsesGenerated;
- (unsigned int)position;
- (bool)readFrom:(id)arg1;
- (unsigned int)replyTextId;
- (unsigned int)responseClassId;
- (void)setAgeGroup:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setGenerationStatus:(int)arg1;
- (void)setHasAgeGroup:(bool)arg1;
- (void)setHasGenerationStatus:(bool)arg1;
- (void)setHasHasQuestionMark:(bool)arg1;
- (void)setHasInputMethod:(bool)arg1;
- (void)setHasIsApricotDevice:(bool)arg1;
- (void)setHasIsCustomResponse:(bool)arg1;
- (void)setHasModelId:(bool)arg1;
- (void)setHasNumberOfCustomResponses:(bool)arg1;
- (void)setHasNumberOfResponsesGenerated:(bool)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasQuestionMark:(bool)arg1;
- (void)setHasReplyTextId:(bool)arg1;
- (void)setHasResponseClassId:(bool)arg1;
- (void)setHostProcess:(id)arg1;
- (void)setInputMethod:(int)arg1;
- (void)setIsApricotDevice:(bool)arg1;
- (void)setIsCustomResponse:(bool)arg1;
- (void)setLang:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelId:(unsigned int)arg1;
- (void)setNumberOfCustomResponses:(unsigned int)arg1;
- (void)setNumberOfResponsesGenerated:(unsigned int)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setReplyTextId:(unsigned int)arg1;
- (void)setResponseClassId:(unsigned int)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTreatmentModelName:(id)arg1;
- (id)treatmentId;
- (id)treatmentModelName;
- (void)writeTo:(id)arg1;

@end
