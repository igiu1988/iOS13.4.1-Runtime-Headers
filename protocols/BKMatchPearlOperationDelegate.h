/* Generated by EzioChiu.
 */

@protocol BKMatchPearlOperationDelegate <BKFaceDetectOperationDelegate, BKMatchOperationDelegate>

@optional

- (void)matchOperation:(BKMatchPearlOperation *)arg1 matchedWithResult:(BKMatchPearlResultInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 providedFeedback:(long long)arg2;

@end
