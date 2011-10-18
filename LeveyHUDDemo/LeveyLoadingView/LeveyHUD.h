//
//  ViewController.h
//  LeveyHUDDemo
//
//  Created by Levey Zhu on 10/18/11.
//  Copyright (c) 2011 Lunaapp. All rights reserved.
//

@interface LeveyHUD : UIView {
@private
	UIActivityIndicatorView * activityIndicator;
	UILabel * label;
}

@property (nonatomic, retain) NSString * text;

- (void)startAnimating;
- (void)stopAnimating;

- (void)hide;
- (void)delayHideWithText:(NSString *)str animation:(BOOL)yesOrNo;
- (void)hideWithZoomOutEffect;

+ (LeveyHUD *)showZoomInLoadingText:(NSString *)text inView:(UIView *)v;
+ (LeveyHUD *)showLoadingText:(NSString *)text inView:(UIView *)v;
@end

