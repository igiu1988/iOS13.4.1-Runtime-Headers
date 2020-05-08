/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAttributeTemplate : NSObject <BSDescriptionProviding> {
    NSString * _className;
    NSDictionary * _properties;
}

@property (nonatomic, retain) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)className;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)properties;
- (void)setClassName:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
