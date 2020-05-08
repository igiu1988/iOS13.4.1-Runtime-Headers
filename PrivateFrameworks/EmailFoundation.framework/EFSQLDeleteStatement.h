/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLDeleteStatement : NSObject {
    NSString * _table;
    <EFSQLExpressable> * _whereClause;
}

@property (nonatomic, readonly, copy) NSString *queryString;
@property (nonatomic, readonly, copy) NSString *table;
@property (nonatomic, readonly) <EFSQLExpressable> *whereClause;

- (void).cxx_destruct;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 where:(id)arg2;
- (id)queryString;
- (id)table;
- (id)whereClause;

@end
