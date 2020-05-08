/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {
    bool  _conformsToImage;
    bool  _conformsToMovie;
    bool  _conformsToRawImage;
    NSString * _identifier;
}

@property (nonatomic) bool conformsToImage;
@property (nonatomic) bool conformsToMovie;
@property (nonatomic) bool conformsToRawImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isPlayableVideo;
@property (getter=isPrimaryImageFormat, nonatomic, readonly) bool primaryImageFormat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)conformsToImage;
- (bool)conformsToMovie;
- (bool)conformsToRawImage;
- (id)identifier;
- (bool)isPlayableVideo;
- (bool)isPrimaryImageFormat;
- (void)setConformsToImage:(bool)arg1;
- (void)setConformsToMovie:(bool)arg1;
- (void)setConformsToRawImage:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end