/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNetworkState : NSObject {
    NSObject<OS_nw_path> * _networkPath;
}

@property (getter=isCellular, nonatomic, readonly) bool cellular;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly) NSObject<OS_nw_path> *networkPath;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNetworkPath:(id)arg1;
- (bool)isCellular;
- (bool)isConnected;
- (bool)isConstrained;
- (bool)isEqual:(id)arg1;
- (id)networkPath;
- (id)redactedDescription;

@end