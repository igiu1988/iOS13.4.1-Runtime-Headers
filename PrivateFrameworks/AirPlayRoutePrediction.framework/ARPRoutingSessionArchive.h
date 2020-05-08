/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
 */

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding> {
    double  _routingSessionTimeout;
    NSArray * _sessions;
}

@property (nonatomic, readonly) double routingSessionTimeout;
@property (nonatomic, readonly) NSArray *sessions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2;
- (double)routingSessionTimeout;
- (id)sessions;

@end
