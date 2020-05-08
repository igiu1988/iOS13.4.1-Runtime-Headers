/* Generated by EzioChiu
   Image: /usr/lib/libboringssl.dylib
 */

@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {
    struct __CFArray { } * acceptable_domain_name_list;
    id /* block */  alert_callback;
    unsigned int  allow_server_identity_change;
    unsigned int  alpn_enabled;
    NSObject<OS_xpc_object> * alpn_protocols;
    NSObject<OS_nw_association> * association;
    NSObject<OS_nw_context> * async_context;
    unsigned long long  async_count;
    unsigned int  ats_enforced;
    boringssl_concrete_nw_protocol_boringssl * boringssl_handle;
    id /* block */  boringssl_message_block;
    int  callback_message_type;
    NSObject<OS_nw_array> * callbacks;
    unsigned int  cancelled;
    unsigned int  cert_lookup_done;
    unsigned short  certificate_compression_algorithm;
    unsigned int  certificate_compression_enabled;
    unsigned int  certificate_compression_used;
    id /* block */  challenge_block;
    NSObject<OS_dispatch_queue> * challenge_queue;
    NSObject<OS_dispatch_queue> * client_queue;
    int  config;
    id /* block */  connected_callback;
    unsigned char  connection_id;
    unsigned long long  current_flight_time;
    int  current_handshake_state;
    unsigned int  dtls;
    unsigned int  early_data_enabled;
    unsigned int  enforce_ev;
    char * experiment_identifier;
    unsigned int  fallback_mode;
    unsigned int  false_start_enabled;
    unsigned int  false_start_used;
    unsigned int  flight_direction;
    unsigned int  grease_enabled;
    unsigned long long  handshake_end;
    unsigned long long  handshake_start;
    id /* block */  handshake_state_callback;
    unsigned long long  handshake_timer_fires;
    boringssl_concrete_boringssl_identity * identity;
    unsigned long long  inbound_byte_count;
    unsigned int  is_probe;
    id /* block */  key_update_block;
    NSObject<OS_dispatch_queue> * key_update_queue;
    struct boringssl_legacy_ctx { unsigned int x1; void *x2; } * legacy_context;
    int  max_allowed_dtls_version;
    int  max_allowed_tls_version;
    bool  message_callback_in_progress;
    NSObject<OS_nw_protocol_metadata> * metadata;
    NSObject<OS_dispatch_queue> * metrics_queue;
    int  min_allowed_dtls_version;
    int  min_allowed_tls_version;
    unsigned long long  minimum_ecdsa_key_size;
    unsigned long long  minimum_rsa_key_size;
    unsigned int  minimum_signature_algorithm;
    unsigned int  npn_enabled;
    unsigned int  ocsp_enable;
    unsigned int  offered_ticket;
    NSObject<OS_nw_protocol_options> * options;
    unsigned long long  outbound_byte_count;
    struct __CFArray { } * peer_cert_chain;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * peer_public_key;
    int  peer_trust;
    struct __SecTrust { } * peer_trust_ref;
    unsigned int  peer_verification_in_progress;
    unsigned int  peer_verified;
    NSObject<OS_nw_array> * pending_handshake_callbacks;
    id /* block */  private_key_decrypt_block;
    NSObject<OS_dispatch_queue> * private_key_queue;
    id /* block */  private_key_sign_block;
    boringssl_concrete_boringssl_psk_cache * psk_cache;
    unsigned int  psk_negotiated;
    unsigned long long  read_stalls;
    unsigned int  received_certificate_request;
    unsigned int  recovered_session;
    union sockaddr_in_4_6 { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } sin; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } sin6; 
    }  remote_address;
    unsigned int  renewed;
    unsigned int  resumed;
    unsigned short  round_trips;
    unsigned int  sct_enable;
    struct { 
        unsigned long long length; 
        char *data; 
    }  selected_alpn_data;
    unsigned int  server;
    NSObject<OS_dispatch_data> * session_state;
    unsigned int  session_ticket_enabled;
    id /* block */  session_update_block;
    NSObject<OS_dispatch_queue> * session_update_queue;
    struct boringssl_ctx_alert { 
        int ssl_alert_type; 
        unsigned char ssl_alert_code; 
        unsigned char ssl_warning_count; 
    }  ssl_alert;
    struct ssl_ctx_st { } * ssl_ctx;
    int  ssl_max_version;
    int  ssl_min_version;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_ocsp_response;
    struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned long long x_2_1_1; char *x_2_1_2; } x2; } * ssl_peer_certs;
    struct ssl_st { } * ssl_session;
    int  ssl_state;
    unsigned int  started_flight;
    char * subject_name;
    unsigned long long  total_flight_time;
    unsigned int  tried_resumption;
    unsigned int  trust_evaluation_complete;
    unsigned int  trust_invalid_certs;
    id /* block */  verify_block;
    NSObject<OS_dispatch_queue> * verify_queue;
    unsigned long long  write_stalls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
