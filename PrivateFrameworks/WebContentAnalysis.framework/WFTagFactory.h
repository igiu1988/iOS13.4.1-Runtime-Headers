/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFTagFactory : NSObject {
    NSMutableDictionary * sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)tagWithClass:(Class)arg1 webpage:(id)arg2;

@end
