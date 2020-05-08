/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKAttachmentInfo : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _filePath;
    struct RetainPtr<NSFileWrapper> { 
        void *m_ptr; 
    }  _fileWrapper;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mimeType;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _utiType;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSFileWrapper *fileWrapper;
@property (nonatomic, readonly) NSString *name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)contentType;
- (id)data;
- (id)filePath;
- (id)fileWrapper;
- (id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4;
- (id)name;

@end
