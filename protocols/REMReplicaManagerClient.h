/* Generated by EzioChiu.
 */

@protocol REMReplicaManagerClient <REMReplicaClockProviding>

@required

- (NSString *)crdtID;
- (NSUUID *)replicaUUID;

@end