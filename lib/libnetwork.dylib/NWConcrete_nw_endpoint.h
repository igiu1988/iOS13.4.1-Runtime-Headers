/* Generated by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    unsigned short  alternate_port;
    struct nw_hash_table { } * associations;
    NSObject<OS_nw_context> * context;
    char * description;
    unsigned int  description_used;
    NSObject<OS_nw_interface> * interface;
    unsigned int  is_local_domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * logging_description;
    unsigned int  logging_description_used;
    int  original_fd;
    NWConcrete_nw_endpoint * parent_endpoint;
    unsigned int  parent_is_proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const char *domainForPolicy;
@property (nonatomic, readonly) const char *getDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const char *hostname;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic) unsigned short priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic) unsigned short weight;

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (id)description;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (const char *)getLoggingDescription;
- (const char *)hostname;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned short)port;
- (unsigned short)priority;
- (id)redactedDescription;
- (void)setPriority:(unsigned short)arg1;
- (void)setWeight:(unsigned short)arg1;
- (unsigned int)type;
- (unsigned short)weight;

@end
