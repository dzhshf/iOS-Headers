/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUI/TPLCDBar.h>

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar
{
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled:1;
    BOOL _verticallyCenterTextViewIfLabelless;
    BOOL _hasBackgroundGradient;
    UIView *_backgroundGradientView;
}

+ (float)labelFontSize;
+ (float)textFontSize;
@property(nonatomic) BOOL hasBackgroundGradient; // @synthesize hasBackgroundGradient=_hasBackgroundGradient;
@property(retain, nonatomic) UIView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property BOOL verticallyCenterTextViewIfLabelless; // @synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless;
- (id)secondLineText;
- (void)setSecondLineText:(id)arg1;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (id)subImage;
- (void)setSubImage:(id)arg1;
- (void)blinkLabel;
- (id)label;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)layoutSubviews;
- (struct CGRect)_imageViewFrame;
- (struct CGRect)_labelFrame;
- (struct CGRect)textFrame;
- (struct CGRect)_text1Frame;
- (id)text;
- (void)setText:(id)arg1;
- (float)_textVInset;
- (float)_labelVInset;
- (void)setContentsAlpha:(float)arg1;
- (BOOL)showImageViewOnLeftSide;
- (BOOL)shouldCenterContentView;
- (BOOL)shouldCenterText;
- (void)dealloc;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (void)_resetContentViewFrame;
- (struct CGRect)fullSizedContentViewFrame;

@end

