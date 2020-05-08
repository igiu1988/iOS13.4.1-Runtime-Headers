/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFCoercionOptions : NSObject <NSCopying> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)arg1;
+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;

- (void).cxx_destruct;
- (bool)coercionPathIsDisallowed:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)itemClassPrioritizationType;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)optionsByAddingContentsOfOptions:(id)arg1;
- (id)preferredTypes;

@end
