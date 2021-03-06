/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *flowScripts;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)fetchScriptResponse;
+ (id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)flowScripts;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFlowScripts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape

- (id)st_CFScripts;
- (id)st_setCFScripts:(id)arg1;

@end
