/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2EAPPayload : NEIKEv2Payload {
    NSData * _eapMessage;
}

@property (retain) NSData *eapMessage;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)eapMessage;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (void)setEapMessage:(id)arg1;
- (unsigned long long)type;

@end
