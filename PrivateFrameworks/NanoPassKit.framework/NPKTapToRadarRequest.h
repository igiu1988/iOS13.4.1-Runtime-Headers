/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTapToRadarRequest : NSObject {
    NSSet * _attachmentsPaths;
    NSString * _body;
    NSURL * _tapToRadarURL;
    NSString * _title;
}

@property (nonatomic, readonly) NSSet *attachmentsPaths;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSURL *tapToRadarURL;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_attachmentURLs;
- (id)attachmentsPaths;
- (id)body;
- (id)description;
- (id)initWithTitle:(id)arg1 body:(id)arg2 attachmentPaths:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)tapToRadarURL;
- (id)title;

@end
