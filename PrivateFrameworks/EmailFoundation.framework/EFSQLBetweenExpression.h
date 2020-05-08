/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLExpressable> {
    bool  _between;
    <EFSQLExpressable> * _left;
}

@property (nonatomic, readonly) bool between;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EFSQLExpressable> *left;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)between;
- (id)ef_SQLExpression;
- (id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(bool)arg4;
- (id)left;
- (void)setColumnExpression:(id)arg1;

@end
