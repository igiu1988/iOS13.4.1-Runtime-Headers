/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _world;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) /* Warning: unhandled struct encoding: '{InjectedBundleScriptWorld=^^?@{Ref<WebCore::DOMWrapperWorld' */ struct *_scriptWorld; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)world;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct InjectedBundleScriptWorld { int (**x1)(); id x2; struct Ref<WebCore::DOMWrapperWorld, WTF::DumbPtrTraits<WebCore::DOMWrapperWorld> > { struct DOMWrapperWorld {} *x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; }*)_scriptWorld;
- (void)clearWrappers;
- (void)dealloc;
- (void)disableOverrideBuiltinsBehavior;
- (void)makeAllShadowRootsOpen;
- (id)name;

@end
