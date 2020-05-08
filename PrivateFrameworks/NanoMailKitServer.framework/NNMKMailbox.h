/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMailbox : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountId;
    NSString * _accountLocalId;
    NSString * _customName;
    bool  _databaseContentVerified;
    unsigned long long  _filterType;
    bool  _hasSelection;
    NSDate * _lastUpdate;
    NSString * _mailboxId;
    bool  _syncActive;
    bool  _syncEnabled;
    bool  _syncRequested;
    unsigned long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *accountLocalId;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic) bool databaseContentVerified;
@property (nonatomic) unsigned long long filterType;
@property (nonatomic) bool hasSelection;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic, retain) NSString *mailboxId;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool syncActive;
@property (nonatomic) bool syncEnabled;
@property (nonatomic) bool syncRequested;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSURL *url;

+ (unsigned long long)defaultFilterTypes;
+ (id)generateMailboxIdWithAccountId:(id)arg1 mailboxName:(id)arg2;
+ (id)idsFromMailboxes:(id)arg1;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1;
+ (unsigned long long)syncedTypeFromMailbox:(id)arg1;

- (void).cxx_destruct;
- (id)accountId;
- (id)accountLocalId;
- (void)addFilterType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customName;
- (bool)databaseContentVerified;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterType;
- (bool)hasAnyFilter;
- (bool)hasCompoundFilters;
- (bool)hasFilterType:(unsigned long long)arg1;
- (bool)hasSelection;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (bool)isSelectedForFilterType:(unsigned long long)arg1;
- (id)lastUpdate;
- (id)mailboxId;
- (void)removeFilterType:(unsigned long long)arg1;
- (void)resetURL;
- (void)setAccountId:(id)arg1;
- (void)setAccountLocalId:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setDatabaseContentVerified:(bool)arg1;
- (void)setFilterType:(unsigned long long)arg1;
- (void)setHasSelection:(bool)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSyncActive:(bool)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setSyncRequested:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (bool)syncActive;
- (bool)syncEnabled;
- (bool)syncRequested;
- (unsigned long long)type;
- (id)url;

@end
