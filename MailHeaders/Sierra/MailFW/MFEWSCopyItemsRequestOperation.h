//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding.h"

@class MFEWSCopyItemsResponseOperation, NSArray, NSString;

@interface MFEWSCopyItemsRequestOperation : MFEWSRequestOperation <NSCoding>
{
    NSString *_sourceEWSFolderIdString;	// 24 = 0x18
    NSString *_destinationEWSFolderIdString;	// 32 = 0x20
    NSArray *_EWSItemIds;	// 40 = 0x28
    NSArray *_offlineCreatedEWSItemIdStrings;	// 48 = 0x30
}

@property(copy) NSArray *offlineCreatedEWSItemIdStrings; // @synthesize offlineCreatedEWSItemIdStrings=_offlineCreatedEWSItemIdStrings;
@property(readonly, copy, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
@property(readonly, copy, nonatomic) NSString *destinationEWSFolderIdString; // @synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString;
@property(readonly, copy, nonatomic) NSString *sourceEWSFolderIdString; // @synthesize sourceEWSFolderIdString=_sourceEWSFolderIdString;
- (void).cxx_destruct;	// IMP=0x000000000007a7e8
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x000000000007a707
@property(retain, nonatomic) MFEWSCopyItemsResponseOperation *responseOperation;
- (void)_newEWSItemIdStringsDidChange:(id)arg1;	// IMP=0x000000000007a1dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007a111
- (void)setupOfflineResponse;	// IMP=0x0000000000079fa0
- (id)prepareRequest;	// IMP=0x0000000000079c32
- (id)activityString;	// IMP=0x0000000000079a76
- (id)description;	// IMP=0x00000000000799b5
- (void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3;	// IMP=0x00000000000798d5
- (void)dealloc;	// IMP=0x000000000007985f
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x0000000000079790
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007967b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000792ff
- (id)initWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;	// IMP=0x0000000000079063

@end
