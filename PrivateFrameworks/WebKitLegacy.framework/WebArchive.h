/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebArchive : NSObject <NSCoding, NSCopying> {
    WebArchivePrivate * _private;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) WebResource *mainResource;
@property (nonatomic, readonly, copy) NSArray *subframeArchives;
@property (nonatomic, readonly, copy) NSArray *subresources;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (struct LegacyWebArchive { int (**x1)(); unsigned int x2; struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource {} *x_3_1_1; } x3; struct Vector<WTF::Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct Vector<WTF::Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> > {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; }*)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive {} *x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)mainResource;
- (id)subframeArchives;
- (id)subresources;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)bundleForClass;

@end
