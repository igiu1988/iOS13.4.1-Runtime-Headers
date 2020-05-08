/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLBitExpression : NSObject <EFSQLBitExpressable, EFSQLExpressable> {
    unsigned long long  _bitwiseOperator;
    <EFSQLExpressable> * _left;
    <EFSQLExpressable> * _right;
}

@property (nonatomic, readonly) unsigned long long bitwiseOperator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <EFSQLExpressable> *left;
@property (nonatomic, readonly) <EFSQLExpressable> *right;
@property (readonly) Class superclass;

+ (id)and:(id)arg1 with:(id)arg2;
+ (id)leftShift:(id)arg1 by:(id)arg2;
+ (id)or:(id)arg1 with:(id)arg2;
+ (id)rightShift:(id)arg1 by:(id)arg2;

- (void).cxx_destruct;
- (id)_stringForOperator:(unsigned long long)arg1;
- (unsigned long long)bitwiseOperator;
- (id)ef_SQLExpression;
- (id)initWithLeft:(id)arg1 bitwiseOperator:(unsigned long long)arg2 right:(id)arg3;
- (id)left;
- (id)right;
- (void)setColumnExpression:(id)arg1;
- (void)setLeft:(id)arg1;

@end
