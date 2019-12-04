//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAvatarViewController, GKPlayer, NSObject, UIImageView;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView
{
    _Bool _useDarkerPlaceholder;
    _Bool _usingPlaceholder;
    _Bool _selected;
    GKPlayer *_player;
    NSObject<GKPlayerAvatarViewDelegate> *_delegate;
    long long _avatarSize;
    CNAvatarViewController *_avatarViewController;
    UIImageView *_avatarImageView;
}

@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(nonatomic) long long avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) __weak NSObject<GKPlayerAvatarViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isUsingPlaceholder) _Bool usingPlaceholder; // @synthesize usingPlaceholder=_usingPlaceholder;
@property(nonatomic) _Bool useDarkerPlaceholder; // @synthesize useDarkerPlaceholder=_useDarkerPlaceholder;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)invalidatePhoto;
- (void)refreshImageWithCompletionHandler:(id /* block */)arg1;
- (void)setContactOnAvatarViewController:(id)arg1;
- (void)setPlayer:(id)arg1 completionHandler:(id /* block */)arg2;
@property(readonly, nonatomic) _Bool hasImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end
