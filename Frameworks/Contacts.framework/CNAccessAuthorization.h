/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAccessAuthorization : NSObject {
    CNFAccessAuthorization * _authorizer;
}

@property (nonatomic, retain) CNFAccessAuthorization *authorizer;

+ (id)allAuthorizationKeys;
+ (id)new;

- (void).cxx_destruct;
- (bool)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1;
- (id)authorizer;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithAuthorizer:(id)arg1;
- (void)performWork:(id /* block */)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(id /* block */)arg3;
- (void)removeUnauthorizedKeysFromFetchRequest:(id)arg1;
- (void)setAuthorizer:(id)arg1;

@end
