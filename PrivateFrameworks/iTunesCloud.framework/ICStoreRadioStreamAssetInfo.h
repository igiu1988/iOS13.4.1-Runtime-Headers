/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreRadioStreamAssetInfo : NSObject {
    bool  _iTunesStoreStream;
    NSDictionary * _itemResponseDictionary;
}

@property (nonatomic, readonly) long long flavor;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSURL *keyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly) long long streamProtocol;
@property (nonatomic, readonly, copy) NSURL *streamURL;

- (void).cxx_destruct;
- (long long)ICStoreRadioStreamFlavorWithString:(id)arg1;
- (long long)ICStoreRadioStreamProtocolWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)flavor;
- (id)initWithItemResponseDictionary:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (void)setITunesStoreStream:(bool)arg1;
- (long long)streamProtocol;
- (id)streamURL;

@end
