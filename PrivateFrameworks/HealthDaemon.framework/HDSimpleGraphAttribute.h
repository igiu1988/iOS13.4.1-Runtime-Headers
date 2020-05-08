/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSimpleGraphAttribute : HDSimpleGraphObject {
    NSString * _key;
    HDSimpleGraphNode * _node;
    long long  _nodeID;
    NSString * _value;
    NSString * _valueType;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic) HDSimpleGraphNode *node;
@property (nonatomic) long long nodeID;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *valueType;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(id)arg5 nodeID:(long long)arg6 node:(id)arg7;
- (id)key;
- (id)node;
- (long long)nodeID;
- (void)setKey:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setNodeID:(long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValueType:(id)arg1;
- (id)value;
- (id)valueType;

@end