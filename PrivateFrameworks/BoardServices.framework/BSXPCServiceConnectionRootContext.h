/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    _Atomic unsigned long long  __uniqueChildCounter;
    NSString * _eDesc;
    unsigned long long  _unique;
}

- (void).cxx_destruct;
- (id)_initWithType:(BOOL)arg1 eDesc:(id)arg2;
- (id)childContextWithRemoteIdentifier:(unsigned long long)arg1;
- (id)debugDescription;
- (id)endpointDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRoot;
- (id)uniqueChildContext;

@end
