/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver> {
    NSObject<OS_nw_array> * child_endpoint_handlers;
    void * child_timer;
    NWConcrete_nw_endpoint_handler * connected_child;
    NSObject<OS_nw_array> * failed_child_endpoint_handlers;
    bool  failed_to_start_next_child;
    int  last_resolver_status;
    unsigned int  next_child_endpoint_index;
    NSObject<OS_nw_array> * ready_child_endpoint_handlers;
    NSObject<OS_nw_resolver> * resolver;
    void * trigger_agent_timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyWithHandler:(id)arg1 toChildren:(id /* block */)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
