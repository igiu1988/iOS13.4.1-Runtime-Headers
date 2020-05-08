/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCommnatManager : NSObject {
    NSString * _cbuuid;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _commnatServer;
    id /* block */  _completionBlock;
    NSString * _deviceUniqueID;
    id /* block */  _linkBlock;
    NSMutableDictionary * _nonceToCandidates;
    NSMutableDictionary * _nonceToRequest;
}

- (void).cxx_destruct;
- (void)_getCommNATServerAddress;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 linkBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)invalidate;
- (bool)isCommnatDiscoveryDone;
- (void)processCommnatResponse:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 arrivalTime:(double)arg2;
- (void)sendCommnatRequest:(id)arg1 candidate:(id)arg2;
- (void)startCommnatDiscoveryForHostCandidates:(id)arg1;

@end
