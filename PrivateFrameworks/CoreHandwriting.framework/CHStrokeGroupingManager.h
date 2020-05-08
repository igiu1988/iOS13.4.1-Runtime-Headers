/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupingManager : NSObject {
    NSDictionary * _groupingStrategiesByIdentifier;
    bool  _isInlineContinuousMode;
    NSArray * _locales;
    CHRecognitionSessionResult * _sessionLastResult;
    <CHStrokeProvider> * _strokeProvider;
}

@property (nonatomic, readonly, retain) NSDictionary *groupingStrategiesByIdentifier;
@property (nonatomic, readonly) bool isInlineContinuousMode;
@property (nonatomic, readonly, retain) NSArray *locales;
@property (nonatomic, readonly, retain) CHRecognitionSessionResult *sessionLastResult;
@property (nonatomic, readonly, retain) <CHStrokeProvider> *strokeProvider;

- (id)_greedyCombinationOfGroupingResults:(id)arg1 stableStrokeIdentifiers:(id)arg2 withCancellationBlock:(id /* block */)arg3;
- (id)_simpleDrawingForStrokeGroup:(id)arg1 originalDrawing:(id*)arg2 orderedStrokeIDs:(id*)arg3;
- (void)dealloc;
- (id)groupingStrategiesByIdentifier;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 isInlineContinuousMode:(bool)arg4 inlineContinuousModeTargets:(id)arg5;
- (bool)isInlineContinuousMode;
- (id)locales;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (id)sessionLastResult;
- (id)strokeProvider;
- (id)strokesForIdentifiers:(id)arg1;
- (id)updatedGroupingResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 orderedStrokeIdentifiers:(id)arg3 strokeClassificationResult:(id)arg4 cancellationBlock:(id /* block */)arg5;

@end