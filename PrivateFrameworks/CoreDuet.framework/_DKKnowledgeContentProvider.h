/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider> {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (void)setKnowledgeStore:(id)arg1;

@end
