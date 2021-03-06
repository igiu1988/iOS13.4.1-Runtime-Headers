/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {
    <PGSpecBasedTitleGeneratorDelegate> * _delegate;
    NSSet * _features;
    unsigned long long  _lineBreakBehavior;
    NSSet * _moments;
    PGTitleSpecCollection * _specCollection;
    PGTitle * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property <PGSpecBasedTitleGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *features;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic, retain) NSSet *moments;
@property (nonatomic, retain) PGTitleSpecCollection *specCollection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PGTitle *title;

- (void).cxx_destruct;
- (id)_title;
- (id)_titleFromSpecs:(id)arg1;
- (id)delegate;
- (id)features;
- (id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(bool)arg4;
- (id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3;
- (id)initWithMoments:(id)arg1 meaningLabel:(id)arg2;
- (id)initWithMoments:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3;
- (unsigned long long)lineBreakBehavior;
- (id)moments;
- (void)setDelegate:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (void)setMoments:(id)arg1;
- (void)setSpecCollection:(id)arg1;
- (id)specCollection;
- (id)title;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;

@end
