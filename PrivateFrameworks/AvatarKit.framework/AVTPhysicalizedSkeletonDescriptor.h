/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPhysicalizedSkeletonDescriptor : NSObject {
    SCNNode * _drivingNode;
    void _forwardBackRotation;
    void _leftRightRotation;
    SCNNode * _referenceNode;
    SCNNode * _rootJoint;
    float  _simulationFactor;
    void _upDownRotation;
}

@property (nonatomic, retain) SCNNode *drivingNode;
@property (nonatomic) void forwardBackRotation;
@property (nonatomic) void leftRightRotation;
@property (nonatomic, retain) SCNNode *referenceNode;
@property (nonatomic, retain) SCNNode *rootJoint;
@property (nonatomic) float simulationFactor;
@property (nonatomic) void upDownRotation;

- (void).cxx_destruct;
- (id)drivingNode;
- (void)forwardBackRotation;
- (void)leftRightRotation;
- (id)referenceNode;
- (id)rootJoint;
- (void)setDrivingNode:(id)arg1;
- (void)setForwardBackRotation;
- (void)setLeftRightRotation;
- (void)setReferenceNode:(id)arg1;
- (void)setRootJoint:(id)arg1;
- (void)setSimulationFactor:(float)arg1;
- (void)setUpDownRotation;
- (float)simulationFactor;
- (void)upDownRotation;

@end
