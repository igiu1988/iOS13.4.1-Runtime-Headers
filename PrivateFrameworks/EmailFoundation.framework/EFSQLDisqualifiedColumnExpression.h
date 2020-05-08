/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable, EFSQLExpressable> {
    EFSQLColumnExpression * _columnExpression;
}

@property (nonatomic, readonly) EFSQLColumnExpression *columnExpression;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedSelf;
- (id)columnExpression;
- (id)ef_SQLExpression;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
