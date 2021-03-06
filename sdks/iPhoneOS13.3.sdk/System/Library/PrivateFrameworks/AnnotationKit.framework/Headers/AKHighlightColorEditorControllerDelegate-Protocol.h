//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationEditorDelegate-Protocol.h>

@class AKAnnotation, AKAnnotationTheme, AKHighlightColorEditorController;

@protocol AKHighlightColorEditorControllerDelegate <AKAnnotationEditorDelegate>
- (void)editorController:(AKHighlightColorEditorController *)arg1 showEditMenuForAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 deleteAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 setTheme:(AKAnnotationTheme *)arg2 forAnnotation:(AKAnnotation *)arg3;
- (void)editorController:(AKHighlightColorEditorController *)arg1 editNote:(AKAnnotation *)arg2;

@optional
- (BOOL)editorController:(AKHighlightColorEditorController *)arg1 isRightArrowEnabledForAnnotation:(AKAnnotation *)arg2;
- (BOOL)editorController:(AKHighlightColorEditorController *)arg1 isSharingEnabledForAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 shareAnnotation:(AKAnnotation *)arg2;
@end

