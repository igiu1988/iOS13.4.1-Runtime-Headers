/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGNamingGenderAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphNamingProcessor *processor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)genderMatchBetweenPersonGender:(unsigned long long)arg1 andContactGender:(unsigned long long)arg2;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (id)processor;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end