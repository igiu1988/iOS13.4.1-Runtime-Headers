/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFFileRecordDescriptor : WFRecordDescriptor {
    WFFileRepresentation * _file;
    NSString * _name;
    NSString * _sourceAppIdentifier;
}

@property (nonatomic, readonly) WFFileRepresentation *file;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3;
- (id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 sourceAppIdentifier:(id)arg4;
- (id)name;
- (id)sourceAppIdentifier;

@end
