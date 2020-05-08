/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFRunActionEvent : WFEvent {
    NSString * _actionIdentifier;
    NSString * _automationType;
    bool  _completed;
    NSString * _key;
    NSString * _runSource;
    int  _source;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *runSource;
@property (nonatomic) int source;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)automationType;
- (bool)completed;
- (id)key;
- (id)runSource;
- (void)setActionIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;

@end
