/* Generated by EzioChiu.
 */

@protocol _UIDiffableDataSourceUpdate <NSObject>

@required

- (long long)action;
- (id)destinationIdentifier;
- (bool)destinationIdentifierIsSectionIdentifier;
- (NSOrderedSet *)identifiers;
- (bool)isSectionOperation;
- (long long)relativePosition;

@end