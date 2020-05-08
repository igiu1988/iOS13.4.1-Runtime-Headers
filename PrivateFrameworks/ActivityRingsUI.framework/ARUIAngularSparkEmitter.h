/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUIAngularSparkEmitter : NSObject {
    float  _angularVelocity;
    float  _firstWindowFinalBirthTime;
    float  _firstWindowFinalDeathTime;
    float  _midScalePoint;
    long long  _particleCount;
    float  _particleLength;
    float  _rotationDuration;
    float  _secondWindowFinalBirthTime;
    float  _secondWindowFinalDeathTime;
    float  _spawnRate;
    void _startPosition;
    void _thickness;
    void _velocityNoise;
}

- (id)generateSparks;
- (id)initWithParticleCount:(unsigned long long)arg1 rotationDuration:(float)arg2 particleLength:(float)arg3;
- (id)updateForTime:(float)arg1;
- (id)updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;

@end