/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARProximityCollaborationData : NSObject <ARSensorData> {
    PRCollaborationData * _collaborationData;
    PRPeer * _peer;
    double  timestamp;
}

@property (nonatomic, readonly) PRCollaborationData *collaborationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRPeer *peer;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)collaborationData;
- (id)initWithPRCollaborationData:(id)arg1 peer:(id)arg2;
- (id)peer;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
