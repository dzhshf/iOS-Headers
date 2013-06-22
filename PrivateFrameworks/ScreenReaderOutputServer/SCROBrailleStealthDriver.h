/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SCROBrailleDriverProtocol-Protocol.h"

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>
{
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    int _mainSize;
    int _statusSize;
}

- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (id)getInputEvents;
- (int)statusSize;
- (int)mainSize;
- (int)brailleInputMode;
- (BOOL)postsKeyboardEvents;
- (BOOL)isInputEnabled;
- (BOOL)supportsBlinkingCursor;
- (id)modelIdentifier;
- (BOOL)isSleeping;
- (BOOL)isDriverLoaded;
- (BOOL)unloadDriver;
- (int)loadDriverWithIOElement:(id)arg1;
- (unsigned int)interfaceVersion;
- (void)dealloc;
- (id)init;

@end
