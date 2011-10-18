//
//  ViewController.m
//  LeveyHUDDemo
//
//  Created by Levey Zhu on 10/18/11.
//  Copyright (c) 2011 Lunaapp. All rights reserved.
//

#import "ViewController.h"
#import "LeveyHUD.h"
@implementation ViewController

- (IBAction)showHUDWithAnimation:(id)sender
{
    _hud = [LeveyHUD showZoomInLoadingText:@"Loading" inView:self.view.window];
    [NSTimer scheduledTimerWithTimeInterval:2 target:self selector:@selector(hideWithTextAndFlag) userInfo:nil repeats:NO];
}
- (void)hideWithTextAndFlag
{
    [_hud delayHideWithText:@"Done" animation:YES];
    
}


- (IBAction)showHUD:(id)sender
{
    _hud = [LeveyHUD showLoadingText:@"Loading" inView:self.view.window];
    [NSTimer scheduledTimerWithTimeInterval:2 target:self selector:@selector(hide) userInfo:nil repeats:NO];
}

- (void)hide
{
   [_hud hide];
}

@end
