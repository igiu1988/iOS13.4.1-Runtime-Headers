/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBRotationLockHUDViewController : SBHUDViewController {
    bool  _locked;
}

@property (getter=isLocked, nonatomic) bool locked;

- (void)_updateLockedImage;
- (id)init;
- (bool)isLocked;
- (void)setLocked:(bool)arg1;

@end