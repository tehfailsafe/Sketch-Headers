//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableShapePathLayer.h"

#import "MSShapePathLayer.h"

@class MSImmutableStyle, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableShapePathLayer : _MSImmutableShapePathLayer <MSShapePathLayer>
{
    BOOL _isEditing;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (id)defaultName;
+ (unsigned long long)traits;
@property(readonly, nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) MSImmutableStyle *usedStyle;
@property(readonly, nonatomic) BOOL isLayerExportable;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (id)pathInRect:(struct CGRect)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (void)refreshPreviewImagesWithCache:(id)arg1;
- (BOOL)previewImagesRequireRefreshWithCache:(id)arg1;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) long long booleanOperation;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL edited;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) id <MSShapePath> pathGeneric; // @dynamic pathGeneric;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

