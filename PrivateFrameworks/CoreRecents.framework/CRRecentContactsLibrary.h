/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRRecentContactsLibrary : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

+ (id)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6;
+ (id)apiLogDescriptionOfEvent:(id)arg1;
+ (id)defaultInstance;
+ (id)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5;
+ (id /* block */)frecencyComparator;
+ (id /* block */)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3;
+ (id /* block */)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3;
+ (id)os_log;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7;

- (int)_daemonProcessID;
- (id)_newConnection;
- (id)_recentContactsWithQuery:(id)arg1;
- (void)_recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(bool)arg5 completion:(id /* block */)arg6;
- (id)_remoteLibraryWithErrorHandler:(id /* block */)arg1;
- (void)_removeAllRecentContactsWithCompletion:(id /* block */)arg1;
- (id)_removeRecentContactsMatchingQuery:(id)arg1;
- (bool)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4;
- (id)_searchRecentsUsingQuery:(id)arg1;
- (void)_searchRecentsUsingQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)_searchRecentsUsingQuery:(id)arg1 error:(id*)arg2;
- (id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (id)copyRecentsForDomain:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)maxDateEventsPerRecentContact;
- (void)performRecentsSearch:(id)arg1 operationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 completion:(id /* block */)arg4;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(bool)arg5;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(bool)arg4;
- (bool)removeRecentContacts:(id)arg1 error:(out id*)arg2;
- (bool)removeRecentContactsWithRecentIDs:(id)arg1 recentsDomain:(id)arg2 error:(out id*)arg3;
- (void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(id /* block */)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2;
- (void)start;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

- (void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2;

@end
