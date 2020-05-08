/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMClientState : NSObject <EFLoggable> {
    EMRemoteConnection * _connection;
    EFObservable<EFObserver> * _foregroundObservable;
    bool  _isForeground;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EFObservable<EFObserver> *foregroundObservable;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForeground;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_handleApplicationDidEnterBackground;
- (void)_handleApplicationWillEnterForeground;
- (void)_updateRemoteInterface;
- (id)connection;
- (id)daemonBoosterWithDescription:(id)arg1;
- (id)foregroundObservable;
- (id)initWithRemoteConnection:(id)arg1;
- (bool)isForeground;
- (void)setConnection:(id)arg1;
- (void)setCurrentlyVisibleMailboxes:(id)arg1;
- (void)setForegroundObservable:(id)arg1;
- (void)setIsForeground:(bool)arg1;

@end
