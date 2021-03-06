//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSOverrideViewController.h"

@class NSObject<NSCopying><NSCoding>, NSPopUpButton, NSTextField;

@interface MSSymbolInstanceOverrideViewController : MSOverrideViewController
{
    NSTextField *_labelField;
    NSPopUpButton *_popupButton;
    NSPopUpButton *_popup;
    struct NSObject *_currentMasterID;
}

@property(copy, nonatomic) NSObject<NSCopying><NSCoding> *currentMasterID; // @synthesize currentMasterID=_currentMasterID;
@property(retain, nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
@property(retain, nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property(retain, nonatomic) NSTextField *labelField; // @synthesize labelField=_labelField;
- (void).cxx_destruct;
- (void)generatePreviewForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)addSymbolMaster:(id)arg1 toMenu:(id)arg2;
- (void)updateOtherOverridesForNestedSymbolFromID:(id)arg1 toID:(id)arg2;
- (void)overrideValueAction:(id)arg1;
- (id)valueFromControlView:(id)arg1;
- (id)menuForInstancesWithSelectedItem:(id *)arg1;
- (id)controlViewForEditingOverride;

@end

