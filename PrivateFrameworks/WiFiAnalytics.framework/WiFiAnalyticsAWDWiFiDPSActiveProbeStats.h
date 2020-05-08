/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WiFiAnalyticsAWDWiFiDPSActiveProbeStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int rttGatewayBE : 1; 
        unsigned int rttGatewayBK : 1; 
        unsigned int rttGatewayVI : 1; 
        unsigned int rttGatewayVO : 1; 
        unsigned int rttPrimaryDnsBE : 1; 
        unsigned int rttPrimaryDnsBK : 1; 
        unsigned int rttPrimaryDnsVI : 1; 
        unsigned int rttPrimaryDnsVO : 1; 
    }  _has;
    unsigned int  _rttGatewayBE;
    unsigned int  _rttGatewayBK;
    unsigned int  _rttGatewayVI;
    unsigned int  _rttGatewayVO;
    unsigned int  _rttPrimaryDnsBE;
    unsigned int  _rttPrimaryDnsBK;
    unsigned int  _rttPrimaryDnsVI;
    unsigned int  _rttPrimaryDnsVO;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRttGatewayBE;
@property (nonatomic) bool hasRttGatewayBK;
@property (nonatomic) bool hasRttGatewayVI;
@property (nonatomic) bool hasRttGatewayVO;
@property (nonatomic) bool hasRttPrimaryDnsBE;
@property (nonatomic) bool hasRttPrimaryDnsBK;
@property (nonatomic) bool hasRttPrimaryDnsVI;
@property (nonatomic) bool hasRttPrimaryDnsVO;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int rttGatewayBE;
@property (nonatomic) unsigned int rttGatewayBK;
@property (nonatomic) unsigned int rttGatewayVI;
@property (nonatomic) unsigned int rttGatewayVO;
@property (nonatomic) unsigned int rttPrimaryDnsBE;
@property (nonatomic) unsigned int rttPrimaryDnsBK;
@property (nonatomic) unsigned int rttPrimaryDnsVI;
@property (nonatomic) unsigned int rttPrimaryDnsVO;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRttGatewayBE;
- (bool)hasRttGatewayBK;
- (bool)hasRttGatewayVI;
- (bool)hasRttGatewayVO;
- (bool)hasRttPrimaryDnsBE;
- (bool)hasRttPrimaryDnsBK;
- (bool)hasRttPrimaryDnsVI;
- (bool)hasRttPrimaryDnsVO;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rttGatewayBE;
- (unsigned int)rttGatewayBK;
- (unsigned int)rttGatewayVI;
- (unsigned int)rttGatewayVO;
- (unsigned int)rttPrimaryDnsBE;
- (unsigned int)rttPrimaryDnsBK;
- (unsigned int)rttPrimaryDnsVI;
- (unsigned int)rttPrimaryDnsVO;
- (void)setHasRttGatewayBE:(bool)arg1;
- (void)setHasRttGatewayBK:(bool)arg1;
- (void)setHasRttGatewayVI:(bool)arg1;
- (void)setHasRttGatewayVO:(bool)arg1;
- (void)setHasRttPrimaryDnsBE:(bool)arg1;
- (void)setHasRttPrimaryDnsBK:(bool)arg1;
- (void)setHasRttPrimaryDnsVI:(bool)arg1;
- (void)setHasRttPrimaryDnsVO:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRttGatewayBE:(unsigned int)arg1;
- (void)setRttGatewayBK:(unsigned int)arg1;
- (void)setRttGatewayVI:(unsigned int)arg1;
- (void)setRttGatewayVO:(unsigned int)arg1;
- (void)setRttPrimaryDnsBE:(unsigned int)arg1;
- (void)setRttPrimaryDnsBK:(unsigned int)arg1;
- (void)setRttPrimaryDnsVI:(unsigned int)arg1;
- (void)setRttPrimaryDnsVO:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
