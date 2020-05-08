/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailManager : NSObject <VMClientXPCProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSArray * _accounts;
    bool  _canChangeGreeting;
    bool  _canChangePassword;
    VMVoicemailCapabilities * _capabilities;
    VMClientWrapper * _client;
    NSObject<OS_dispatch_queue> * _completionQueue;
    bool  _mailboxRequiresSetup;
    bool  _messageWaiting;
    bool  _online;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    unsigned long long  _storageUsage;
    bool  _subscribed;
    bool  _syncInProgress;
    int  _token;
    bool  _transcribing;
    bool  _transcriptionEnabled;
    NSProgress * _transcriptionProgress;
    NSMutableSet * _trashedMessages;
    NSOrderedSet * _voicemails;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, readonly) NSArray *allVoicemails;
@property (nonatomic, readonly) bool canChangeGreeting;
@property (nonatomic, readonly) bool canChangePassword;
@property (nonatomic, retain) VMVoicemailCapabilities *capabilities;
@property (nonatomic, retain) VMClientWrapper *client;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mailboxRequiresSetup;
@property (getter=isMessageWaiting, nonatomic) bool messageWaiting;
@property (getter=isOnline, nonatomic) bool online;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) <VMServerXPCProtocol> *serverConnection;
@property (nonatomic) unsigned long long storageUsage;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (readonly) Class superclass;
@property (getter=isSyncInProgress, nonatomic) bool syncInProgress;
@property (nonatomic) int token;
@property (getter=isTranscribing, nonatomic) bool transcribing;
@property (getter=isTranscriptionEnabled, nonatomic, readonly) bool transcriptionEnabled;
@property (nonatomic, readonly) NSProgress *transcriptionProgress;
@property (nonatomic, retain) NSMutableSet *trashedMessages;
@property (nonatomic, readonly) long long unreadCount;
@property (nonatomic, copy) NSOrderedSet *voicemails;

- (void).cxx_destruct;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(bool)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)accounts;
- (id)allVoicemails;
- (id)asynchronousServerConnectionWithErrorHandler:(id /* block */)arg1;
- (bool)canChangeGreeting;
- (bool)canChangePassword;
- (id)capabilities;
- (void)changePassword:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)client;
- (id)completionQueue;
- (unsigned long long)countOfVoicemailsPassingTest:(id /* block */)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)deleteVoicemail:(id)arg1;
- (id)deleteVoicemails:(id)arg1;
- (void)greetingForAccountUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithClient:(id)arg1;
- (bool)isGreetingChangeSupportedForAccountUUID:(id)arg1;
- (bool)isMessageWaiting;
- (bool)isOnline;
- (bool)isPasscodeChangeSupportedForAccountUUID:(id)arg1;
- (bool)isSubscribed;
- (bool)isSyncInProgress;
- (bool)isTranscribing;
- (bool)isTranscriptionEnabled;
- (bool)isTranscriptionEnabled;
- (bool)mailboxRequiresSetup;
- (id)markVoicemailAsRead:(id)arg1;
- (id)markVoicemailsAsRead:(id)arg1;
- (double)maximumGreetingDurationForAccountUUID:(id)arg1;
- (long long)maximumPasscodeLengthForAccountUUID:(id)arg1;
- (void)messageCountForMailboxType:(long long)arg1 completion:(id /* block */)arg2;
- (long long)messageCountForMailboxType:(long long)arg1 error:(id*)arg2;
- (void)messageCountForMailboxType:(long long)arg1 read:(bool)arg2 completion:(id /* block */)arg3;
- (long long)messageCountForMailboxType:(long long)arg1 read:(bool)arg2 error:(id*)arg3;
- (id)messagesForMailboxType:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3 error:(id*)arg4;
- (id)messagesForMailboxType:(long long)arg1 read:(bool)arg2 limit:(long long)arg3 offset:(long long)arg4 error:(id*)arg5;
- (long long)minimumPasscodeLengthForAccountUUID:(id)arg1;
- (void)obliterate;
- (void)performAtomicAccessorBlock:(id /* block */)arg1;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (id)removeVoicemailFromTrash:(id)arg1;
- (id)removeVoicemailsFromTrash:(id)arg1;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forVoicemail:(id)arg2;
- (void)requestInitialStateIfNecessaryAndSendNotifications:(bool)arg1;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)serialDispatchQueue;
- (id)serverConnection;
- (void)setAccounts:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMessageWaiting:(bool)arg1;
- (void)setOnline:(bool)arg1;
- (void)setPasscode:(id)arg1 forAccountUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSyncInProgress:(bool)arg1;
- (void)setToken:(int)arg1;
- (void)setTranscribing:(bool)arg1;
- (void)setTrashedMessages:(id)arg1;
- (void)setVoicemails:(id)arg1;
- (unsigned long long)storageUsage;
- (void)synchronize;
- (id)synchronousServerConnectionWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (id)transcriptionProgress;
- (id)trashVoicemail:(id)arg1;
- (id)trashVoicemails:(id)arg1;
- (id)trashedMessages;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (long long)unreadCount;
- (void)updateAccounts:(id)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemails;
- (id)voicemailsPassingTest:(id /* block */)arg1;
- (void)voicemailsUpdated:(id)arg1;

@end
