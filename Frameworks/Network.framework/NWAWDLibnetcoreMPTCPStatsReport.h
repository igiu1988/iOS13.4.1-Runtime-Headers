/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreMPTCPStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int mptcpAggregateAllBytes : 1; 
        unsigned int mptcpAggregateAttempt : 1; 
        unsigned int mptcpAggregateCellBytes : 1; 
        unsigned int mptcpBackToWiFi : 1; 
        unsigned int mptcpCellDenied : 1; 
        unsigned int mptcpCellProxy : 1; 
        unsigned int mptcpFirstPartyAggregateAttempt : 1; 
        unsigned int mptcpFirstPartyHandoverAttempt : 1; 
        unsigned int mptcpFirstPartyInteractiveAttempt : 1; 
        unsigned int mptcpHandoverAllBytes : 1; 
        unsigned int mptcpHandoverAttempts : 1; 
        unsigned int mptcpHandoverCellBytes : 1; 
        unsigned int mptcpHandoverCellSubflowFromWiFi : 1; 
        unsigned int mptcpHandoverWiFiSubflowFromCell : 1; 
        unsigned int mptcpHandshakeAggregateSuccess : 1; 
        unsigned int mptcpHandshakeAggregateSuccessFirstParty : 1; 
        unsigned int mptcpHandshakeHandoverSuccessCell : 1; 
        unsigned int mptcpHandshakeHandoverSuccessCellFirstParty : 1; 
        unsigned int mptcpHandshakeHandoverSuccessWiFi : 1; 
        unsigned int mptcpHandshakeHandoverSuccessWiFiFirstParty : 1; 
        unsigned int mptcpHandshakeInteractiveSuccess : 1; 
        unsigned int mptcpHandshakeInteractiveSuccessFirstParty : 1; 
        unsigned int mptcpHeuristicFallback : 1; 
        unsigned int mptcpHeuristicFallbackFirstParty : 1; 
        unsigned int mptcpInteractiveAllBytes : 1; 
        unsigned int mptcpInteractiveAttempt : 1; 
        unsigned int mptcpInteractiveCellBytes : 1; 
        unsigned int mptcpInteractiveCellUsage : 1; 
        unsigned int mptcpTriggeredCell : 1; 
        unsigned int mptcpWiFiProxy : 1; 
    }  _has;
    unsigned long long  _mptcpAggregateAllBytes;
    unsigned long long  _mptcpAggregateAttempt;
    unsigned long long  _mptcpAggregateCellBytes;
    unsigned long long  _mptcpBackToWiFi;
    unsigned long long  _mptcpCellDenied;
    unsigned long long  _mptcpCellProxy;
    unsigned long long  _mptcpFirstPartyAggregateAttempt;
    unsigned long long  _mptcpFirstPartyHandoverAttempt;
    unsigned long long  _mptcpFirstPartyInteractiveAttempt;
    unsigned long long  _mptcpHandoverAllBytes;
    unsigned long long  _mptcpHandoverAttempts;
    unsigned long long  _mptcpHandoverCellBytes;
    unsigned long long  _mptcpHandoverCellSubflowFromWiFi;
    unsigned long long  _mptcpHandoverWiFiSubflowFromCell;
    unsigned long long  _mptcpHandshakeAggregateSuccess;
    unsigned long long  _mptcpHandshakeAggregateSuccessFirstParty;
    unsigned long long  _mptcpHandshakeHandoverSuccessCell;
    unsigned long long  _mptcpHandshakeHandoverSuccessCellFirstParty;
    unsigned long long  _mptcpHandshakeHandoverSuccessWiFi;
    unsigned long long  _mptcpHandshakeHandoverSuccessWiFiFirstParty;
    unsigned long long  _mptcpHandshakeInteractiveSuccess;
    unsigned long long  _mptcpHandshakeInteractiveSuccessFirstParty;
    unsigned long long  _mptcpHeuristicFallback;
    unsigned long long  _mptcpHeuristicFallbackFirstParty;
    unsigned long long  _mptcpInteractiveAllBytes;
    unsigned long long  _mptcpInteractiveAttempt;
    unsigned long long  _mptcpInteractiveCellBytes;
    unsigned long long  _mptcpInteractiveCellUsage;
    unsigned long long  _mptcpTriggeredCell;
    unsigned long long  _mptcpWiFiProxy;
}

@property (nonatomic) bool hasMptcpAggregateAllBytes;
@property (nonatomic) bool hasMptcpAggregateAttempt;
@property (nonatomic) bool hasMptcpAggregateCellBytes;
@property (nonatomic) bool hasMptcpBackToWiFi;
@property (nonatomic) bool hasMptcpCellDenied;
@property (nonatomic) bool hasMptcpCellProxy;
@property (nonatomic) bool hasMptcpFirstPartyAggregateAttempt;
@property (nonatomic) bool hasMptcpFirstPartyHandoverAttempt;
@property (nonatomic) bool hasMptcpFirstPartyInteractiveAttempt;
@property (nonatomic) bool hasMptcpHandoverAllBytes;
@property (nonatomic) bool hasMptcpHandoverAttempts;
@property (nonatomic) bool hasMptcpHandoverCellBytes;
@property (nonatomic) bool hasMptcpHandoverCellSubflowFromWiFi;
@property (nonatomic) bool hasMptcpHandoverWiFiSubflowFromCell;
@property (nonatomic) bool hasMptcpHandshakeAggregateSuccess;
@property (nonatomic) bool hasMptcpHandshakeAggregateSuccessFirstParty;
@property (nonatomic) bool hasMptcpHandshakeHandoverSuccessCell;
@property (nonatomic) bool hasMptcpHandshakeHandoverSuccessCellFirstParty;
@property (nonatomic) bool hasMptcpHandshakeHandoverSuccessWiFi;
@property (nonatomic) bool hasMptcpHandshakeHandoverSuccessWiFiFirstParty;
@property (nonatomic) bool hasMptcpHandshakeInteractiveSuccess;
@property (nonatomic) bool hasMptcpHandshakeInteractiveSuccessFirstParty;
@property (nonatomic) bool hasMptcpHeuristicFallback;
@property (nonatomic) bool hasMptcpHeuristicFallbackFirstParty;
@property (nonatomic) bool hasMptcpInteractiveAllBytes;
@property (nonatomic) bool hasMptcpInteractiveAttempt;
@property (nonatomic) bool hasMptcpInteractiveCellBytes;
@property (nonatomic) bool hasMptcpInteractiveCellUsage;
@property (nonatomic) bool hasMptcpTriggeredCell;
@property (nonatomic) bool hasMptcpWiFiProxy;
@property (nonatomic) unsigned long long mptcpAggregateAllBytes;
@property (nonatomic) unsigned long long mptcpAggregateAttempt;
@property (nonatomic) unsigned long long mptcpAggregateCellBytes;
@property (nonatomic) unsigned long long mptcpBackToWiFi;
@property (nonatomic) unsigned long long mptcpCellDenied;
@property (nonatomic) unsigned long long mptcpCellProxy;
@property (nonatomic) unsigned long long mptcpFirstPartyAggregateAttempt;
@property (nonatomic) unsigned long long mptcpFirstPartyHandoverAttempt;
@property (nonatomic) unsigned long long mptcpFirstPartyInteractiveAttempt;
@property (nonatomic) unsigned long long mptcpHandoverAllBytes;
@property (nonatomic) unsigned long long mptcpHandoverAttempts;
@property (nonatomic) unsigned long long mptcpHandoverCellBytes;
@property (nonatomic) unsigned long long mptcpHandoverCellSubflowFromWiFi;
@property (nonatomic) unsigned long long mptcpHandoverWiFiSubflowFromCell;
@property (nonatomic) unsigned long long mptcpHandshakeAggregateSuccess;
@property (nonatomic) unsigned long long mptcpHandshakeAggregateSuccessFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCell;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCellFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFi;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFiFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeInteractiveSuccess;
@property (nonatomic) unsigned long long mptcpHandshakeInteractiveSuccessFirstParty;
@property (nonatomic) unsigned long long mptcpHeuristicFallback;
@property (nonatomic) unsigned long long mptcpHeuristicFallbackFirstParty;
@property (nonatomic) unsigned long long mptcpInteractiveAllBytes;
@property (nonatomic) unsigned long long mptcpInteractiveAttempt;
@property (nonatomic) unsigned long long mptcpInteractiveCellBytes;
@property (nonatomic) unsigned long long mptcpInteractiveCellUsage;
@property (nonatomic) unsigned long long mptcpTriggeredCell;
@property (nonatomic) unsigned long long mptcpWiFiProxy;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMptcpAggregateAllBytes;
- (bool)hasMptcpAggregateAttempt;
- (bool)hasMptcpAggregateCellBytes;
- (bool)hasMptcpBackToWiFi;
- (bool)hasMptcpCellDenied;
- (bool)hasMptcpCellProxy;
- (bool)hasMptcpFirstPartyAggregateAttempt;
- (bool)hasMptcpFirstPartyHandoverAttempt;
- (bool)hasMptcpFirstPartyInteractiveAttempt;
- (bool)hasMptcpHandoverAllBytes;
- (bool)hasMptcpHandoverAttempts;
- (bool)hasMptcpHandoverCellBytes;
- (bool)hasMptcpHandoverCellSubflowFromWiFi;
- (bool)hasMptcpHandoverWiFiSubflowFromCell;
- (bool)hasMptcpHandshakeAggregateSuccess;
- (bool)hasMptcpHandshakeAggregateSuccessFirstParty;
- (bool)hasMptcpHandshakeHandoverSuccessCell;
- (bool)hasMptcpHandshakeHandoverSuccessCellFirstParty;
- (bool)hasMptcpHandshakeHandoverSuccessWiFi;
- (bool)hasMptcpHandshakeHandoverSuccessWiFiFirstParty;
- (bool)hasMptcpHandshakeInteractiveSuccess;
- (bool)hasMptcpHandshakeInteractiveSuccessFirstParty;
- (bool)hasMptcpHeuristicFallback;
- (bool)hasMptcpHeuristicFallbackFirstParty;
- (bool)hasMptcpInteractiveAllBytes;
- (bool)hasMptcpInteractiveAttempt;
- (bool)hasMptcpInteractiveCellBytes;
- (bool)hasMptcpInteractiveCellUsage;
- (bool)hasMptcpTriggeredCell;
- (bool)hasMptcpWiFiProxy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)mptcpAggregateAllBytes;
- (unsigned long long)mptcpAggregateAttempt;
- (unsigned long long)mptcpAggregateCellBytes;
- (unsigned long long)mptcpBackToWiFi;
- (unsigned long long)mptcpCellDenied;
- (unsigned long long)mptcpCellProxy;
- (unsigned long long)mptcpFirstPartyAggregateAttempt;
- (unsigned long long)mptcpFirstPartyHandoverAttempt;
- (unsigned long long)mptcpFirstPartyInteractiveAttempt;
- (unsigned long long)mptcpHandoverAllBytes;
- (unsigned long long)mptcpHandoverAttempts;
- (unsigned long long)mptcpHandoverCellBytes;
- (unsigned long long)mptcpHandoverCellSubflowFromWiFi;
- (unsigned long long)mptcpHandoverWiFiSubflowFromCell;
- (unsigned long long)mptcpHandshakeAggregateSuccess;
- (unsigned long long)mptcpHandshakeAggregateSuccessFirstParty;
- (unsigned long long)mptcpHandshakeHandoverSuccessCell;
- (unsigned long long)mptcpHandshakeHandoverSuccessCellFirstParty;
- (unsigned long long)mptcpHandshakeHandoverSuccessWiFi;
- (unsigned long long)mptcpHandshakeHandoverSuccessWiFiFirstParty;
- (unsigned long long)mptcpHandshakeInteractiveSuccess;
- (unsigned long long)mptcpHandshakeInteractiveSuccessFirstParty;
- (unsigned long long)mptcpHeuristicFallback;
- (unsigned long long)mptcpHeuristicFallbackFirstParty;
- (unsigned long long)mptcpInteractiveAllBytes;
- (unsigned long long)mptcpInteractiveAttempt;
- (unsigned long long)mptcpInteractiveCellBytes;
- (unsigned long long)mptcpInteractiveCellUsage;
- (unsigned long long)mptcpTriggeredCell;
- (unsigned long long)mptcpWiFiProxy;
- (bool)readFrom:(id)arg1;
- (void)setHasMptcpAggregateAllBytes:(bool)arg1;
- (void)setHasMptcpAggregateAttempt:(bool)arg1;
- (void)setHasMptcpAggregateCellBytes:(bool)arg1;
- (void)setHasMptcpBackToWiFi:(bool)arg1;
- (void)setHasMptcpCellDenied:(bool)arg1;
- (void)setHasMptcpCellProxy:(bool)arg1;
- (void)setHasMptcpFirstPartyAggregateAttempt:(bool)arg1;
- (void)setHasMptcpFirstPartyHandoverAttempt:(bool)arg1;
- (void)setHasMptcpFirstPartyInteractiveAttempt:(bool)arg1;
- (void)setHasMptcpHandoverAllBytes:(bool)arg1;
- (void)setHasMptcpHandoverAttempts:(bool)arg1;
- (void)setHasMptcpHandoverCellBytes:(bool)arg1;
- (void)setHasMptcpHandoverCellSubflowFromWiFi:(bool)arg1;
- (void)setHasMptcpHandoverWiFiSubflowFromCell:(bool)arg1;
- (void)setHasMptcpHandshakeAggregateSuccess:(bool)arg1;
- (void)setHasMptcpHandshakeAggregateSuccessFirstParty:(bool)arg1;
- (void)setHasMptcpHandshakeHandoverSuccessCell:(bool)arg1;
- (void)setHasMptcpHandshakeHandoverSuccessCellFirstParty:(bool)arg1;
- (void)setHasMptcpHandshakeHandoverSuccessWiFi:(bool)arg1;
- (void)setHasMptcpHandshakeHandoverSuccessWiFiFirstParty:(bool)arg1;
- (void)setHasMptcpHandshakeInteractiveSuccess:(bool)arg1;
- (void)setHasMptcpHandshakeInteractiveSuccessFirstParty:(bool)arg1;
- (void)setHasMptcpHeuristicFallback:(bool)arg1;
- (void)setHasMptcpHeuristicFallbackFirstParty:(bool)arg1;
- (void)setHasMptcpInteractiveAllBytes:(bool)arg1;
- (void)setHasMptcpInteractiveAttempt:(bool)arg1;
- (void)setHasMptcpInteractiveCellBytes:(bool)arg1;
- (void)setHasMptcpInteractiveCellUsage:(bool)arg1;
- (void)setHasMptcpTriggeredCell:(bool)arg1;
- (void)setHasMptcpWiFiProxy:(bool)arg1;
- (void)setMptcpAggregateAllBytes:(unsigned long long)arg1;
- (void)setMptcpAggregateAttempt:(unsigned long long)arg1;
- (void)setMptcpAggregateCellBytes:(unsigned long long)arg1;
- (void)setMptcpBackToWiFi:(unsigned long long)arg1;
- (void)setMptcpCellDenied:(unsigned long long)arg1;
- (void)setMptcpCellProxy:(unsigned long long)arg1;
- (void)setMptcpFirstPartyAggregateAttempt:(unsigned long long)arg1;
- (void)setMptcpFirstPartyHandoverAttempt:(unsigned long long)arg1;
- (void)setMptcpFirstPartyInteractiveAttempt:(unsigned long long)arg1;
- (void)setMptcpHandoverAllBytes:(unsigned long long)arg1;
- (void)setMptcpHandoverAttempts:(unsigned long long)arg1;
- (void)setMptcpHandoverCellBytes:(unsigned long long)arg1;
- (void)setMptcpHandoverCellSubflowFromWiFi:(unsigned long long)arg1;
- (void)setMptcpHandoverWiFiSubflowFromCell:(unsigned long long)arg1;
- (void)setMptcpHandshakeAggregateSuccess:(unsigned long long)arg1;
- (void)setMptcpHandshakeAggregateSuccessFirstParty:(unsigned long long)arg1;
- (void)setMptcpHandshakeHandoverSuccessCell:(unsigned long long)arg1;
- (void)setMptcpHandshakeHandoverSuccessCellFirstParty:(unsigned long long)arg1;
- (void)setMptcpHandshakeHandoverSuccessWiFi:(unsigned long long)arg1;
- (void)setMptcpHandshakeHandoverSuccessWiFiFirstParty:(unsigned long long)arg1;
- (void)setMptcpHandshakeInteractiveSuccess:(unsigned long long)arg1;
- (void)setMptcpHandshakeInteractiveSuccessFirstParty:(unsigned long long)arg1;
- (void)setMptcpHeuristicFallback:(unsigned long long)arg1;
- (void)setMptcpHeuristicFallbackFirstParty:(unsigned long long)arg1;
- (void)setMptcpInteractiveAllBytes:(unsigned long long)arg1;
- (void)setMptcpInteractiveAttempt:(unsigned long long)arg1;
- (void)setMptcpInteractiveCellBytes:(unsigned long long)arg1;
- (void)setMptcpInteractiveCellUsage:(unsigned long long)arg1;
- (void)setMptcpTriggeredCell:(unsigned long long)arg1;
- (void)setMptcpWiFiProxy:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
