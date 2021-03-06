/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface _SBLoadApplicationResult : NSObject {
    NSString * _errorDescription;
    bool  _success;
    bool  _update;
}

@property (nonatomic, copy) NSString *errorDescription;
@property (getter=isSuccess, nonatomic) bool success;
@property (getter=isUpdate, nonatomic) bool update;

- (void).cxx_destruct;
- (id)errorDescription;
- (bool)isSuccess;
- (bool)isUpdate;
- (void)setErrorDescription:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setUpdate:(bool)arg1;

@end
