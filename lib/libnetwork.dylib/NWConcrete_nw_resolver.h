/* Generated by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {
    NSObject<OS_dispatch_group> * cancel_group;
    id /* block */  cancel_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_context> * context;
    void * crazy_eyeballs_timer;
    int  dns_error;
    struct _DNSServiceRef_t { } * dns_service;
    unsigned int  dns_service_id;
    struct _DNSServiceRef_t { } * dns_service_secondary_pointer;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_array> * endpoint_array;
    NSObject<OS_nw_txt_record> * esni_record;
    unsigned char  flags;
    unsigned int  forced_protocol;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    NWConcrete_nw_resolver * internally_retained_object;
    unsigned int  ipv4_used_resolver_cache;
    unsigned int  ipv6_used_resolver_cache;
    unsigned int  is_custom_resolver;
    unsigned int  local_only;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    BOOL  log_str;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * path;
    NSObject<OS_nw_interface> * path_required_interface;
    void * query_timer;
    unsigned int  resolve_esni;
    int  status;
    unsigned int  suppress_logging;
    id /* block */  update_block;
    unsigned int  used_local_cache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 path:(id)arg3;

@end
