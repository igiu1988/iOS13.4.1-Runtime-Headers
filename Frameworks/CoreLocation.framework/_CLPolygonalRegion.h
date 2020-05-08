/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLPolygonalRegion : CLRegion

@property (nonatomic, readonly, copy) NSArray *vertices;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(id)arg1 identifier:(id)arg2;
- (id)vertices;

@end
