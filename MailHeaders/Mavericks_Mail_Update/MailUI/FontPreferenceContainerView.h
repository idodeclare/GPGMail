/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@class NSButton, NSTextField;

@interface FontPreferenceContainerView : NSView
{
    NSButton *_selectButton;
    NSTextField *_labelTextField;
    NSTextField *_sampleTextField;
    struct CGRect _myOriginalFrame;
    struct CGRect _sampleTextFieldOriginalFrame;
    double _buttonOffset;
    double _labelOffset;
    double _sampleOffset;
    SEL _getSEL;
    SEL _setSEL;
}

@property SEL setSEL; // @synthesize setSEL=_setSEL;
@property SEL getSEL; // @synthesize getSEL=_getSEL;
- (void)sizeToFit;
- (void)layoutVertically;
- (void)awakeFromNib;

@end
