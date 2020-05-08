/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2ChildSAProposal : NSObject <NSCopying> {
    NEIKEv2DHProtocol * _chosenDHProtocol;
    NEIKEv2EncryptionProtocol * _chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol * _chosenIntegrityProtocol;
    NSArray * _dhProtocols;
    NSArray * _encryptionProtocols;
    NSArray * _integrityProtocols;
    unsigned long long  _lifetimeSeconds;
    bool  _opportunisticPFS;
    unsigned char  _proposalNumber;
    unsigned long long  _protocol;
    NEIKEv2ESPSPI * _remoteSPI;
    NEIKEv2ESPSPI * _spi;
}

@property (retain) NEIKEv2DHProtocol *chosenDHProtocol;
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol;
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol;
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property (retain) NSArray *dhProtocols;
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (retain) NSArray *encryptionProtocols;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (retain) NSArray *integrityProtocols;
@property unsigned long long lifetimeSeconds;
@property bool opportunisticPFS;
@property unsigned char proposalNumber;
@property unsigned long long protocol;
@property (retain) NEIKEv2ESPSPI *remoteSPI;
@property (retain) NEIKEv2ESPSPI *spi;

- (void).cxx_destruct;
- (id)chosenDHProtocol;
- (id)chosenEncryptionProtocol;
- (id)chosenIntegrityProtocol;
- (id)copyForRekey;
- (id)copyFromRemote:(id)arg1 checkDHGroup:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dhProtocol;
- (id)dhProtocols;
- (id)encryptionProtocol;
- (id)encryptionProtocols;
- (id)init;
- (id)integrityProtocol;
- (id)integrityProtocols;
- (bool)isAValidResponse;
- (unsigned long long)lifetimeSeconds;
- (bool)matchesProposal:(id)arg1 checkDHGroup:(bool)arg2;
- (bool)opportunisticPFS;
- (unsigned char)proposalNumber;
- (unsigned long long)protocol;
- (id)remoteSPI;
- (void)setChosenDHProtocol:(id)arg1;
- (void)setChosenEncryptionProtocol:(id)arg1;
- (void)setChosenIntegrityProtocol:(id)arg1;
- (void)setDhProtocols:(id)arg1;
- (void)setEncryptionProtocols:(id)arg1;
- (void)setIntegrityProtocols:(id)arg1;
- (void)setLifetimeSeconds:(unsigned long long)arg1;
- (void)setOpportunisticPFS:(bool)arg1;
- (void)setProposalNumber:(unsigned char)arg1;
- (void)setProtocol:(unsigned long long)arg1;
- (void)setRemoteSPI:(id)arg1;
- (void)setSpi:(id)arg1;
- (id)spi;

@end
