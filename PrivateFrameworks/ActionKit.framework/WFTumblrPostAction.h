/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource> {
    WFAppInstalledResource * _appInstalledResource;
    TMAPIClient * _client;
}

@property (nonatomic, retain) WFAppInstalledResource *appInstalledResource;
@property (nonatomic, readonly) TMAPIClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appInstalledResource;
- (id)client;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)initializeParameters;
- (id)inputContentClasses;
- (bool)inputsMultipleItems;
- (void)openFiles:(id)arg1;
- (void)openPostWithType:(id)arg1 withParameters:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setAppInstalledResource:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateTagsParameterHidden;

@end
