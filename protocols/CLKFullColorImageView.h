/* Generated by EzioChiu.
 */

@protocol CLKFullColorImageView <CLKMonochromeComplicationView>

@required

- (void)configureWithImageProvider:(CLKFullColorImageProvider *)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(CLKDevice *)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;

@optional

+ (bool)tritium_wantsCrossfadeAnimation;

@end
