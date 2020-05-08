/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetric11axLinkChangeData : PBCodable <NSCopying> {
    unsigned int  _akmSuites;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnPerHistorys;
    unsigned int  _capabilities;
    unsigned int  _channel;
    unsigned int  _channelWidth;
    unsigned int  _enhancedSecurityType;
    unsigned int  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxPerHistorys;
    unsigned int  _gatewayARPHistory;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int akmSuites : 1; 
        unsigned int capabilities : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
        unsigned int enhancedSecurityType : 1; 
        unsigned int flags : 1; 
        unsigned int gatewayARPHistory : 1; 
        unsigned int heBEParamRecord : 1; 
        unsigned int heBKParamRecord : 1; 
        unsigned int heBssMcsNss : 1; 
        unsigned int heMacCapSubfields : 1; 
        unsigned int heOpsParams : 1; 
        unsigned int hePhyCapSubfields : 1; 
        unsigned int heRxTxMcsMap : 1; 
        unsigned int heStaCnt : 1; 
        unsigned int heUtilization : 1; 
        unsigned int heVIParamRecord : 1; 
        unsigned int heVOParamRecord : 1; 
        unsigned int htASel : 1; 
        unsigned int htAmpduParams : 1; 
        unsigned int htExtended : 1; 
        unsigned int htInfo : 1; 
        unsigned int htTxBf : 1; 
        unsigned int mcastCipher : 1; 
        unsigned int phyMode : 1; 
        unsigned int reason : 1; 
        unsigned int securityType : 1; 
        unsigned int subreason : 1; 
        unsigned int ucastCipher : 1; 
        unsigned int vhtInfo : 1; 
        unsigned int wpaProtocol : 1; 
        unsigned int isInVol : 1; 
        unsigned int isLinkUp : 1; 
    }  _has;
    unsigned int  _heBEParamRecord;
    unsigned int  _heBKParamRecord;
    NSData * _heBSSLoadIE;
    unsigned int  _heBssMcsNss;
    NSData * _heCapabilitiesIE;
    unsigned int  _heMacCapSubfields;
    NSData * _heOperationIE;
    unsigned int  _heOpsParams;
    unsigned int  _hePhyCapSubfields;
    unsigned int  _heRxTxMcsMap;
    unsigned int  _heStaCnt;
    unsigned int  _heUtilization;
    unsigned int  _heVIParamRecord;
    unsigned int  _heVOParamRecord;
    unsigned int  _htASel;
    unsigned int  _htAmpduParams;
    unsigned int  _htExtended;
    unsigned int  _htInfo;
    NSData * _htSupportedMcsSet;
    unsigned int  _htTxBf;
    bool  _isInVol;
    bool  _isLinkUp;
    unsigned int  _mcastCipher;
    NSData * _muEDCAParametersIE;
    NSData * _oui;
    unsigned int  _phyMode;
    unsigned int  _reason;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rssiHistorys;
    unsigned int  _securityType;
    unsigned int  _subreason;
    unsigned long long  _timestamp;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txPerHistorys;
    unsigned int  _ucastCipher;
    unsigned int  _vhtInfo;
    NSData * _vhtSupportedMcsSet;
    unsigned int  _wpaProtocol;
}

@property (nonatomic) unsigned int akmSuites;
@property (nonatomic, readonly) int*bcnFrmsHistorys;
@property (nonatomic, readonly) unsigned long long bcnFrmsHistorysCount;
@property (nonatomic, readonly) int*bcnPerHistorys;
@property (nonatomic, readonly) unsigned long long bcnPerHistorysCount;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) unsigned int enhancedSecurityType;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) int*fwTxFrmsHistorys;
@property (nonatomic, readonly) unsigned long long fwTxFrmsHistorysCount;
@property (nonatomic, readonly) int*fwTxPerHistorys;
@property (nonatomic, readonly) unsigned long long fwTxPerHistorysCount;
@property (nonatomic) unsigned int gatewayARPHistory;
@property (nonatomic) bool hasAkmSuites;
@property (nonatomic) bool hasCapabilities;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasChannelWidth;
@property (nonatomic) bool hasEnhancedSecurityType;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasGatewayARPHistory;
@property (nonatomic) bool hasHeBEParamRecord;
@property (nonatomic) bool hasHeBKParamRecord;
@property (nonatomic, readonly) bool hasHeBSSLoadIE;
@property (nonatomic) bool hasHeBssMcsNss;
@property (nonatomic, readonly) bool hasHeCapabilitiesIE;
@property (nonatomic) bool hasHeMacCapSubfields;
@property (nonatomic, readonly) bool hasHeOperationIE;
@property (nonatomic) bool hasHeOpsParams;
@property (nonatomic) bool hasHePhyCapSubfields;
@property (nonatomic) bool hasHeRxTxMcsMap;
@property (nonatomic) bool hasHeStaCnt;
@property (nonatomic) bool hasHeUtilization;
@property (nonatomic) bool hasHeVIParamRecord;
@property (nonatomic) bool hasHeVOParamRecord;
@property (nonatomic) bool hasHtASel;
@property (nonatomic) bool hasHtAmpduParams;
@property (nonatomic) bool hasHtExtended;
@property (nonatomic) bool hasHtInfo;
@property (nonatomic, readonly) bool hasHtSupportedMcsSet;
@property (nonatomic) bool hasHtTxBf;
@property (nonatomic) bool hasIsInVol;
@property (nonatomic) bool hasIsLinkUp;
@property (nonatomic) bool hasMcastCipher;
@property (nonatomic, readonly) bool hasMuEDCAParametersIE;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasPhyMode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasSubreason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUcastCipher;
@property (nonatomic) bool hasVhtInfo;
@property (nonatomic, readonly) bool hasVhtSupportedMcsSet;
@property (nonatomic) bool hasWpaProtocol;
@property (nonatomic) unsigned int heBEParamRecord;
@property (nonatomic) unsigned int heBKParamRecord;
@property (nonatomic, retain) NSData *heBSSLoadIE;
@property (nonatomic) unsigned int heBssMcsNss;
@property (nonatomic, retain) NSData *heCapabilitiesIE;
@property (nonatomic) unsigned int heMacCapSubfields;
@property (nonatomic, retain) NSData *heOperationIE;
@property (nonatomic) unsigned int heOpsParams;
@property (nonatomic) unsigned int hePhyCapSubfields;
@property (nonatomic) unsigned int heRxTxMcsMap;
@property (nonatomic) unsigned int heStaCnt;
@property (nonatomic) unsigned int heUtilization;
@property (nonatomic) unsigned int heVIParamRecord;
@property (nonatomic) unsigned int heVOParamRecord;
@property (nonatomic) unsigned int htASel;
@property (nonatomic) unsigned int htAmpduParams;
@property (nonatomic) unsigned int htExtended;
@property (nonatomic) unsigned int htInfo;
@property (nonatomic, retain) NSData *htSupportedMcsSet;
@property (nonatomic) unsigned int htTxBf;
@property (nonatomic) bool isInVol;
@property (nonatomic) bool isLinkUp;
@property (nonatomic) unsigned int mcastCipher;
@property (nonatomic, retain) NSData *muEDCAParametersIE;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) unsigned int reason;
@property (nonatomic, readonly) int*rssiHistorys;
@property (nonatomic, readonly) unsigned long long rssiHistorysCount;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) int*txFrmsHistorys;
@property (nonatomic, readonly) unsigned long long txFrmsHistorysCount;
@property (nonatomic, readonly) int*txPerHistorys;
@property (nonatomic, readonly) unsigned long long txPerHistorysCount;
@property (nonatomic) unsigned int ucastCipher;
@property (nonatomic) unsigned int vhtInfo;
@property (nonatomic, retain) NSData *vhtSupportedMcsSet;
@property (nonatomic) unsigned int wpaProtocol;

- (void)addBcnFrmsHistory:(int)arg1;
- (void)addBcnPerHistory:(int)arg1;
- (void)addFwTxFrmsHistory:(int)arg1;
- (void)addFwTxPerHistory:(int)arg1;
- (void)addRssiHistory:(int)arg1;
- (void)addTxFrmsHistory:(int)arg1;
- (void)addTxPerHistory:(int)arg1;
- (unsigned int)akmSuites;
- (int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnFrmsHistorys;
- (unsigned long long)bcnFrmsHistorysCount;
- (int)bcnPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnPerHistorys;
- (unsigned long long)bcnPerHistorysCount;
- (unsigned int)capabilities;
- (unsigned int)channel;
- (unsigned int)channelWidth;
- (void)clearBcnFrmsHistorys;
- (void)clearBcnPerHistorys;
- (void)clearFwTxFrmsHistorys;
- (void)clearFwTxPerHistorys;
- (void)clearRssiHistorys;
- (void)clearTxFrmsHistorys;
- (void)clearTxPerHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enhancedSecurityType;
- (unsigned int)flags;
- (int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxFrmsHistorys;
- (unsigned long long)fwTxFrmsHistorysCount;
- (int)fwTxPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxPerHistorys;
- (unsigned long long)fwTxPerHistorysCount;
- (unsigned int)gatewayARPHistory;
- (bool)hasAkmSuites;
- (bool)hasCapabilities;
- (bool)hasChannel;
- (bool)hasChannelWidth;
- (bool)hasEnhancedSecurityType;
- (bool)hasFlags;
- (bool)hasGatewayARPHistory;
- (bool)hasHeBEParamRecord;
- (bool)hasHeBKParamRecord;
- (bool)hasHeBSSLoadIE;
- (bool)hasHeBssMcsNss;
- (bool)hasHeCapabilitiesIE;
- (bool)hasHeMacCapSubfields;
- (bool)hasHeOperationIE;
- (bool)hasHeOpsParams;
- (bool)hasHePhyCapSubfields;
- (bool)hasHeRxTxMcsMap;
- (bool)hasHeStaCnt;
- (bool)hasHeUtilization;
- (bool)hasHeVIParamRecord;
- (bool)hasHeVOParamRecord;
- (bool)hasHtASel;
- (bool)hasHtAmpduParams;
- (bool)hasHtExtended;
- (bool)hasHtInfo;
- (bool)hasHtSupportedMcsSet;
- (bool)hasHtTxBf;
- (bool)hasIsInVol;
- (bool)hasIsLinkUp;
- (bool)hasMcastCipher;
- (bool)hasMuEDCAParametersIE;
- (bool)hasOui;
- (bool)hasPhyMode;
- (bool)hasReason;
- (bool)hasSecurityType;
- (bool)hasSubreason;
- (bool)hasTimestamp;
- (bool)hasUcastCipher;
- (bool)hasVhtInfo;
- (bool)hasVhtSupportedMcsSet;
- (bool)hasWpaProtocol;
- (unsigned long long)hash;
- (unsigned int)heBEParamRecord;
- (unsigned int)heBKParamRecord;
- (id)heBSSLoadIE;
- (unsigned int)heBssMcsNss;
- (id)heCapabilitiesIE;
- (unsigned int)heMacCapSubfields;
- (id)heOperationIE;
- (unsigned int)heOpsParams;
- (unsigned int)hePhyCapSubfields;
- (unsigned int)heRxTxMcsMap;
- (unsigned int)heStaCnt;
- (unsigned int)heUtilization;
- (unsigned int)heVIParamRecord;
- (unsigned int)heVOParamRecord;
- (unsigned int)htASel;
- (unsigned int)htAmpduParams;
- (unsigned int)htExtended;
- (unsigned int)htInfo;
- (id)htSupportedMcsSet;
- (unsigned int)htTxBf;
- (bool)isEqual:(id)arg1;
- (bool)isInVol;
- (bool)isLinkUp;
- (unsigned int)mcastCipher;
- (void)mergeFrom:(id)arg1;
- (id)muEDCAParametersIE;
- (id)oui;
- (unsigned int)phyMode;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (int*)rssiHistorys;
- (unsigned long long)rssiHistorysCount;
- (unsigned int)securityType;
- (void)setAkmSuites:(unsigned int)arg1;
- (void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (void)setEnhancedSecurityType:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setGatewayARPHistory:(unsigned int)arg1;
- (void)setHasAkmSuites:(bool)arg1;
- (void)setHasCapabilities:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setHasEnhancedSecurityType:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasGatewayARPHistory:(bool)arg1;
- (void)setHasHeBEParamRecord:(bool)arg1;
- (void)setHasHeBKParamRecord:(bool)arg1;
- (void)setHasHeBssMcsNss:(bool)arg1;
- (void)setHasHeMacCapSubfields:(bool)arg1;
- (void)setHasHeOpsParams:(bool)arg1;
- (void)setHasHePhyCapSubfields:(bool)arg1;
- (void)setHasHeRxTxMcsMap:(bool)arg1;
- (void)setHasHeStaCnt:(bool)arg1;
- (void)setHasHeUtilization:(bool)arg1;
- (void)setHasHeVIParamRecord:(bool)arg1;
- (void)setHasHeVOParamRecord:(bool)arg1;
- (void)setHasHtASel:(bool)arg1;
- (void)setHasHtAmpduParams:(bool)arg1;
- (void)setHasHtExtended:(bool)arg1;
- (void)setHasHtInfo:(bool)arg1;
- (void)setHasHtTxBf:(bool)arg1;
- (void)setHasIsInVol:(bool)arg1;
- (void)setHasIsLinkUp:(bool)arg1;
- (void)setHasMcastCipher:(bool)arg1;
- (void)setHasPhyMode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSubreason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUcastCipher:(bool)arg1;
- (void)setHasVhtInfo:(bool)arg1;
- (void)setHasWpaProtocol:(bool)arg1;
- (void)setHeBEParamRecord:(unsigned int)arg1;
- (void)setHeBKParamRecord:(unsigned int)arg1;
- (void)setHeBSSLoadIE:(id)arg1;
- (void)setHeBssMcsNss:(unsigned int)arg1;
- (void)setHeCapabilitiesIE:(id)arg1;
- (void)setHeMacCapSubfields:(unsigned int)arg1;
- (void)setHeOperationIE:(id)arg1;
- (void)setHeOpsParams:(unsigned int)arg1;
- (void)setHePhyCapSubfields:(unsigned int)arg1;
- (void)setHeRxTxMcsMap:(unsigned int)arg1;
- (void)setHeStaCnt:(unsigned int)arg1;
- (void)setHeUtilization:(unsigned int)arg1;
- (void)setHeVIParamRecord:(unsigned int)arg1;
- (void)setHeVOParamRecord:(unsigned int)arg1;
- (void)setHtASel:(unsigned int)arg1;
- (void)setHtAmpduParams:(unsigned int)arg1;
- (void)setHtExtended:(unsigned int)arg1;
- (void)setHtInfo:(unsigned int)arg1;
- (void)setHtSupportedMcsSet:(id)arg1;
- (void)setHtTxBf:(unsigned int)arg1;
- (void)setIsInVol:(bool)arg1;
- (void)setIsLinkUp:(bool)arg1;
- (void)setMcastCipher:(unsigned int)arg1;
- (void)setMuEDCAParametersIE:(id)arg1;
- (void)setOui:(id)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUcastCipher:(unsigned int)arg1;
- (void)setVhtInfo:(unsigned int)arg1;
- (void)setVhtSupportedMcsSet:(id)arg1;
- (void)setWpaProtocol:(unsigned int)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (int)txFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)txFrmsHistorys;
- (unsigned long long)txFrmsHistorysCount;
- (int)txPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)txPerHistorys;
- (unsigned long long)txPerHistorysCount;
- (unsigned int)ucastCipher;
- (unsigned int)vhtInfo;
- (id)vhtSupportedMcsSet;
- (unsigned int)wpaProtocol;
- (void)writeTo:(id)arg1;

@end
