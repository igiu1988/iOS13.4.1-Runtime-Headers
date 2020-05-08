/* Generated by EzioChiu
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSContext : NSObject {
    id /* block */  _exceptionHandler;
    struct OpaqueJSContext { } * m_context;
    struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> { 
        struct JSValue {} *m_slot; 
    }  m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate> > { 
        id m_weakReference; 
    }  m_moduleLoaderDelegate;
    JSVirtualMachine * m_virtualMachine;
}

@property (nonatomic, readonly) RWIProtocolInspector *_inspector;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSValue *globalObject;
@property (copy) NSString *name;
@property (readonly) JSVirtualMachine *virtualMachine;

// Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentContext;
+ (id)currentThis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContext { }*)JSGlobalContextRef;
- (struct __CFRunLoop { }*)_debuggerRunLoop;
- (bool)_includesNativeCallStackWhenReportingExceptions;
- (bool)_remoteInspectionEnabled;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(bool)arg1;
- (void)_setRemoteInspectionEnabled:(bool)arg1;
- (void)beginCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1 calleeValue:(struct OpaqueJSValue { }*)arg2 thisValue:(struct OpaqueJSValue { }*)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue {}**)arg5;
- (bool)boolFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (void)dealloc;
- (id)dependencyIdentifiersForModuleJSScript:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1;
- (void)ensureWrapperMap;
- (id)evaluateJSScript:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)exception;
- (id /* block */)exceptionHandler;
- (id)globalObject;
- (id)init;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (id)moduleLoaderDelegate;
- (id)name;
- (void)notifyException:(struct OpaqueJSValue { }*)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setException:(id)arg1;
- (void)setExceptionHandler:(id /* block */)arg1;
- (void)setModuleLoaderDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)virtualMachine;
- (id)wrapperForJSObject:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (id)wrapperMap;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)_inspector;

@end
