/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCDisplayLinkManager : NSObject {
    CADisplayLink * _displayLink;
    NSHashTable * _observers;
    <RCTimeController> * _timeController;
}

@property (nonatomic) bool paused;
@property (nonatomic, retain) <RCTimeController> *timeController;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)addDisplayLinkObserver:(id)arg1;
- (id)init;
- (bool)paused;
- (void)removeDisplayLinkObserver:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTimeController:(id)arg1;
- (id)timeController;

@end
