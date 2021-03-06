/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UIKeyboardEmojiInputController, UIView<UIKeyboardEmojiPressIndicationDelegate>;

@interface UIKeyboardEmojiSplitCharacterCell : UITableViewCell
{
    NSArray *_characters;
    NSString *_emojiString;
    UIKeyboardEmojiInputController *_inputController;
    UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;
}

+ (id)emojiFontAttributes;
@property UIKeyboardEmojiInputController *inputController; // @synthesize inputController=_inputController;
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(retain) NSArray *characters;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

