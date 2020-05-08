/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes {
    double  _acceleratedRelativePositionX;
    double  _acceleratedRelativePositionY;
    long long  _activeModifiers;
    long long  _fingerDownCount;
    NSArray * _hitTestContexts;
    unsigned short  _pointerState;
    double  _unacceleratedRelativePositionX;
    double  _unacceleratedRelativePositionY;
}

@property (nonatomic) double acceleratedRelativePositionX;
@property (nonatomic) double acceleratedRelativePositionY;
@property (nonatomic) long long activeModifiers;
@property (nonatomic) long long fingerDownCount;
@property (nonatomic, copy) NSArray *hitTestContexts;
@property (nonatomic) unsigned short pointerState;
@property (nonatomic) double unacceleratedRelativePositionX;
@property (nonatomic) double unacceleratedRelativePositionY;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (double)acceleratedRelativePositionX;
- (double)acceleratedRelativePositionY;
- (long long)activeModifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)fingerDownCount;
- (id)hitTestContexts;
- (bool)isEqual:(id)arg1;
- (unsigned short)pointerState;
- (void)setAcceleratedRelativePositionX:(double)arg1;
- (void)setAcceleratedRelativePositionY:(double)arg1;
- (void)setActiveModifiers:(long long)arg1;
- (void)setFingerDownCount:(long long)arg1;
- (void)setHitTestContexts:(id)arg1;
- (void)setPointerState:(unsigned short)arg1;
- (void)setUnacceleratedRelativePositionX:(double)arg1;
- (void)setUnacceleratedRelativePositionY:(double)arg1;
- (double)unacceleratedRelativePositionX;
- (double)unacceleratedRelativePositionY;

@end
