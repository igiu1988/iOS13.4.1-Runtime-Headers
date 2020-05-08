/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {
    NSDate * _earliestCreationDate;
    NSDate * _latestCreationDate;
    NSDate * _latestTombstoneDate;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSDate *earliestCreationDate;
@property (nonatomic, readonly, copy) NSDate *latestCreationDate;
@property (nonatomic, readonly, copy) NSDate *latestTombstoneDate;
@property (nonatomic, readonly) long long version;

+ (id)baseBookmarkWithVersion:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)earliestCreationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarliestCreationDate:(id)arg1 latestCreationDate:(id)arg2 latestTombstoneDate:(id)arg3 version:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)latestCreationDate;
- (id)latestTombstoneDate;
- (id)updatedBookmarkWithEarliestCreationDate:(id)arg1;
- (id)updatedBookmarkWithLatestCreationDate:(id)arg1;
- (id)updatedBookmarkWithLatestTombstoneDate:(id)arg1;
- (long long)version;

@end