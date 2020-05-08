/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory> {
    <SXComponentSizerEngine> * _componentSizerEngine;
    <SXLayoutBlueprintFactory> * _layoutBlueprintFactory;
    <SXLayoutContextFactory> * _layoutContextFactory;
    <SXLayouterFactory> * _layouterFactory;
    <SXUnitConverterFactory> * _unitConverterFactory;
}

@property (nonatomic, readonly) <SXComponentSizerEngine> *componentSizerEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXLayoutBlueprintFactory> *layoutBlueprintFactory;
@property (nonatomic, readonly) <SXLayoutContextFactory> *layoutContextFactory;
@property (nonatomic, readonly) <SXLayouterFactory> *layouterFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;

- (void).cxx_destruct;
- (id)componentSizerEngine;
- (id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2 layouterFactory:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5;
- (id)layoutBlueprintFactory;
- (id)layoutContextFactory;
- (id)layoutOperationWithTask:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)layouterFactory;
- (id)unitConverterFactory;

@end
