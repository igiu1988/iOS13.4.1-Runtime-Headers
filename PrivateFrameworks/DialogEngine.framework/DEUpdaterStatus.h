/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEUpdaterStatus : NSObject {
    bool  _disabled;
    NSString * _publicationId;
    bool  _upToDate;
}

@property (nonatomic) bool disabled;
@property (nonatomic, retain) NSString *publicationId;
@property (nonatomic) bool upToDate;

- (void).cxx_destruct;
- (bool)disabled;
- (id)initWithPublicationId:(id)arg1 upToDate:(bool)arg2;
- (id)publicationId;
- (void)setDisabled:(bool)arg1;
- (void)setPublicationId:(id)arg1;
- (void)setUpToDate:(bool)arg1;
- (bool)upToDate;

@end