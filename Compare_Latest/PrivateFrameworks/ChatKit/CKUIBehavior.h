/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CKUIBehavior : NSObject
{
    float _bubbleIndentationDuringEditMode;
}

+ (void)invalidate_conversationListDateBodyLeading;
+ (void)invalidate_conversationListSummaryBodyLeading;
+ (void)invalidate_conversationListSenderBodyLeading;
+ (void)invalidate_characterCountFont;
+ (void)invalidate_balloonSubjectFont;
+ (void)invalidate_balloonTextFont;
+ (void)invalidate_timestampBodyLeading;
+ (void)invalidate_transcriptBoldTextHeight;
+ (void)invalidate_transcriptBoldTextAlignmentInsets;
+ (void)invalidate_transcriptBoldTextFont;
+ (void)invalidate_transcriptTextFont;
+ (void)invalidate_readerFont;
+ (id)sharedBehaviors;
@property(readonly, nonatomic) float bubbleIndentationDuringEditMode; // @synthesize bubbleIndentationDuringEditMode=_bubbleIndentationDuringEditMode;
- (id)timestampDateFormatter;
@property(readonly, nonatomic) NSString *transcriptDefaultPNG;
@property(readonly, nonatomic) NSString *conversationListDefaultPNG;
- (unsigned int)conversationCacheSize;
- (id)dimmingViewBackgroundColor;
- (BOOL)dimsTranscriptWhileEditingConversations;
- (BOOL)shouldDimTranscript;
- (float)senderSummaryConversationListSpace;
- (float)bottomConversationListSpace;
- (float)topConversationListSpace;
- (float)conversationListDateBodyLeading;
- (float)conversationListSummaryBodyLeading;
- (float)conversationListSenderBodyLeading;
- (id)chevronImage;
- (id)conversationListDateFont;
- (id)conversationListSummaryFont;
- (id)conversationListSenderFont;
- (id)characterCountFont;
- (id)entryFieldDividerColor;
- (id)entryFieldBackgroundColor;
- (id)entryFieldGrayColor;
- (id)photoButtonColor;
- (id)siri_sendButtonFont;
- (id)blue_sendButtonFont;
- (id)green_sendButtonFont;
- (id)gray_sendButtonFont;
- (id)sendButtonFontForColorType:(BOOL)arg1;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
- (id)textDocumentIcon;
- (id)errorDocumentIcon;
- (id)genericDocumentIcon;
- (struct CGSize)documentIconSize;
- (struct UIEdgeInsets)documentIconAlignmentRectInsets;
- (float)balloonMaxWidth;
- (struct UIEdgeInsets)balloonDistanceFieldAlignmentRectInsets;
- (struct UIEdgeInsets)balloonDistanceFieldCapInsets;
- (struct CGSize)balloonDistanceFieldSize;
- (struct UIEdgeInsets)balloonMaskFrameInsets;
- (struct UIEdgeInsets)balloonMaskFrameCapInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
- (float)skinnyBalloonWidthDifference;
- (float)balloonMaskTailWidth;
- (float)balloonTextLineHeight;
- (id)balloonSubjectFont;
- (id)balloonTextFont;
- (id)attachmentBalloonsDownloadingIcon;
- (id)attachmentBalloonTextColor;
- (id)attachmentBalloonActionColor;
- (id)siri_backgroundBalloonColor;
- (id)blue_backgroundBalloonColor;
- (id)green_backgroundBalloonColor;
- (id)gray_backgroundBalloonColor;
- (id)backgroundBalloonColorForColorType:(BOOL)arg1;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
- (float)bottomTranscriptSpace;
- (float)topTranscriptSpace;
- (float)largeTranscriptSpace;
- (float)mediumTranscriptSpace;
- (float)smallTranscriptSpace;
- (float)timestampBodyLeadingFraction:(float)arg1;
- (float)timestampBodyLeading;
- (float)balloonBalloonTranscriptSpace:(BOOL)arg1;
- (struct UIEdgeInsets)serviceTranscriptInsets;
- (struct UIEdgeInsets)timestampTranscriptInsets;
- (struct UIEdgeInsets)entityTranscriptInsets;
- (struct UIEdgeInsets)statusTranscriptInsets;
- (struct UIEdgeInsets)balloonTranscriptInsets;
- (float)transcriptBoldTextHeight;
- (struct UIEdgeInsets)transcriptBoldTextAlignmentInsets;
- (id)transcriptBoldTextFont;
- (id)transcriptTextFont;
- (id)transcriptTextColor;
- (id)readerFont;
- (float)spaceBetweenEditToolbarButtons;
- (id)appTintColor;
@property(readonly, nonatomic) BOOL shouldShowContactPhotos;
- (id)previewTitleFont;
- (float)previewTitleBarHeight;
- (struct UIEdgeInsets)minimumPlayButtonInsets;
- (struct CGSize)untailedPreviewFillSizeForImageSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailFillSizeForImageSize:(struct CGSize)arg1;
- (float)attachmentBalloonHeight;
- (id)transcriptSeparatorColor;
- (id)transcriptHeaderTextFont;
- (id)transcriptBackgroundColor;
- (float)paddingAfterLastTranscriptRow;
- (float)paddingBeforeFirstTranscriptRow;
- (float)typingIndicatorMargin;
- (float)transcriptContactImageDiameter;
- (float)recipientOverlaySingleLineContentHeight;
- (BOOL)shouldRefreshAlternateAddressesSheet;
- (BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (float)collapsedRecipientListLeftPadding;
- (BOOL)shouldShowDisclosureChevronInRecipientAtoms;
- (BOOL)shouldHomogenizeAtomsForPreferredService;
- (float)conversationListRowHeight;
- (float)conversationListContactImageDiameter;
@property(readonly, nonatomic) BOOL useContactPhotosInConversationList;
@property(readonly, nonatomic) float sendButtonHorizontalPadding;
@property(readonly, nonatomic) float entryFieldToSendButtonSpacing;
@property(readonly, nonatomic) float entryFieldToPhotoButtonSpacing;
@property(readonly, nonatomic) float entryFieldRightMargin;
@property(readonly, nonatomic) float entryFieldLeftMargin;
@property(readonly, nonatomic) float entryFieldBottomMargin;
@property(readonly, nonatomic) struct CGRect entryFieldBackgroundStretchSpecs;
@property(readonly, nonatomic) struct CGRect inputFieldCoverStretchSpecs;
@property(readonly, nonatomic) BOOL shouldRoundBottomLeftCornerOfEntryField;
@property(readonly, nonatomic) BOOL floatingEntryFieldEnabled; // @dynamic floatingEntryFieldEnabled;
@property(readonly, nonatomic) BOOL usesFullWidthMessageEntryViewWhenKeyboardIsUndocked;
@property(readonly, nonatomic) BOOL presentForwardingUIModally;
@property(readonly, nonatomic) BOOL usesPersistentConversationSelection;
@property(readonly, nonatomic) BOOL selectNewConversationOnDeletion;
@property(readonly, nonatomic) BOOL selectNewConversationOnStateRestore;
@property(readonly, nonatomic) BOOL showPendingInConversationList;
- (id)recipientTextColorForColorType:(BOOL)arg1;
- (float)updateTranscriptInsetsAnimationDuration;
- (float)editingTransitionAnimationDuration;
- (float)resizeMessageEntryViewAnimationDuration;
- (float)throwMessageAnimationDuration;
- (float)scrollInNewMessageAnimationDuration;
- (float)fadeInBubbleAnimationDuration;
- (float)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) BOOL shouldSetConversationKeyboardOnSearchBeginEnd;
@property(readonly, nonatomic) float scrollToHideKeyboardGestureThreshold;
@property(readonly, nonatomic) float escapeVelocityForHidingKeyboard;
@property(readonly, nonatomic) float velocityThresholdForHidingKeyboard;
@property(readonly, nonatomic) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesScrollGestureToHideKeyboard;
@property(readonly, nonatomic) BOOL returnKeySendsMessage;
@property(readonly, nonatomic) BOOL shouldShowSendProgressIndicator;
@property(readonly, nonatomic) BOOL canAccessCoreRecents;
@property(readonly, nonatomic) BOOL canAccessPhotos;
@property(readonly, nonatomic) BOOL canAccessContacts;
@property(readonly, nonatomic) BOOL photosIsWhitelisted;
@property(readonly, nonatomic) BOOL cameraIsWhitelisted;
@property(readonly, nonatomic) BOOL mailIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) BOOL phoneIsWhitelisted;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreenOnSignin;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreen;
@property(readonly, nonatomic) int madridRegistrationAppearanceStyle;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) BOOL presentsReaderController;
@property(readonly, nonatomic) BOOL presentsQuickLookController;
@property(readonly, nonatomic) BOOL showTranscriptButtonsInNavigationBar;
@property(readonly, nonatomic) BOOL usesPopovers;
- (float)leftSplitPaneWidthForUIInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) BOOL lowClearanceInLandscape;
@property(readonly, nonatomic) BOOL splitViewEnabled; // @dynamic splitViewEnabled;

@end

