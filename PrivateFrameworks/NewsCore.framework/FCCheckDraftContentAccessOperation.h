/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCheckDraftContentAccessOperation : FCOperation {
    NSSet * _articleIDs;
    NSArray * _channelMemberships;
    id /* block */  _checkAccessCompletion;
    <FCContentContext> * _context;
    NSSet * _issueIDs;
    NSDictionary * _resultAccessByContentID;
}

@property (nonatomic, copy) NSSet *articleIDs;
@property (nonatomic, copy) NSArray *channelMemberships;
@property (nonatomic, copy) id /* block */ checkAccessCompletion;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSSet *issueIDs;
@property (nonatomic, copy) NSDictionary *resultAccessByContentID;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)channelMemberships;
- (id /* block */)checkAccessCompletion;
- (id)context;
- (id)init;
- (id)issueIDs;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultAccessByContentID;
- (void)setArticleIDs:(id)arg1;
- (void)setChannelMemberships:(id)arg1;
- (void)setCheckAccessCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setIssueIDs:(id)arg1;
- (void)setResultAccessByContentID:(id)arg1;
- (bool)validateOperation;

@end
