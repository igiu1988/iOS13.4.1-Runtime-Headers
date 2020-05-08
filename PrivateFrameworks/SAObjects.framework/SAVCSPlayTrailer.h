/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVCSPlayTrailer : SAAceView

@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSURL *hiresTrailerUri;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSURL *lowresTrailerUri;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *utsId;

+ (id)playTrailer;
+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hiresTrailerUri;
- (id)image;
- (id)lowresTrailerUri;
- (void)setContentType:(id)arg1;
- (void)setHiresTrailerUri:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLowresTrailerUri:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUtsId:(id)arg1;
- (id)url;
- (id)utsId;

@end
