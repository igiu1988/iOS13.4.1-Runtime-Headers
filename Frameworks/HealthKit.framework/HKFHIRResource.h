/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFHIRResource : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSData * _data;
    NSString * _identifier;
    NSDate * _lastUpdatedDate;
    NSString * _resourceType;
    NSURL * _sourceURL;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDate *lastUpdatedDate;
@property (readonly, copy) NSString *resourceType;
@property (readonly, copy) NSString *sourceString;
@property (readonly, copy) NSURL *sourceURL;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2 data:(id)arg3 sourceURL:(id)arg4 lastUpdatedDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (id)resourceType;
- (id)sourceString;
- (id)sourceURL;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
