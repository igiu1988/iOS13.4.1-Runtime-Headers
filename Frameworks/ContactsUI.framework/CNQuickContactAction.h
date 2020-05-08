/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate> {
    id /* block */  _completionBlock;
    CNContactAction * _contactAction;
    <CNQuickContactActionDelegate> * _delegate;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) CNContactAction *contactAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNQuickContactActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (id /* block */)completionBlock;
- (id)contactAction;
- (id)contactViewCache;
- (id)delegate;
- (id)initWithContactAction:(id)arg1;
- (void)performWithCompletionBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContactAction:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
