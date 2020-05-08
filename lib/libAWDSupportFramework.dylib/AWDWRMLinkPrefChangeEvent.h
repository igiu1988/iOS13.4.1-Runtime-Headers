/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkPrefChangeEvent : PBCodable <NSCopying> {
    NSString * _appType;
    unsigned int  _bcnPer;
    unsigned int  _bssLoad;
    unsigned int  _callStatus;
    bool  _captiveNetworks;
    int  _ccStatusUpdate;
    unsigned long long  _ccStatusUpdateDelay;
    unsigned int  _cca;
    int  _cellRSRP;
    int  _cellSINR;
    unsigned int  _changeDirection;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _changeReasons;
    unsigned int  _dataAppStatus;
    int  _dataLQM;
    unsigned int  _dataLinkPref;
    unsigned int  _decisionVIBE;
    unsigned int  _decisionVO;
    unsigned int  _expectedThroughputVIBE;
    unsigned int  _expectedThroughputVO;
    struct { 
        unsigned int ccStatusUpdateDelay : 1; 
        unsigned int timestamp : 1; 
        unsigned int wifiRssi : 1; 
        unsigned int wifiSNR : 1; 
        unsigned int bcnPer : 1; 
        unsigned int bssLoad : 1; 
        unsigned int callStatus : 1; 
        unsigned int ccStatusUpdate : 1; 
        unsigned int cca : 1; 
        unsigned int cellRSRP : 1; 
        unsigned int cellSINR : 1; 
        unsigned int changeDirection : 1; 
        unsigned int dataAppStatus : 1; 
        unsigned int dataLQM : 1; 
        unsigned int dataLinkPref : 1; 
        unsigned int decisionVIBE : 1; 
        unsigned int decisionVO : 1; 
        unsigned int expectedThroughputVIBE : 1; 
        unsigned int expectedThroughputVO : 1; 
        unsigned int lqmScoreWifi : 1; 
        unsigned int motionState : 1; 
        unsigned int packetLifetimeVIBE : 1; 
        unsigned int pkgLifeTimeVO : 1; 
        unsigned int pktLossRateVO : 1; 
        unsigned int qbssLoad : 1; 
        unsigned int serviceType : 1; 
        unsigned int serviceTypeOfLastGrant : 1; 
        unsigned int signalBar : 1; 
        unsigned int stationCount : 1; 
        unsigned int timeToLastDecision : 1; 
        unsigned int timeToLastReverseDecision : 1; 
        unsigned int timeToLastReverseGrant : 1; 
        unsigned int voiceLQM : 1; 
        unsigned int voiceLinkPref : 1; 
        unsigned int wifiEstimatedBandwitdh : 1; 
        unsigned int wifiRxPhyRate : 1; 
        unsigned int wifiRxRetry : 1; 
        unsigned int wifiTxPER : 1; 
        unsigned int wifiTxPhyRate : 1; 
        unsigned int captiveNetworks : 1; 
    }  _has;
    int  _lqmScoreWifi;
    int  _motionState;
    unsigned int  _packetLifetimeVIBE;
    unsigned int  _pkgLifeTimeVO;
    unsigned int  _pktLossRateVO;
    unsigned int  _qbssLoad;
    NSString * _ratType;
    unsigned int  _serviceType;
    unsigned int  _serviceTypeOfLastGrant;
    unsigned int  _signalBar;
    unsigned int  _stationCount;
    unsigned int  _timeToLastDecision;
    unsigned int  _timeToLastReverseDecision;
    unsigned int  _timeToLastReverseGrant;
    unsigned long long  _timestamp;
    unsigned int  _voiceLQM;
    unsigned int  _voiceLinkPref;
    unsigned int  _wifiEstimatedBandwitdh;
    long long  _wifiRssi;
    unsigned int  _wifiRxPhyRate;
    unsigned int  _wifiRxRetry;
    long long  _wifiSNR;
    unsigned int  _wifiTxPER;
    unsigned int  _wifiTxPhyRate;
}

@property (nonatomic, retain) NSString *appType;
@property (nonatomic) unsigned int bcnPer;
@property (nonatomic) unsigned int bssLoad;
@property (nonatomic) unsigned int callStatus;
@property (nonatomic) bool captiveNetworks;
@property (nonatomic) int ccStatusUpdate;
@property (nonatomic) unsigned long long ccStatusUpdateDelay;
@property (nonatomic) unsigned int cca;
@property (nonatomic) int cellRSRP;
@property (nonatomic) int cellSINR;
@property (nonatomic) unsigned int changeDirection;
@property (nonatomic, readonly) unsigned int*changeReasons;
@property (nonatomic, readonly) unsigned long long changeReasonsCount;
@property (nonatomic) unsigned int dataAppStatus;
@property (nonatomic) int dataLQM;
@property (nonatomic) unsigned int dataLinkPref;
@property (nonatomic) unsigned int decisionVIBE;
@property (nonatomic) unsigned int decisionVO;
@property (nonatomic) unsigned int expectedThroughputVIBE;
@property (nonatomic) unsigned int expectedThroughputVO;
@property (nonatomic, readonly) bool hasAppType;
@property (nonatomic) bool hasBcnPer;
@property (nonatomic) bool hasBssLoad;
@property (nonatomic) bool hasCallStatus;
@property (nonatomic) bool hasCaptiveNetworks;
@property (nonatomic) bool hasCcStatusUpdate;
@property (nonatomic) bool hasCcStatusUpdateDelay;
@property (nonatomic) bool hasCca;
@property (nonatomic) bool hasCellRSRP;
@property (nonatomic) bool hasCellSINR;
@property (nonatomic) bool hasChangeDirection;
@property (nonatomic) bool hasDataAppStatus;
@property (nonatomic) bool hasDataLQM;
@property (nonatomic) bool hasDataLinkPref;
@property (nonatomic) bool hasDecisionVIBE;
@property (nonatomic) bool hasDecisionVO;
@property (nonatomic) bool hasExpectedThroughputVIBE;
@property (nonatomic) bool hasExpectedThroughputVO;
@property (nonatomic) bool hasLqmScoreWifi;
@property (nonatomic) bool hasMotionState;
@property (nonatomic) bool hasPacketLifetimeVIBE;
@property (nonatomic) bool hasPkgLifeTimeVO;
@property (nonatomic) bool hasPktLossRateVO;
@property (nonatomic) bool hasQbssLoad;
@property (nonatomic, readonly) bool hasRatType;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) bool hasServiceTypeOfLastGrant;
@property (nonatomic) bool hasSignalBar;
@property (nonatomic) bool hasStationCount;
@property (nonatomic) bool hasTimeToLastDecision;
@property (nonatomic) bool hasTimeToLastReverseDecision;
@property (nonatomic) bool hasTimeToLastReverseGrant;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVoiceLQM;
@property (nonatomic) bool hasVoiceLinkPref;
@property (nonatomic) bool hasWifiEstimatedBandwitdh;
@property (nonatomic) bool hasWifiRssi;
@property (nonatomic) bool hasWifiRxPhyRate;
@property (nonatomic) bool hasWifiRxRetry;
@property (nonatomic) bool hasWifiSNR;
@property (nonatomic) bool hasWifiTxPER;
@property (nonatomic) bool hasWifiTxPhyRate;
@property (nonatomic) int lqmScoreWifi;
@property (nonatomic) int motionState;
@property (nonatomic) unsigned int packetLifetimeVIBE;
@property (nonatomic) unsigned int pkgLifeTimeVO;
@property (nonatomic) unsigned int pktLossRateVO;
@property (nonatomic) unsigned int qbssLoad;
@property (nonatomic, retain) NSString *ratType;
@property (nonatomic) unsigned int serviceType;
@property (nonatomic) unsigned int serviceTypeOfLastGrant;
@property (nonatomic) unsigned int signalBar;
@property (nonatomic) unsigned int stationCount;
@property (nonatomic) unsigned int timeToLastDecision;
@property (nonatomic) unsigned int timeToLastReverseDecision;
@property (nonatomic) unsigned int timeToLastReverseGrant;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int voiceLQM;
@property (nonatomic) unsigned int voiceLinkPref;
@property (nonatomic) unsigned int wifiEstimatedBandwitdh;
@property (nonatomic) long long wifiRssi;
@property (nonatomic) unsigned int wifiRxPhyRate;
@property (nonatomic) unsigned int wifiRxRetry;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) unsigned int wifiTxPER;
@property (nonatomic) unsigned int wifiTxPhyRate;

- (int)StringAsCcStatusUpdate:(id)arg1;
- (int)StringAsMotionState:(id)arg1;
- (void)addChangeReason:(unsigned int)arg1;
- (id)appType;
- (unsigned int)bcnPer;
- (unsigned int)bssLoad;
- (unsigned int)callStatus;
- (bool)captiveNetworks;
- (int)ccStatusUpdate;
- (id)ccStatusUpdateAsString:(int)arg1;
- (unsigned long long)ccStatusUpdateDelay;
- (unsigned int)cca;
- (int)cellRSRP;
- (int)cellSINR;
- (unsigned int)changeDirection;
- (unsigned int)changeReasonAtIndex:(unsigned long long)arg1;
- (unsigned int*)changeReasons;
- (unsigned long long)changeReasonsCount;
- (void)clearChangeReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataAppStatus;
- (int)dataLQM;
- (unsigned int)dataLinkPref;
- (void)dealloc;
- (unsigned int)decisionVIBE;
- (unsigned int)decisionVO;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expectedThroughputVIBE;
- (unsigned int)expectedThroughputVO;
- (bool)hasAppType;
- (bool)hasBcnPer;
- (bool)hasBssLoad;
- (bool)hasCallStatus;
- (bool)hasCaptiveNetworks;
- (bool)hasCcStatusUpdate;
- (bool)hasCcStatusUpdateDelay;
- (bool)hasCca;
- (bool)hasCellRSRP;
- (bool)hasCellSINR;
- (bool)hasChangeDirection;
- (bool)hasDataAppStatus;
- (bool)hasDataLQM;
- (bool)hasDataLinkPref;
- (bool)hasDecisionVIBE;
- (bool)hasDecisionVO;
- (bool)hasExpectedThroughputVIBE;
- (bool)hasExpectedThroughputVO;
- (bool)hasLqmScoreWifi;
- (bool)hasMotionState;
- (bool)hasPacketLifetimeVIBE;
- (bool)hasPkgLifeTimeVO;
- (bool)hasPktLossRateVO;
- (bool)hasQbssLoad;
- (bool)hasRatType;
- (bool)hasServiceType;
- (bool)hasServiceTypeOfLastGrant;
- (bool)hasSignalBar;
- (bool)hasStationCount;
- (bool)hasTimeToLastDecision;
- (bool)hasTimeToLastReverseDecision;
- (bool)hasTimeToLastReverseGrant;
- (bool)hasTimestamp;
- (bool)hasVoiceLQM;
- (bool)hasVoiceLinkPref;
- (bool)hasWifiEstimatedBandwitdh;
- (bool)hasWifiRssi;
- (bool)hasWifiRxPhyRate;
- (bool)hasWifiRxRetry;
- (bool)hasWifiSNR;
- (bool)hasWifiTxPER;
- (bool)hasWifiTxPhyRate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lqmScoreWifi;
- (void)mergeFrom:(id)arg1;
- (int)motionState;
- (id)motionStateAsString:(int)arg1;
- (unsigned int)packetLifetimeVIBE;
- (unsigned int)pkgLifeTimeVO;
- (unsigned int)pktLossRateVO;
- (unsigned int)qbssLoad;
- (id)ratType;
- (bool)readFrom:(id)arg1;
- (unsigned int)serviceType;
- (unsigned int)serviceTypeOfLastGrant;
- (void)setAppType:(id)arg1;
- (void)setBcnPer:(unsigned int)arg1;
- (void)setBssLoad:(unsigned int)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCaptiveNetworks:(bool)arg1;
- (void)setCcStatusUpdate:(int)arg1;
- (void)setCcStatusUpdateDelay:(unsigned long long)arg1;
- (void)setCca:(unsigned int)arg1;
- (void)setCellRSRP:(int)arg1;
- (void)setCellSINR:(int)arg1;
- (void)setChangeDirection:(unsigned int)arg1;
- (void)setChangeReasons:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDataAppStatus:(unsigned int)arg1;
- (void)setDataLQM:(int)arg1;
- (void)setDataLinkPref:(unsigned int)arg1;
- (void)setDecisionVIBE:(unsigned int)arg1;
- (void)setDecisionVO:(unsigned int)arg1;
- (void)setExpectedThroughputVIBE:(unsigned int)arg1;
- (void)setExpectedThroughputVO:(unsigned int)arg1;
- (void)setHasBcnPer:(bool)arg1;
- (void)setHasBssLoad:(bool)arg1;
- (void)setHasCallStatus:(bool)arg1;
- (void)setHasCaptiveNetworks:(bool)arg1;
- (void)setHasCcStatusUpdate:(bool)arg1;
- (void)setHasCcStatusUpdateDelay:(bool)arg1;
- (void)setHasCca:(bool)arg1;
- (void)setHasCellRSRP:(bool)arg1;
- (void)setHasCellSINR:(bool)arg1;
- (void)setHasChangeDirection:(bool)arg1;
- (void)setHasDataAppStatus:(bool)arg1;
- (void)setHasDataLQM:(bool)arg1;
- (void)setHasDataLinkPref:(bool)arg1;
- (void)setHasDecisionVIBE:(bool)arg1;
- (void)setHasDecisionVO:(bool)arg1;
- (void)setHasExpectedThroughputVIBE:(bool)arg1;
- (void)setHasExpectedThroughputVO:(bool)arg1;
- (void)setHasLqmScoreWifi:(bool)arg1;
- (void)setHasMotionState:(bool)arg1;
- (void)setHasPacketLifetimeVIBE:(bool)arg1;
- (void)setHasPkgLifeTimeVO:(bool)arg1;
- (void)setHasPktLossRateVO:(bool)arg1;
- (void)setHasQbssLoad:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHasServiceTypeOfLastGrant:(bool)arg1;
- (void)setHasSignalBar:(bool)arg1;
- (void)setHasStationCount:(bool)arg1;
- (void)setHasTimeToLastDecision:(bool)arg1;
- (void)setHasTimeToLastReverseDecision:(bool)arg1;
- (void)setHasTimeToLastReverseGrant:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVoiceLQM:(bool)arg1;
- (void)setHasVoiceLinkPref:(bool)arg1;
- (void)setHasWifiEstimatedBandwitdh:(bool)arg1;
- (void)setHasWifiRssi:(bool)arg1;
- (void)setHasWifiRxPhyRate:(bool)arg1;
- (void)setHasWifiRxRetry:(bool)arg1;
- (void)setHasWifiSNR:(bool)arg1;
- (void)setHasWifiTxPER:(bool)arg1;
- (void)setHasWifiTxPhyRate:(bool)arg1;
- (void)setLqmScoreWifi:(int)arg1;
- (void)setMotionState:(int)arg1;
- (void)setPacketLifetimeVIBE:(unsigned int)arg1;
- (void)setPkgLifeTimeVO:(unsigned int)arg1;
- (void)setPktLossRateVO:(unsigned int)arg1;
- (void)setQbssLoad:(unsigned int)arg1;
- (void)setRatType:(id)arg1;
- (void)setServiceType:(unsigned int)arg1;
- (void)setServiceTypeOfLastGrant:(unsigned int)arg1;
- (void)setSignalBar:(unsigned int)arg1;
- (void)setStationCount:(unsigned int)arg1;
- (void)setTimeToLastDecision:(unsigned int)arg1;
- (void)setTimeToLastReverseDecision:(unsigned int)arg1;
- (void)setTimeToLastReverseGrant:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVoiceLQM:(unsigned int)arg1;
- (void)setVoiceLinkPref:(unsigned int)arg1;
- (void)setWifiEstimatedBandwitdh:(unsigned int)arg1;
- (void)setWifiRssi:(long long)arg1;
- (void)setWifiRxPhyRate:(unsigned int)arg1;
- (void)setWifiRxRetry:(unsigned int)arg1;
- (void)setWifiSNR:(long long)arg1;
- (void)setWifiTxPER:(unsigned int)arg1;
- (void)setWifiTxPhyRate:(unsigned int)arg1;
- (unsigned int)signalBar;
- (unsigned int)stationCount;
- (unsigned int)timeToLastDecision;
- (unsigned int)timeToLastReverseDecision;
- (unsigned int)timeToLastReverseGrant;
- (unsigned long long)timestamp;
- (unsigned int)voiceLQM;
- (unsigned int)voiceLinkPref;
- (unsigned int)wifiEstimatedBandwitdh;
- (long long)wifiRssi;
- (unsigned int)wifiRxPhyRate;
- (unsigned int)wifiRxRetry;
- (long long)wifiSNR;
- (unsigned int)wifiTxPER;
- (unsigned int)wifiTxPhyRate;
- (void)writeTo:(id)arg1;

@end
