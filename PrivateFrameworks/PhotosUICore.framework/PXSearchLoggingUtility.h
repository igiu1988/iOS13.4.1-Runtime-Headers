/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchLoggingUtility : NSObject {
    bool  _nextTokenSuggestionTappedInCurrentSearchSession;
    bool  _wordCompletionTappedInCurrentSearchSession;
}

@property (nonatomic) bool nextTokenSuggestionTappedInCurrentSearchSession;
@property (nonatomic) bool wordCompletionTappedInCurrentSearchSession;

- (void)logCurrentState;
- (bool)nextTokenSuggestionTappedInCurrentSearchSession;
- (void)setNextTokenSuggestionTappedInCurrentSearchSession;
- (void)setNextTokenSuggestionTappedInCurrentSearchSession:(bool)arg1;
- (void)setWordCompletionTappedInCurrentSearchSession;
- (void)setWordCompletionTappedInCurrentSearchSession:(bool)arg1;
- (bool)wordCompletionTappedInCurrentSearchSession;

@end
