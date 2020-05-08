/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory> {
    <SXDocumentProviding> * _documentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createModificationContextWithLayoutOptions:(id)arg1;
- (id)documentProvider;
- (id)initWithDocumentProvider:(id)arg1;

@end
