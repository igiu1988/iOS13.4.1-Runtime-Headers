/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPasswordAddOrRemovePasswordActivity : UIActivity {
    id /* block */  _completionHandler;
    UIWindow * _displayWindow;
    ICNote * _note;
    id /* block */  _willPerformActivityBlock;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) UIWindow *displayWindow;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, copy) id /* block */ willPerformActivityBlock;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_systemImageName;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)completionHandler;
- (id)displayWindow;
- (id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)note;
- (void)performActivity;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisplayWindow:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setWillPerformActivityBlock:(id /* block */)arg1;
- (id /* block */)willPerformActivityBlock;

@end
