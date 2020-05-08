/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContext : NSObject

@property (copy) NSString *annotation;
@property bool colorMatchUntaggedContent;
@property struct CGColorSpace { }*colorSpace;
@property unsigned int commitPriority;
@property (copy) NSString *contentsFormat;
@property (readonly) unsigned int contextId;
@property float desiredDynamicRange;
@property (readonly) unsigned int displayId;
@property (retain) CALayer *layer;
@property float level;
@property (readonly) NSDictionary *options;
@property (getter=isSecure) bool secure;
@property (readonly) bool valid;

+ (id)allContexts;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;

- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2 extendedColors:(bool)arg3;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)hitTestContext:(struct CGPoint { double x1; double x2; })arg1;
- (void)invalidate;
- (void)invalidateFences;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id /* block */)arg2;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;

@end
