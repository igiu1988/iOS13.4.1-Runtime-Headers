/* Generated by EzioChiu.
 */

@protocol DAKeyBindingAttestationUpdate <NSObject>

@required

- (void)requestBindingAttestationDataForKeyWithIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DAKeyBindingAttestationRequestData *, NSError *, void*
- (void)setBindingAttestation:(void *)arg1 forKeyWithIdentifier:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end