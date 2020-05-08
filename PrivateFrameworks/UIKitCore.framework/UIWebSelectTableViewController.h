/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
    bool  _allowsMultipleSelection;
    NSArray * _cachedItems;
    double  _fontSize;
    NSArray * _groupsAndOptions;
    double  _maximumTextWidth;
    UIWebSelectPopover * _popover;
    DOMHTMLSelectElement * _selectionNode;
    unsigned long long  _singleSelectionIndex;
    unsigned long long  _singleSelectionSection;
    long long  _textAlignment;
}

@property (nonatomic, retain) NSArray *_cachedItems;
@property (nonatomic, retain) NSArray *_groupsAndOptions;
@property (nonatomic) UIWebSelectPopover *_popover;
@property (nonatomic, retain) DOMHTMLSelectElement *_selectionNode;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_cachedItems;
- (id)_groupsAndOptions;
- (bool)_isEmpty;
- (id)_optionsForSection:(long long)arg1;
- (id)_popover;
- (id)_selectionNode;
- (void)_setupGroupsAndOptions;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)deleteBackward;
- (bool)hasText;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(bool)arg4;
- (void)insertText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_groupsAndOptions:(id)arg1;
- (void)set_popover:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
