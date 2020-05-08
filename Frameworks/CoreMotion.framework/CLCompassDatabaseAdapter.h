/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (struct CLCompassDatabase { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; id x3; id x4; id x5; struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_6_1_1; } x6; }*)adaptee;
- (void)beginService;
- (void)doAsync:(id /* block */)arg1;
- (void)doAsync:(id /* block */)arg1 withReply:(id /* block */)arg2;
- (void)dumpDatabase:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)endService;
- (void)getBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2;
- (id)init;
- (void)setBias:(struct { float x1; float x2; float x3; })arg1 withMagneticField:(struct { float x1; float x2; float x3; })arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (bool)syncgetDoSync:(id /* block */)arg1;
- (bool)syncgetLookupBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2 bias:(struct { float x1; float x2; float x3; }*)arg3 level:(int*)arg4 noResults:(bool*)arg5;
- (int)syncgetPendingSetBiasCount;

@end
