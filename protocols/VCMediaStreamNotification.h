/* Generated by EzioChiu.
 */

@protocol VCMediaStreamNotification <NSObject>

@required

- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; struct OpaqueCMBlockBuffer {} *x4; char *x5; unsigned long long x6; unsigned int x7; unsigned char x8[1472]; }*)arg1;
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMasterKeyIndex:(VCMasterKeyIndex *)arg2;

@end
