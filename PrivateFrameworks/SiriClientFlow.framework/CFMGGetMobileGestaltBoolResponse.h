/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMGGetMobileGestaltBoolResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) bool value;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltBoolResponse;
+ (id)getMobileGestaltBoolResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
