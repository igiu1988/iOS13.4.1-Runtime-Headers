/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStream : VCObject <RTCPReportProvider, VCConnectionChangedHandler, VCMediaStreamProtocol, VCMediaStreamTransportDelegate, VCSecurityEventHandler> {
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    NSString * _callID;
    int  _clientPID;
    VCDatagramChannelIDS * _datagramChannel;
    double  _decryptionErrorStartTime;
    double  _decryptionTimeoutEnabledTime;
    <VCMediaStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    NSString * _idsDestination;
    bool  _isSRTPInitialized;
    double  _lastDecryptionTimeoutReportTime;
    double  _lastRTCPTimeoutReportTime;
    double  _lastRTPTimeoutReportTime;
    VCMasterKeyIndex * _lastReceivedMKI;
    unsigned int  _localSSRC;
    struct tagVCMediaQueue { } * _mediaQueue;
    <VCMomentsCollectorDelegate> * _momentsCollectorDelegate;
    VCWeakObjectHolder * _notificationDelegate;
    int (* _notificationHandler;
    int  _operatingMode;
    int (* _packetEventHandler;
    VCCallInfoBlob * _remoteEndpointInfo;
    VCWeakObjectHolder * _rtcpReportProvider;
    NSObject<OS_dispatch_source> * _rtcpSendHeartbeat;
    double  _rtcpTimeoutEnabledTime;
    double  _rtpTimeoutEnabledTime;
    int  _state;
    AVCStatisticsCollector * _statisticsCollector;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _streamLock;
    long long  _streamToken;
    NSObject<OS_dispatch_source> * _timeoutHeartbeat;
    NSMutableArray * _transportArray;
    unsigned int  _transportSessionID;
    struct _VCMediaStreamTransportSetupInfo { 
        unsigned char setupType; 
        union { 
            struct { 
                int rtpSocket; 
                int rtcpSocket; 
            } socketInfo; 
            struct { 
                struct tagIPPORT { 
                    int iFlags; 
                    BOOL szIfName[16]; 
                    union { 
                        unsigned int dwIPv4; 
                        unsigned char abIPv6[16]; 
                    } IP; 
                    unsigned short wPort; 
                } srcIPPORT; 
                struct tagIPPORT { 
                    int iFlags; 
                    BOOL szIfName[16]; 
                    union { 
                        unsigned int dwIPv4; 
                        unsigned char abIPv6[16]; 
                    } IP; 
                    unsigned short wPort; 
                } srcRTPIPPort; 
            } ipInfo; 
            struct { 
                NSObject<OS_nw_connection> *connection; 
                struct tagVCNWConnectionMonitor {} *monitor; 
                int isCallbackSet; 
            } nwInfo; 
        } ; 
        unsigned int sourceRate; 
        unsigned int datagramChannelToken; 
        bool isSessionIDValid; 
    }  _transportSetupInfo;
    bool  _useRandomTS;
    int (* _vcMediaCallback;
}

@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) VCMediaStreamConfig *defaultStreamConfig;
@property (nonatomic, readonly) VCMediaStreamTransport *defaultTransport;
@property (nonatomic) <VCMediaStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSendingMedia;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (nonatomic, readonly) double lastReceivedRTPPacketTime;
@property (nonatomic, readonly) unsigned int localSSRC;
@property (nonatomic) struct tagVCMediaQueue { }*mediaQueue;
@property (nonatomic) <VCMomentsCollectorDelegate> *momentsCollectorDelegate;
@property (nonatomic) <VCMediaStreamNotification> *notificationDelegate;
@property (nonatomic) int operatingMode;
@property (nonatomic, readonly) double rtcpHeartbeatLeeway;
@property (nonatomic) <RTCPReportProvider> *rtcpReportProvider;
@property (nonatomic, readonly) int state;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;

+ (bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;

- (id)basebandCongestionDetector;
- (void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;
- (void)checkForDecryptionTimeout;
- (void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)cleanupNWInfo:(struct { id x1; struct tagVCNWConnectionMonitor {} *x2; int x3; }*)arg1;
- (void)collectRxChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)collectRxChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5;
- (id)createTransportWithSSRC:(unsigned int)arg1;
- (void)dealloc;
- (void)decryptionStatusChanged:(bool)arg1;
- (id)defaultStreamConfig;
- (id)defaultTransport;
- (id)delegate;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (bool)handleEncryptionInfoChange:(id)arg1;
- (int)handleMediaCallbackNotification:(int)arg1 inData:(void*)arg2 outData:(void*)arg3;
- (id)init;
- (id)initWithTransportSessionID:(unsigned int)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1 localSSRC:(unsigned int)arg2;
- (bool)isDecryptionTimeoutEnabled;
- (bool)isRTCPSendEnabled;
- (bool)isRTCPTimeoutEnabled;
- (bool)isRTPTimeoutEnabled;
- (bool)isSendingMedia;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (unsigned int)localSSRC;
- (void)lock;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (id)momentsCollectorDelegate;
- (id)notificationDelegate;
- (void)onCallIDChanged;
- (bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)onPauseWithCompletionHandler:(id /* block */)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(id /* block */)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(id /* block */)arg1;
- (void)onStopWithCompletionHandler:(id /* block */)arg1;
- (int)operatingMode;
- (void)processDecryptionTimeoutSettingChange;
- (void)processRTCPTimeoutSettingChange;
- (void)processRTPTimeoutSettingChange;
- (void)resetDecryptionTimeout;
- (void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1;
- (void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1;
- (void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4;
- (double)rtcpHeartbeatLeeway;
- (id)rtcpReportProvider;
- (void)rtcpSendHeartbeat;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDecryptionTimeOutEnabled:(bool)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
- (void)setMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setMomentsCollectorDelegate:(id)arg1;
- (void)setNotificationDelegate:(id)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setPause:(bool)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpReportProvider:(id)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (void)setStreamDirection:(long long)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)setupCallbacksWithNWConnectionMonitor:(struct tagVCNWConnectionMonitor { }*)arg1;
- (void)setupMediaStream;
- (bool)setupNWConnectionWithClientID:(unsigned char)arg1;
- (id)setupRTPForIDS;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithNWConnectionID:(id)arg1 error:(id*)arg2;
- (void)setupRTPWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;
- (id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2;
- (void)start;
- (void)startRTCPSendHeartbeat;
- (void)startTimeoutHeartbeat;
- (int)state;
- (id)statisticsCollector;
- (void)stop;
- (void)stopRTCPSendHeartbeat;
- (void)stopTimeoutHeartbeat;
- (long long)streamDirection;
- (char *)streamStateToString:(int)arg1;
- (long long)streamToken;
- (id)supportedPayloads;
- (void)timeoutHeartbeat;
- (void)unlock;
- (void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2;

@end
