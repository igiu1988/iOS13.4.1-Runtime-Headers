/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSetCoursePropertiesRequest : CATTaskRequest {
    NSArray * _anchorCertificates;
    NSString * _courseDescription;
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _courseName;
}

@property (nonatomic, copy) NSArray *anchorCertificates;
@property (nonatomic, copy) NSString *courseDescription;
@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *courseName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorCertificates;
- (id)courseDescription;
- (id)courseIdentifier;
- (id)courseName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAnchorCertificates:(id)arg1;
- (void)setCourseDescription:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setCourseName:(id)arg1;

@end
