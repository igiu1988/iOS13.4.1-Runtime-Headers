/* Generated by EzioChiu.
 */

@protocol TSKModel <NSObject>

@optional

- (void)acceptVisitor:(id <TSKModelVisitor>)arg1;
- (void)checkDebug;
- (NSEnumerator *)childEnumerator;
- (NSString *)modelPathComponentForChild:(id <TSKModel>)arg1;

@end
