/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;
    BOOL _realPathComputed;
    NSString *_to;
    NSMutableDictionary *_computedAdditionalProperties;
    BOOL _hasCachedChange;
    BOOL _cachedChange;
    NSString *_identifier;
    NSDictionary *_attributes;
    unsigned long long _messageSize;
    unsigned long long _messageFlags;
    unsigned long long _readFlags;
}

- (unsigned long long)readFlags;
- (unsigned long long)messageFlags;
- (unsigned long long)messageSize;
@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateAdditionalPropertiesFromComputedProperties;
- (void)computeAdditionalProperties;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)to;
- (id)savedDate;
- (id)subject;
- (id)URL;
- (id)path;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;

@end
