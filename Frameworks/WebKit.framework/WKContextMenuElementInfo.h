/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKContextMenuElementInfo : NSObject <WKObject> {
    struct ObjectStorage<API::ContextMenuElementInfo> { 
        struct type { 
            unsigned char __lx[448]; 
        } data; 
    }  _elementInfo;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *linkURL;
@property (readonly) Class superclass;

- (id)_activatedElementInfo;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)linkURL;

@end
