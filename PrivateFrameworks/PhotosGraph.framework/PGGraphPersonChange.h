/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphPersonChange : PGGraphChange {
    NSString * _personLocalIdentifier;
    PGGraphPersonNode * _personNode;
    NSSet * _propertyNames;
}

@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, retain) PGGraphPersonNode *personNode;
@property (nonatomic, readonly) NSSet *propertyNames;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2;
- (void)mergeChange:(id)arg1;
- (id)personLocalIdentifier;
- (id)personNode;
- (id)propertyNames;
- (void)setPersonNode:(id)arg1;
- (unsigned long long)type;

@end
