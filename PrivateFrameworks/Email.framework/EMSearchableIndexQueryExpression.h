/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying> {
    NSString * _queryString;
}

@property (nonatomic, copy) NSString *queryString;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)expressionWithQueryString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithQueryString:(id)arg1;
- (bool)isValid;
- (id)queryString;
- (void)setQueryString:(id)arg1;

@end
