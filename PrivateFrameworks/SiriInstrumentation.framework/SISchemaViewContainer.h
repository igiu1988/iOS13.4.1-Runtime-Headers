/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaViewContainer : PBCodable {
    NSString * _dialogIdentifier;
    NSString * _dialogPhase;
    NSString * _snippetClass;
    NSString * _viewID;
}

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *snippetClass;
@property (nonatomic, copy) NSString *viewID;

- (void).cxx_destruct;
- (id)dialogIdentifier;
- (id)dialogPhase;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setSnippetClass:(id)arg1;
- (void)setViewID:(id)arg1;
- (id)snippetClass;
- (id)viewID;
- (void)writeTo:(id)arg1;

@end