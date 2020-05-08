/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextMagnifierCommonRenderer : UIView {
    bool  _isRegisteredForGeometryChanges;
    CALayer * m_back;
    CALayer * m_content;
    CALayer * m_front;
    NSDictionary * m_images;
    bool  m_loaded;
    CALayer * m_mask;
    NSDictionary * m_offsets;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)backgroundColourIfNecessary;
- (void)didMoveToSuperview;
- (void)loadImages;
- (id)magnifier;
- (void)performOperations:(id /* block */)arg1;
- (void)update;
- (id)visualsForMagnifier;

@end
