/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int tcpECNClientSetup : 1; 
        unsigned int tcpECNClientSuccess : 1; 
        unsigned int tcpECNConnNoPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossNoCE : 1; 
        unsigned int tcpECNConnRecvCE : 1; 
        unsigned int tcpECNConnRecvECE : 1; 
        unsigned int tcpECNFallbackCE : 1; 
        unsigned int tcpECNFallbackReorder : 1; 
        unsigned int tcpECNFallbackSynLoss : 1; 
        unsigned int tcpECNNotSupportedPeer : 1; 
        unsigned int tcpECNRecvCE : 1; 
        unsigned int tcpECNRecvECE : 1; 
        unsigned int tcpECNSentECE : 1; 
        unsigned int tcpECNServerSetup : 1; 
        unsigned int tcpECNServerSuccess : 1; 
        unsigned int tcpECNSynAckLost : 1; 
        unsigned int tcpECNSynLost : 1; 
        unsigned int tcpECNClientNegotiationEnabled : 1; 
        unsigned int tcpECNServerNegotiationEnabled : 1; 
    }  _has;
    bool  _tcpECNClientNegotiationEnabled;
    unsigned long long  _tcpECNClientSetup;
    unsigned long long  _tcpECNClientSuccess;
    unsigned long long  _tcpECNConnNoPacketLossCE;
    unsigned long long  _tcpECNConnPacketLossCE;
    unsigned long long  _tcpECNConnPacketLossNoCE;
    unsigned long long  _tcpECNConnRecvCE;
    unsigned long long  _tcpECNConnRecvECE;
    unsigned long long  _tcpECNFallbackCE;
    unsigned long long  _tcpECNFallbackReorder;
    unsigned long long  _tcpECNFallbackSynLoss;
    unsigned long long  _tcpECNNotSupportedPeer;
    unsigned long long  _tcpECNRecvCE;
    unsigned long long  _tcpECNRecvECE;
    unsigned long long  _tcpECNSentECE;
    bool  _tcpECNServerNegotiationEnabled;
    unsigned long long  _tcpECNServerSetup;
    unsigned long long  _tcpECNServerSuccess;
    unsigned long long  _tcpECNSynAckLost;
    unsigned long long  _tcpECNSynLost;
}

@property (nonatomic) bool hasTcpECNClientNegotiationEnabled;
@property (nonatomic) bool hasTcpECNClientSetup;
@property (nonatomic) bool hasTcpECNClientSuccess;
@property (nonatomic) bool hasTcpECNConnNoPacketLossCE;
@property (nonatomic) bool hasTcpECNConnPacketLossCE;
@property (nonatomic) bool hasTcpECNConnPacketLossNoCE;
@property (nonatomic) bool hasTcpECNConnRecvCE;
@property (nonatomic) bool hasTcpECNConnRecvECE;
@property (nonatomic) bool hasTcpECNFallbackCE;
@property (nonatomic) bool hasTcpECNFallbackReorder;
@property (nonatomic) bool hasTcpECNFallbackSynLoss;
@property (nonatomic) bool hasTcpECNNotSupportedPeer;
@property (nonatomic) bool hasTcpECNRecvCE;
@property (nonatomic) bool hasTcpECNRecvECE;
@property (nonatomic) bool hasTcpECNSentECE;
@property (nonatomic) bool hasTcpECNServerNegotiationEnabled;
@property (nonatomic) bool hasTcpECNServerSetup;
@property (nonatomic) bool hasTcpECNServerSuccess;
@property (nonatomic) bool hasTcpECNSynAckLost;
@property (nonatomic) bool hasTcpECNSynLost;
@property (nonatomic) bool tcpECNClientNegotiationEnabled;
@property (nonatomic) unsigned long long tcpECNClientSetup;
@property (nonatomic) unsigned long long tcpECNClientSuccess;
@property (nonatomic) unsigned long long tcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned long long tcpECNConnRecvCE;
@property (nonatomic) unsigned long long tcpECNConnRecvECE;
@property (nonatomic) unsigned long long tcpECNFallbackCE;
@property (nonatomic) unsigned long long tcpECNFallbackReorder;
@property (nonatomic) unsigned long long tcpECNFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNRecvCE;
@property (nonatomic) unsigned long long tcpECNRecvECE;
@property (nonatomic) unsigned long long tcpECNSentECE;
@property (nonatomic) bool tcpECNServerNegotiationEnabled;
@property (nonatomic) unsigned long long tcpECNServerSetup;
@property (nonatomic) unsigned long long tcpECNServerSuccess;
@property (nonatomic) unsigned long long tcpECNSynAckLost;
@property (nonatomic) unsigned long long tcpECNSynLost;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTcpECNClientNegotiationEnabled;
- (bool)hasTcpECNClientSetup;
- (bool)hasTcpECNClientSuccess;
- (bool)hasTcpECNConnNoPacketLossCE;
- (bool)hasTcpECNConnPacketLossCE;
- (bool)hasTcpECNConnPacketLossNoCE;
- (bool)hasTcpECNConnRecvCE;
- (bool)hasTcpECNConnRecvECE;
- (bool)hasTcpECNFallbackCE;
- (bool)hasTcpECNFallbackReorder;
- (bool)hasTcpECNFallbackSynLoss;
- (bool)hasTcpECNNotSupportedPeer;
- (bool)hasTcpECNRecvCE;
- (bool)hasTcpECNRecvECE;
- (bool)hasTcpECNSentECE;
- (bool)hasTcpECNServerNegotiationEnabled;
- (bool)hasTcpECNServerSetup;
- (bool)hasTcpECNServerSuccess;
- (bool)hasTcpECNSynAckLost;
- (bool)hasTcpECNSynLost;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTcpECNClientNegotiationEnabled:(bool)arg1;
- (void)setHasTcpECNClientSetup:(bool)arg1;
- (void)setHasTcpECNClientSuccess:(bool)arg1;
- (void)setHasTcpECNConnNoPacketLossCE:(bool)arg1;
- (void)setHasTcpECNConnPacketLossCE:(bool)arg1;
- (void)setHasTcpECNConnPacketLossNoCE:(bool)arg1;
- (void)setHasTcpECNConnRecvCE:(bool)arg1;
- (void)setHasTcpECNConnRecvECE:(bool)arg1;
- (void)setHasTcpECNFallbackCE:(bool)arg1;
- (void)setHasTcpECNFallbackReorder:(bool)arg1;
- (void)setHasTcpECNFallbackSynLoss:(bool)arg1;
- (void)setHasTcpECNNotSupportedPeer:(bool)arg1;
- (void)setHasTcpECNRecvCE:(bool)arg1;
- (void)setHasTcpECNRecvECE:(bool)arg1;
- (void)setHasTcpECNSentECE:(bool)arg1;
- (void)setHasTcpECNServerNegotiationEnabled:(bool)arg1;
- (void)setHasTcpECNServerSetup:(bool)arg1;
- (void)setHasTcpECNServerSuccess:(bool)arg1;
- (void)setHasTcpECNSynAckLost:(bool)arg1;
- (void)setHasTcpECNSynLost:(bool)arg1;
- (void)setTcpECNClientNegotiationEnabled:(bool)arg1;
- (void)setTcpECNClientSetup:(unsigned long long)arg1;
- (void)setTcpECNClientSuccess:(unsigned long long)arg1;
- (void)setTcpECNConnNoPacketLossCE:(unsigned long long)arg1;
- (void)setTcpECNConnPacketLossCE:(unsigned long long)arg1;
- (void)setTcpECNConnPacketLossNoCE:(unsigned long long)arg1;
- (void)setTcpECNConnRecvCE:(unsigned long long)arg1;
- (void)setTcpECNConnRecvECE:(unsigned long long)arg1;
- (void)setTcpECNFallbackCE:(unsigned long long)arg1;
- (void)setTcpECNFallbackReorder:(unsigned long long)arg1;
- (void)setTcpECNFallbackSynLoss:(unsigned long long)arg1;
- (void)setTcpECNNotSupportedPeer:(unsigned long long)arg1;
- (void)setTcpECNRecvCE:(unsigned long long)arg1;
- (void)setTcpECNRecvECE:(unsigned long long)arg1;
- (void)setTcpECNSentECE:(unsigned long long)arg1;
- (void)setTcpECNServerNegotiationEnabled:(bool)arg1;
- (void)setTcpECNServerSetup:(unsigned long long)arg1;
- (void)setTcpECNServerSuccess:(unsigned long long)arg1;
- (void)setTcpECNSynAckLost:(unsigned long long)arg1;
- (void)setTcpECNSynLost:(unsigned long long)arg1;
- (bool)tcpECNClientNegotiationEnabled;
- (unsigned long long)tcpECNClientSetup;
- (unsigned long long)tcpECNClientSuccess;
- (unsigned long long)tcpECNConnNoPacketLossCE;
- (unsigned long long)tcpECNConnPacketLossCE;
- (unsigned long long)tcpECNConnPacketLossNoCE;
- (unsigned long long)tcpECNConnRecvCE;
- (unsigned long long)tcpECNConnRecvECE;
- (unsigned long long)tcpECNFallbackCE;
- (unsigned long long)tcpECNFallbackReorder;
- (unsigned long long)tcpECNFallbackSynLoss;
- (unsigned long long)tcpECNNotSupportedPeer;
- (unsigned long long)tcpECNRecvCE;
- (unsigned long long)tcpECNRecvECE;
- (unsigned long long)tcpECNSentECE;
- (bool)tcpECNServerNegotiationEnabled;
- (unsigned long long)tcpECNServerSetup;
- (unsigned long long)tcpECNServerSuccess;
- (unsigned long long)tcpECNSynAckLost;
- (unsigned long long)tcpECNSynLost;
- (void)writeTo:(id)arg1;

@end
