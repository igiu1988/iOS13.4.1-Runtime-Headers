/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeClassificationResult : NSObject <NSCopying> {
    NSSet * _nontextCandidates;
    NSDictionary * _strokeClassificationsByStrokeIdentifier;
    NSDictionary * _substrokesByStrokeIdentifier;
    NSSet * _textStrokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *nontextCandidates;
@property (nonatomic, readonly, copy) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *substrokesByStrokeIdentifier;
@property (nonatomic, readonly, copy) NSSet *textStrokeIdentifiers;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (bool)isEquivalentToStrokeClassificationResult:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nontextCandidates;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (id)textStrokeIdentifiers;

@end