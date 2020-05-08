/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceStateCachedLocation : NSObject {
    NSString * _generatedLocationString;
    bool  _originalHasNewTimeProposed;
    NSString * _originalOccurrenceLocation;
    bool  _originalOccurrenceLocationIsPrediction;
    NSString * _originalOccurrenceLocationWithoutPrediction;
}

@property (nonatomic, readonly) NSString *generatedLocationString;
@property (nonatomic, readonly) bool originalHasNewTimeProposed;
@property (nonatomic, readonly) NSString *originalOccurrenceLocation;
@property (nonatomic, readonly) bool originalOccurrenceLocationIsPrediction;
@property (nonatomic, readonly) NSString *originalOccurrenceLocationWithoutPrediction;

- (void).cxx_destruct;
- (id)generatedLocationString;
- (id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(bool)arg4 originalHasNewTimeProposed:(bool)arg5;
- (bool)originalHasNewTimeProposed;
- (id)originalOccurrenceLocation;
- (bool)originalOccurrenceLocationIsPrediction;
- (id)originalOccurrenceLocationWithoutPrediction;

@end
