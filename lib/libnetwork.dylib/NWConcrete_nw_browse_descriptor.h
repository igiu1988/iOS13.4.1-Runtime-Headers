/* Generated by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    unsigned int  __pad_bits;
    char * bonjour_domain;
    char * bonjour_type;
    id /* block */  browse_block;
    NSObject<OS_dispatch_data> * custom_data;
    char * description;
    unsigned int  include_txt_record;
    char * logging_description;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)redactedDescription;

@end
