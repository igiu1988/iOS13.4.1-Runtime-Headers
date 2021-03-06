/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSCachedContact : NSObject {
    NSString * _classifiedPersonLocalIdentifierWithFaceModelID;
    NSString * _contactIdentifier;
    bool  _hasPicture;
    double  _updateTimestamp;
}

@property (nonatomic, retain) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic) bool hasPicture;
@property (nonatomic) double updateTimestamp;

- (void).cxx_destruct;
- (id)classifiedPersonLocalIdentifierWithFaceModelID;
- (id)contactIdentifier;
- (id)description;
- (bool)hasPicture;
- (id)init;
- (void)setClassifiedPersonLocalIdentifierWithFaceModelID:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setHasPicture:(bool)arg1;
- (void)setUpdateTimestamp:(double)arg1;
- (double)updateTimestamp;

@end
