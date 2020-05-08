/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsiteDataSize : NSObject {
    struct Size { 
        unsigned long long totalSize; 
        struct HashMap<unsigned int, unsigned long long, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> > { 
            struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long> >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { 
                struct KeyValuePair<unsigned int, unsigned long long> {} *m_table; 
            } m_impl; 
        } typeSizes; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long totalSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSize:(const struct Size { unsigned long long x1; struct HashMap<unsigned int, unsigned long long, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long> >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, unsigned long long> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (unsigned long long)sizeOfDataTypes:(id)arg1;
- (unsigned long long)totalSize;

@end
