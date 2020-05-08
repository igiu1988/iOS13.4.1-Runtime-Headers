/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationIntent : NSObject {
    bool  _isUnifiedFieldNavigation;
    long long  _policy;
    bool  _shouldRelateToSourceTab;
    _WKActivatedElementInfo * _sourceElementInfo;
    NSUUID * _sourceTabUUID;
    NSUUID * _sourceWindowUUID;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) bool canUseExistingBlankTab;
@property (nonatomic, readonly) WBSCloudTab *cloudTab;
@property (nonatomic, readonly, copy) NSDictionary *externalOptions;
@property (nonatomic) bool isUnifiedFieldNavigation;
@property (nonatomic, readonly, copy) NSArray *navigationIntents;
@property (nonatomic, readonly) bool opensInNewTab;
@property (nonatomic, readonly) bool opensInNewWindow;
@property (nonatomic) long long policy;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic, readonly) _SFTabStateData *recentlyClosedTabStateData;
@property (nonatomic, readonly) bool shouldOrderToForeground;
@property (nonatomic) bool shouldRelateToSourceTab;
@property (nonatomic, retain) _WKActivatedElementInfo *sourceElementInfo;
@property (nonatomic, retain) NSUUID *sourceTabUUID;
@property (nonatomic, retain) NSUUID *sourceWindowUUID;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

+ (long long)defaultTabOrder;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithType:(unsigned long long)arg1 value:(id)arg2 policy:(long long)arg3;
- (id)bookmark;
- (bool)canUseExistingBlankTab;
- (id)cloudTab;
- (id)description;
- (id)externalOptions;
- (bool)isUnifiedFieldNavigation;
- (id)navigationIntents;
- (bool)opensInNewTab;
- (bool)opensInNewWindow;
- (long long)policy;
- (id)privacyPreservingDescription;
- (id)recentlyClosedTabStateData;
- (void)setIsUnifiedFieldNavigation:(bool)arg1;
- (void)setPolicy:(long long)arg1;
- (void)setShouldRelateToSourceTab:(bool)arg1;
- (void)setSourceElementInfo:(id)arg1;
- (void)setSourceTabUUID:(id)arg1;
- (void)setSourceWindowUUID:(id)arg1;
- (bool)shouldOrderToForeground;
- (bool)shouldRelateToSourceTab;
- (id)sourceElementInfo;
- (id)sourceTabUUID;
- (id)sourceWindowUUID;
- (id)text;
- (unsigned long long)type;

@end
