/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate, AVPlayerItemMetadataOutputPushDelegate> {
    int  m_delayCallbacks;
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_player;
    struct GenericTaskQueue<WebCore::Timer> { 
        struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer> > { 
            struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
                struct WeakPtrImpl {} *m_ptr; 
            } m_impl; 
        } m_weakPtrFactory; 
        struct TaskDispatcher<WebCore::Timer> { 
            struct WeakPtrFactory<WebCore::TaskDispatcher<WebCore::Timer> > { 
                struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
                    struct WeakPtrImpl {} *m_ptr; 
                } m_impl; 
            } m_weakPtrFactory; 
            struct Deque<WTF::Function<void ()>, 0>="m_start"Q"m_end"Q"m_buffer"{VectorBuffer<WTF::Function<void ()>, 0, WTF::FastMalloc>="m_buffer"^{Function<void ()> {} m_pendingTasks; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_dispatcher; 
    }  m_taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithPlayer:(struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (void)metadataLoaded;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
