/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRCtcTimeSample : NSObject {
    struct CRCtcCandidate { 
        int symbol; 
        float prob; 
    }  _blank;
    struct CRCTCPriorityQueue { struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison> { struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_1_2_1; struct CRCtcCandidate {} *x_1_2_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_3_1; } x_1_2_3; } x_1_1_1; struct QueueComparison { } x_1_1_2; } x1; bool x2; struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_1_1; struct CRCtcCandidate {} *x_3_1_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_2_1; } x_3_1_3; } x3; } * _sample;
}

@property struct CRCtcCandidate { int x1; float x2; } blank;
@property /* Warning: unhandled struct encoding: '{CRCTCPriorityQueue={priority_queue<CRCtcCandidate' */ struct *sample; /* unknown property attribute:  std::__1::allocator<CRCtcCandidate> >=^{CRCtcCandidate}}}} */

- (void)addCandidate:(struct CRCtcCandidate { int x1; float x2; })arg1;
- (struct CRCtcCandidate { int x1; float x2; })blank;
- (const struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x1; struct CRCtcCandidate {} *x2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_1_1; } x3; }*)candidates;
- (void)dealloc;
- (id)init;
- (struct CRCTCPriorityQueue { struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison> { struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_1_2_1; struct CRCtcCandidate {} *x_1_2_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_3_1; } x_1_2_3; } x_1_1_1; struct QueueComparison { } x_1_1_2; } x1; bool x2; struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_1_1; struct CRCtcCandidate {} *x_3_1_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_2_1; } x_3_1_3; } x3; }*)sample;
- (void)setBlank:(struct CRCtcCandidate { int x1; float x2; })arg1;
- (void)setSample:(struct CRCTCPriorityQueue { struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison> { struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_1_2_1; struct CRCtcCandidate {} *x_1_2_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_3_1; } x_1_2_3; } x_1_1_1; struct QueueComparison { } x_1_1_2; } x1; bool x2; struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_1_1; struct CRCtcCandidate {} *x_3_1_2; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate {} *x_3_2_1; } x_3_1_3; } x3; }*)arg1;
- (struct CRCtcCandidate { int x1; float x2; })topCandidate;
- (void)trimCandidates;

@end