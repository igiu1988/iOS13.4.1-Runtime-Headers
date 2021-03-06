/* Generated by EzioChiu.
 */

@protocol PREResponsesProtocol

@required

- (void)preResponseItemsForMessage:(void *)arg1 maximumResponses:(void *)arg2 conversationHistory:(void *)arg3 forContext:(void *)arg4 time:(void *)arg5 language:(void *)arg6 modelFilePath:(void *)arg7 modelConfigPath:(void *)arg8 espressoBinFilePath:(void *)arg9 espressoShapeFilePath:(void *)arg10 lexiconFilePath:(void *)arg11 registerDisplayed:(void *)arg12 completion:(void *)arg13; // needs 13 arg types, found 19: NSString *, unsigned long long, NSArray *, NSString *, NSDate *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerResponse:(NSString *)arg1 position:(NSNumber *)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(NSString *)arg5 modelConfigPath:(NSString *)arg6;

@end
