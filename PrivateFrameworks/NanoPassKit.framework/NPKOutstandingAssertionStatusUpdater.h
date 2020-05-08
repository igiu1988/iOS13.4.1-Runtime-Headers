/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKOutstandingAssertionStatusUpdater : NPKProvisioningServiceAgentStatusUpdater {
    int  _assertType;
    NSUUID * _assertionUUID;
}

@property (nonatomic) int assertType;
@property (nonatomic, retain) NSUUID *assertionUUID;

- (void).cxx_destruct;
- (int)assertType;
- (id)assertionUUID;
- (void)setAssertType:(int)arg1;
- (void)setAssertionUUID:(id)arg1;

@end
