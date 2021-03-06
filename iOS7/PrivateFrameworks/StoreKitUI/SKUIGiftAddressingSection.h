/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGift, SKUIGiftRecipientTableViewCell, UITextView;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection
{
    float _footerHeight;
    NSString *_footerString;
    SKUIGift *_gift;
    UITextView *_messagingTextView;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    id <UITextFieldDelegate> _textFieldDelegate;
    float _textViewCellHeight;
}

@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (void).cxx_destruct;
- (id)_textViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_recipientTableViewCell;
- (id)_footerString;
- (id)_attributedPlaceholderWithString:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;

@end

