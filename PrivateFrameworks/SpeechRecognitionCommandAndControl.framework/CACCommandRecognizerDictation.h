/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACCommandRecognizerDictation : CACCommandRecognizer {
    NSString * _currentLocaleIdentifier;
    CACProfanityNode * _rootProfanityNode;
    bool  _suppressProfanity;
}

+ (void)adjustCapsAndSpacingInRecognizedMutableAttributedString:(id)arg1 leadingText:(id)arg2;

- (void).cxx_destruct;
- (struct __RXLanguageObject { }*)_adLibLanguageObjectFromLanguageModel:(struct __RXLanguageObject { }*)arg1;
- (id)_attributedStringFromResult:(struct __RXLanguageObject { }*)arg1;
- (void)_didBeginUtteranceWithID:(unsigned long long)arg1;
- (void)dictationConnectionDidRecognizeAttributedString:(id)arg1 isHypothesis:(bool)arg2 utteranceID:(unsigned long long)arg3;
- (void)handleDictation:(id)arg1;
- (void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeRXResult:(struct __RXLanguageObject { }*)arg2;

@end
