/* Generated by EzioChiu.
 */

@protocol SXContextMenuManager <NSObject>

@required

- (void)addProvider:(id <SXContextMenuProviding>)arg1;
- (<SXContextMenuManagerDelegate> *)delegate;
- (void)registerOnView:(UIView *)arg1;
- (void)setDelegate:(id <SXContextMenuManagerDelegate>)arg1;

@end