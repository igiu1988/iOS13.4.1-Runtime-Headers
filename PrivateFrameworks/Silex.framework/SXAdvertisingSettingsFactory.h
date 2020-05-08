/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdvertisingSettingsFactory : NSObject <SXAdvertisingSettingsFactory> {
    <SXAdControllerProvider> * _adControllerProvider;
    <SXDocumentProviding> * _documentProvider;
}

@property (nonatomic, readonly) <SXAdControllerProvider> *adControllerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adControllerProvider;
- (id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg1;
- (id)documentProvider;
- (id)initWithDocumentProvider:(id)arg1 adControllerProvider:(id)arg2;

@end
