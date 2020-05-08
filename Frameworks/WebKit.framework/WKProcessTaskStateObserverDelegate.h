/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessTaskStateObserverDelegate : NSObject <BKSProcessDelegate> {
    id /* block */  _taskStateChangedCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) id /* block */ taskStateChangedCallback;

- (void)process:(id)arg1 taskStateDidChange:(long long)arg2;
- (void)setTaskStateChangedCallback:(id /* block */)arg1;
- (id /* block */)taskStateChangedCallback;

@end
