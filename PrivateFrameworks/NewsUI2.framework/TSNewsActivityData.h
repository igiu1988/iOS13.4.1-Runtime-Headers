/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSNewsActivityData : NSObject {
    void activity;
    void identifier;
    void object;
}

@property (nonatomic, readonly) long long activity;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (long long)activity;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithActivity:(long long)arg1 identifier:(id)arg2;
- (id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3;
- (id)object;

@end