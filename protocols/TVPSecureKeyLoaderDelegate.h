/* Generated by EzioChiu.
 */

@protocol TVPSecureKeyLoaderDelegate <NSObject>

@required

- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didFailWithError:(NSError *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadCertificateData:(NSData *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadContentIdentifierData:(NSData *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadKeyResponseData:(NSData *)arg2 renewalDate:(NSDate *)arg3 forRequest:(TVPSecureKeyRequest *)arg4;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2;

@optional

- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2 playbackStartDate:(NSDate *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didReceiveUpdatedRentalPlaybackStartDate:(NSDate *)arg2;

@end
