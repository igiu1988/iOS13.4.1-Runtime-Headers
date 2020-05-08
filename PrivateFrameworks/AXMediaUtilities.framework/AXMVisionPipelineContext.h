/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding> {
    AXMVisionAnalysisOptions * _analysisOptions;
    NSNumber * _appliedImageOrientation;
    <NSCopying> * _cacheKey;
    AXMDiagnostics * _diagnostics;
    NSError * _error;
    NSMutableSet * _evaluatedFeatureTypes;
    bool  _evaluationExclusivelyUsesVisionFramework;
    NSMutableArray * _features;
    long long  _imageRegistrationState;
    AXMDiagnosticMetricToken * _processingDiagnosticToken;
    AXMVisionResult * _result;
    NSMutableArray * _resultHandlers;
    VNSceneObservation * _sceneObservation;
    NSObject<OS_dispatch_queue> * _sceneObservationQueue;
    unsigned long long  _sequenceID;
    AXMSequenceRequestManager * _sequenceRequestManager;
    bool  _shouldCallCompletionHandlersForEmptyResultSet;
    bool  _shouldCallCompletionHandlersForEngineBusyError;
    bool  _shouldProcessRemotely;
    AXMPipelineContextInput * _sourceInput;
    NSDictionary * _sourceParameters;
    bool  _sourceProvidesOwnResults;
    NSObject<NSSecureCoding> * _userContext;
    VNImageRequestHandler * _visionImageRequestHandler;
}

@property (nonatomic, retain) AXMVisionAnalysisOptions *analysisOptions;
@property (nonatomic, retain) NSNumber *appliedImageOrientation;
@property (nonatomic, retain) <NSCopying> *cacheKey;
@property (nonatomic, retain) AXMDiagnostics *diagnostics;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableSet *evaluatedFeatureTypes;
@property (nonatomic) bool evaluationExclusivelyUsesVisionFramework;
@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic) long long imageRegistrationState;
@property (nonatomic, retain) AXMVisionResult *result;
@property (nonatomic, readonly) NSArray *resultHandlers;
@property (nonatomic) unsigned long long sequenceID;
@property (nonatomic, retain) AXMSequenceRequestManager *sequenceRequestManager;
@property (nonatomic) bool shouldCallCompletionHandlersForEmptyResultSet;
@property (nonatomic) bool shouldCallCompletionHandlersForEngineBusyError;
@property (nonatomic) bool shouldProcessRemotely;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) AXMPipelineContextInput *sourceInput;
@property (nonatomic, readonly) bool sourceProvidesResults;
@property (nonatomic, retain) NSObject<NSSecureCoding> *userContext;
@property (nonatomic, retain) VNImageRequestHandler *visionImageRequestHandler;
@property (nonatomic, readonly) bool visionImageRequestHandlerIsLoaded;

+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_makeRequestHandlerForInput:(id)arg1 options:(id)arg2;
- (void)addEvaluatedFeatureType:(unsigned long long)arg1;
- (void)addResultHandler:(id /* block */)arg1;
- (void)addResultHandlers:(id)arg1;
- (id)analysisOptions;
- (void)appendFeature:(id)arg1;
- (id)appliedImageOrientation;
- (id)cacheKey;
- (void)createSceneObservationIfNilWithBlock:(id /* block */)arg1;
- (id)description;
- (id)diagnostics;
- (void)didFinishProcessingContext;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (void)errorOccurred:(id)arg1;
- (id)evaluatedFeatureTypes;
- (bool)evaluationExclusivelyUsesVisionFramework;
- (id)features;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (id)generateImageRepresentation;
- (long long)imageRegistrationState;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;
- (void)produceImage:(id /* block */)arg1;
- (id)result;
- (id)resultHandlers;
- (id)sceneObservation;
- (unsigned long long)sequenceID;
- (id)sequenceRequestManager;
- (void)setAnalysisOptions:(id)arg1;
- (void)setAppliedImageOrientation:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEvaluatedFeatureTypes:(id)arg1;
- (void)setEvaluationExclusivelyUsesVisionFramework:(bool)arg1;
- (void)setFeatures:(id)arg1;
- (void)setImageRegistrationState:(long long)arg1;
- (void)setResult:(id)arg1;
- (void)setSequenceID:(unsigned long long)arg1;
- (void)setSequenceRequestManager:(id)arg1;
- (void)setShouldCallCompletionHandlersForEmptyResultSet:(bool)arg1;
- (void)setShouldCallCompletionHandlersForEngineBusyError:(bool)arg1;
- (void)setShouldProcessRemotely:(bool)arg1;
- (void)setUserContext:(id)arg1;
- (void)setVisionImageRequestHandler:(id)arg1;
- (bool)shouldCallCompletionHandlersForEmptyResultSet;
- (bool)shouldCallCompletionHandlersForEngineBusyError;
- (bool)shouldProcessRemotely;
- (struct CGSize { double x1; double x2; })size;
- (id)sourceInput;
- (bool)sourceProvidesResults;
- (id)userContext;
- (id)visionImageRequestHandler;
- (bool)visionImageRequestHandlerIsLoaded;
- (id)visionImageRequestHandlerWithOptions:(id)arg1;
- (void)willBeginProcessingContext;

@end
