/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {
    bool  _includeDHGroup;
    NSArray * _proposals;
}

@property bool includeDHGroup;
@property (retain) NSArray *proposals;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)includeDHGroup;
- (bool)parsePayloadData;
- (id)proposals;
- (void)setIncludeDHGroup:(bool)arg1;
- (void)setProposals:(id)arg1;
- (unsigned long long)type;

@end