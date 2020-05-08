/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioStreamNumAudioChannels : NSObject <NSCopying> {
    unsigned char  _numAudioChannels;
}

@property (nonatomic) unsigned char numAudioChannels;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithNumAudioChannels:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)numAudioChannels;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setNumAudioChannels:(unsigned char)arg1;

@end
