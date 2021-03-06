/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationPhrase : NSObject {
    NSArray * _alternativeInterpretations;
    long long  _style;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *alternativeInterpretations;
@property (nonatomic) long long style;
@property (nonatomic, readonly) NSString *text;

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;
+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;

- (id)alternativeInterpretations;
- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (id)text;

@end
