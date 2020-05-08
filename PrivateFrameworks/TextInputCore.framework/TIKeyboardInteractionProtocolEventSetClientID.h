/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInteractionProtocolEventSetClientID : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSString * _clientID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientID:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
