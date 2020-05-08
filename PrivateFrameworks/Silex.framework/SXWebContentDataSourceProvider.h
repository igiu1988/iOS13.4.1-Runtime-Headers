/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXResourceDataSource> * _resourceDataSource;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)dataSourcesForReferences:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2;
- (id)resourceDataSource;

@end
