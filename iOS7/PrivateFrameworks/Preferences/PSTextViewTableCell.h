/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSTableCell.h>

#import "UITextContentViewDelegate-Protocol.h"

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate>
{
    PSTextView *_textView;
}

- (void)drawTitleInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (struct UIEdgeInsets)textViewInsets;
@property(retain, nonatomic) PSTextView *textView;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textContentViewDidEndEditing:(id)arg1;
- (void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3;
- (void)layoutSubviews;
- (void)cellRemovedFromView;
- (void)textContentViewDidChange:(id)arg1;
- (void)setValue:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

