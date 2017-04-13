/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@class SegmentedToolbarItem;

@interface SegmentedToolbarItemSegmentItem : NSToolbarItem
{
    SegmentedToolbarItem *_parent;
    long long _segmentNumber;
}

@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) SegmentedToolbarItem *parent; // @synthesize parent=_parent;
- (void)setMenu:(id)arg1;
- (void)setImage:(id)arg1;
- (void)_setTag:(long long)arg1;
- (void)setTag:(long long)arg1;
- (void)_setToolTip:(id)arg1;
- (void)setToolTip:(id)arg1;
- (id)menuFormRepresentation;

@end
