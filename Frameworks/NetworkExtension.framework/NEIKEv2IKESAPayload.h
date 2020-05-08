/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2IKESAPayload : NEIKEv2Payload {
    NSArray * _proposals;
    NEIKEv2IKESPI * _rekeyIKESPI;
}

@property (retain) NSArray *proposals;
@property (retain) NEIKEv2IKESPI *rekeyIKESPI;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (id)proposals;
- (id)rekeyIKESPI;
- (void)setProposals:(id)arg1;
- (void)setRekeyIKESPI:(id)arg1;
- (unsigned long long)type;

@end
