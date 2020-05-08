/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFNavigationBarAccessoryButtonArrangement : NSObject {
    NSSet * _allButtonTypes;
    NSArray * _leadingButtonTypes;
    NSArray * _trailingButtonTypes;
}

@property (nonatomic, readonly) NSArray *leadingButtonTypes;
@property (nonatomic, readonly) NSArray *trailingButtonTypes;

- (void).cxx_destruct;
- (bool)containsButtonType:(long long)arg1;
- (id)description;
- (void)enumerateButtonTypesFromEdge:(unsigned long long)arg1 withLayoutDirection:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2;
- (id)leadingButtonTypes;
- (id)trailingButtonTypes;

@end
