/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVariableFramerateSelector : NSObject {
    unsigned int  _highLightModeLuxThreshold;
    float  _hysteresisRatioThreshold;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastQuaternion;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastQuaternionDiff;
    bool  _lastStabilityFlag;
    float  _llAEMaxGains;
    float  _luxFramerates;
    unsigned int  _luxThresholds;
    int  _mode;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _motionAttitudeBased;
    float  _motionThreshold;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _motionXRapidSmartScene;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _motionXSmartScene;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _motionYSmartScene;
    float  _movingCameraFrameRateCap;
    struct { 
        int reason; 
        float fromFR; 
        float toFR; 
        int lux; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
    }  _state;
    float  _suggestedAEMaxGain;
    float  _suggestedFrameRate;
    float  _underExposureStops;
}

@property (nonatomic, readonly) float suggestedAEMaxGain;
@property (nonatomic, readonly) float suggestedFrameRate;

+ (void)initialize;

- (bool)_getSceneStabilityFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_loadDefaults;
- (void)_updateMotionDataFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateSmartSceneFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateStateWithFramerate:(float)arg1 reason:(int)arg2 luxLevel:(unsigned int)arg3 currentFramerate:(float)arg4;
- (void)_updateSuggestedFrameRateFromLuxLevel:(unsigned int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5;
- (void)dealloc;
- (id)dynamicStabilityDescription;
- (id)frameRateChangeDescription;
- (id)init;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 luxLevel:(unsigned int)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5;
- (id)stabilityDecisionDescription;
- (float)suggestedAEMaxGain;
- (float)suggestedFrameRate;

@end
