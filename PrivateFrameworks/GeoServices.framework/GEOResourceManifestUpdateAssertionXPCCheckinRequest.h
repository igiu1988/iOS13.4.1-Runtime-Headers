/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestUpdateAssertionXPCCheckinRequest : GEOXPCRequest <GEOXPCRequest> {
    NSString * _reason;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
