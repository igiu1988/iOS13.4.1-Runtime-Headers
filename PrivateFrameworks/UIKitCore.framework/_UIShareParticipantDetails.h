/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding> {
    NSString * _detailText;
    UIColor * _participantColor;
    NSString * _participantID;
}

@property (copy) NSString *detailText;
@property (copy) UIColor *participantColor;
@property (copy) NSString *participantID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)participantColor;
- (id)participantID;
- (void)setDetailText:(id)arg1;
- (void)setParticipantColor:(id)arg1;
- (void)setParticipantID:(id)arg1;

@end
