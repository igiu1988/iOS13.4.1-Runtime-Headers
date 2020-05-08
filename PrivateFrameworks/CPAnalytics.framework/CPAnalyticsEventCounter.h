/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsEventCounter : NSObject {
    unsigned long long  _count;
    CPAnalyticsEventMatcher * _matcher;
    NSString * _name;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly) CPAnalyticsEventMatcher *matcher;
@property (nonatomic, readonly) NSString *name;

+ (id)_validateAndParseEventName:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)countEvent:(id)arg1;
- (id)getName;
- (id)initWithConfig:(id)arg1;
- (id)matcher;
- (id)name;
- (void)setCount:(unsigned long long)arg1;

@end
