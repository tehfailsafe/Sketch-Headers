//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableAssetCollection.h"

#import "MSAssetCollection.h"

@class NSArray, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableAssetCollection : _MSImmutableAssetCollection <MSAssetCollection>
{
}

- (void)migratePropertiesFromV74OrEarlierWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *colors;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *exportPresets;
@property(readonly, nonatomic) NSArray *gradients;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MSImageCollection> imageCollectionGeneric; // @dynamic imageCollectionGeneric;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end

