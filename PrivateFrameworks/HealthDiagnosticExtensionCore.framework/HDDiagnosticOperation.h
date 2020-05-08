/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
 */

@interface HDDiagnosticOperation : NSOperation {
    NSURL * _attachmentDirectoryURL;
    NSMutableArray * _attachments;
    <HDDiagnosticOperationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableString * _reportContents;
}

@property (nonatomic, readonly, copy) NSURL *attachmentDirectoryURL;
@property (readonly, copy) NSArray *attachments;
@property (nonatomic) <HDDiagnosticOperationDelegate> *delegate;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableString *reportContents;
@property (readonly, copy) NSString *reportFilename;

+ (id)operationWithAttachmentDirectoryURL:(id)arg1;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1 newLine:(bool)arg2;
- (bool)_copyDatabase:(struct sqlite3 { }*)arg1 toDatabase:(struct sqlite3 { }*)arg2;
- (id)_fileAttributesAtURL:(id)arg1;
- (id)_headerString;
- (void)_queue_submitAttachment:(id)arg1;
- (double)absoluteTimeForTimespec:(struct timespec { long long x1; long long x2; })arg1;
- (void)appendFormat:(id)arg1;
- (void)appendNewline;
- (void)appendSeparator;
- (void)appendString:(id)arg1;
- (void)appendStrongSeparator;
- (id)attachmentDirectoryURL;
- (id)attachments;
- (bool)copyDatabaseFromURL:(id)arg1 toURL:(id)arg2;
- (id)delegate;
- (id)fileCreationDateForURL:(id)arg1;
- (id)fileModificationDateForURL:(id)arg1;
- (long long)fileSizeForURL:(id)arg1;
- (unsigned long long)getFileStatisticsForDirectoryWithURL:(id)arg1 earliestModificationDate:(double*)arg2 totalFileSize:(long long*)arg3 maxFileSize:(long long*)arg4;
- (id)healthDirectoryURL;
- (id)initWithAttachmentDirectoryURL:(id)arg1;
- (void)log:(id)arg1;
- (void)main;
- (id)openReadOnlyDatabaseAtURL:(id)arg1;
- (id)prettyPrintFileSize:(long long)arg1;
- (id)queue;
- (id)reportContents;
- (id)reportFilename;
- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReportContents:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)submitAttachment:(id)arg1;
- (void)submitAttachments:(id)arg1;

@end
