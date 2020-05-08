/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiNWActivityBtCoex : PBCodable <NSCopying> {
    unsigned int  _a2dpdeny;
    unsigned int  _a2dpgrant;
    unsigned int  _aptxafterpm;
    unsigned int  _audiodeny;
    unsigned int  _audiogrant;
    unsigned int  _btabort;
    AWDWiFiNWActivityBtCoexReqestReason * _btrequestReason;
    unsigned int  _cts;
    unsigned int  _duration;
    unsigned int  _grant;
    struct { 
        unsigned int a2dpdeny : 1; 
        unsigned int a2dpgrant : 1; 
        unsigned int aptxafterpm : 1; 
        unsigned int audiodeny : 1; 
        unsigned int audiogrant : 1; 
        unsigned int btabort : 1; 
        unsigned int cts : 1; 
        unsigned int duration : 1; 
        unsigned int grant : 1; 
        unsigned int pm : 1; 
        unsigned int psnullretrycount : 1; 
        unsigned int request : 1; 
        unsigned int sniffdeny : 1; 
        unsigned int sniffgrant : 1; 
        unsigned int ucodehighlatency : 1; 
        unsigned int wlanrxpreempt : 1; 
        unsigned int wlantxpreempt : 1; 
    }  _has;
    unsigned int  _pm;
    unsigned int  _psnullretrycount;
    unsigned int  _request;
    unsigned int  _sniffdeny;
    unsigned int  _sniffgrant;
    unsigned int  _ucodehighlatency;
    unsigned int  _wlanrxpreempt;
    unsigned int  _wlantxpreempt;
}

@property (nonatomic) unsigned int a2dpdeny;
@property (nonatomic) unsigned int a2dpgrant;
@property (nonatomic) unsigned int aptxafterpm;
@property (nonatomic) unsigned int audiodeny;
@property (nonatomic) unsigned int audiogrant;
@property (nonatomic) unsigned int btabort;
@property (nonatomic, retain) AWDWiFiNWActivityBtCoexReqestReason *btrequestReason;
@property (nonatomic) unsigned int cts;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int grant;
@property (nonatomic) bool hasA2dpdeny;
@property (nonatomic) bool hasA2dpgrant;
@property (nonatomic) bool hasAptxafterpm;
@property (nonatomic) bool hasAudiodeny;
@property (nonatomic) bool hasAudiogrant;
@property (nonatomic) bool hasBtabort;
@property (nonatomic, readonly) bool hasBtrequestReason;
@property (nonatomic) bool hasCts;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasGrant;
@property (nonatomic) bool hasPm;
@property (nonatomic) bool hasPsnullretrycount;
@property (nonatomic) bool hasRequest;
@property (nonatomic) bool hasSniffdeny;
@property (nonatomic) bool hasSniffgrant;
@property (nonatomic) bool hasUcodehighlatency;
@property (nonatomic) bool hasWlanrxpreempt;
@property (nonatomic) bool hasWlantxpreempt;
@property (nonatomic) unsigned int pm;
@property (nonatomic) unsigned int psnullretrycount;
@property (nonatomic) unsigned int request;
@property (nonatomic) unsigned int sniffdeny;
@property (nonatomic) unsigned int sniffgrant;
@property (nonatomic) unsigned int ucodehighlatency;
@property (nonatomic) unsigned int wlanrxpreempt;
@property (nonatomic) unsigned int wlantxpreempt;

- (unsigned int)a2dpdeny;
- (unsigned int)a2dpgrant;
- (unsigned int)aptxafterpm;
- (unsigned int)audiodeny;
- (unsigned int)audiogrant;
- (unsigned int)btabort;
- (id)btrequestReason;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cts;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)grant;
- (bool)hasA2dpdeny;
- (bool)hasA2dpgrant;
- (bool)hasAptxafterpm;
- (bool)hasAudiodeny;
- (bool)hasAudiogrant;
- (bool)hasBtabort;
- (bool)hasBtrequestReason;
- (bool)hasCts;
- (bool)hasDuration;
- (bool)hasGrant;
- (bool)hasPm;
- (bool)hasPsnullretrycount;
- (bool)hasRequest;
- (bool)hasSniffdeny;
- (bool)hasSniffgrant;
- (bool)hasUcodehighlatency;
- (bool)hasWlanrxpreempt;
- (bool)hasWlantxpreempt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pm;
- (unsigned int)psnullretrycount;
- (bool)readFrom:(id)arg1;
- (unsigned int)request;
- (void)setA2dpdeny:(unsigned int)arg1;
- (void)setA2dpgrant:(unsigned int)arg1;
- (void)setAptxafterpm:(unsigned int)arg1;
- (void)setAudiodeny:(unsigned int)arg1;
- (void)setAudiogrant:(unsigned int)arg1;
- (void)setBtabort:(unsigned int)arg1;
- (void)setBtrequestReason:(id)arg1;
- (void)setCts:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setGrant:(unsigned int)arg1;
- (void)setHasA2dpdeny:(bool)arg1;
- (void)setHasA2dpgrant:(bool)arg1;
- (void)setHasAptxafterpm:(bool)arg1;
- (void)setHasAudiodeny:(bool)arg1;
- (void)setHasAudiogrant:(bool)arg1;
- (void)setHasBtabort:(bool)arg1;
- (void)setHasCts:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasGrant:(bool)arg1;
- (void)setHasPm:(bool)arg1;
- (void)setHasPsnullretrycount:(bool)arg1;
- (void)setHasRequest:(bool)arg1;
- (void)setHasSniffdeny:(bool)arg1;
- (void)setHasSniffgrant:(bool)arg1;
- (void)setHasUcodehighlatency:(bool)arg1;
- (void)setHasWlanrxpreempt:(bool)arg1;
- (void)setHasWlantxpreempt:(bool)arg1;
- (void)setPm:(unsigned int)arg1;
- (void)setPsnullretrycount:(unsigned int)arg1;
- (void)setRequest:(unsigned int)arg1;
- (void)setSniffdeny:(unsigned int)arg1;
- (void)setSniffgrant:(unsigned int)arg1;
- (void)setUcodehighlatency:(unsigned int)arg1;
- (void)setWlanrxpreempt:(unsigned int)arg1;
- (void)setWlantxpreempt:(unsigned int)arg1;
- (unsigned int)sniffdeny;
- (unsigned int)sniffgrant;
- (unsigned int)ucodehighlatency;
- (unsigned int)wlanrxpreempt;
- (unsigned int)wlantxpreempt;
- (void)writeTo:(id)arg1;

@end
