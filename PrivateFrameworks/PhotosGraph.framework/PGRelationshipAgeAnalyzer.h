/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGRelationshipAgeAnalyzer : NSObject <PGRelationshipAnalyzer> {
    PGGraphRelationshipProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PGGraphRelationshipProcessor *processor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRelationshipProcessor:(id)arg1;
- (id)name;
- (id)processor;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end
