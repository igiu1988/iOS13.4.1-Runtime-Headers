/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest> {
    NSUUID * _identifier;
    GEOImageServiceRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) GEOImageServiceRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)request;
- (void)setIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;

@end
