//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKShareSheetChatController.h>

@class CKChatEagerUploadController, NSMutableArray;

@interface CKModalTranscriptController : CKShareSheetChatController
{
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
    BOOL _forceMMS;
    CKChatEagerUploadController *_eagerUploadController;
    NSMutableArray *_deferredInsertMediaObjectBlocks;
}

@property(retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks; // @synthesize deferredInsertMediaObjectBlocks=_deferredInsertMediaObjectBlocks;
@property(retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // @synthesize eagerUploadController=_eagerUploadController;
@property(nonatomic) BOOL forceMMS; // @synthesize forceMMS=_forceMMS;
@property(nonatomic) BOOL mimeType; // @synthesize mimeType=_mimeType;
// - (void).cxx_destruct;
- (BOOL)_shouldUseExistingConversations;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (void)registerForNotifications;
- (void)hideEntryViewContent:(BOOL)arg1;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (BOOL)shouldDismissAfterSend;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (BOOL)_deviceIsLocked;
- (void)_setConversationDeferredSetup;
- (void)sendComposition:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)_offsetForScreenWidth:(double)arg1 containerWidth:(double)arg2 windowOffset:(CGPoint)arg3;
- (BOOL)getContainerWidth:(double )arg1 offset:(double )arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)insertMessage:(id)arg1 appProxy:(id)arg2;
- (void)insertRichLinkWithURL:(id)arg1 data:(id)arg2;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)_insertMediaObjectAndReturnFrame:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_canShowWhileLocked;
- (void)setComposition:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

@end

