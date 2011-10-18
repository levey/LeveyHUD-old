//
//  ViewController.h
//  LeveyHUDDemo
//
//  Created by Levey Zhu on 10/18/11.
//  Copyright (c) 2011 Lunaapp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LeveyHUD;
@interface ViewController : UIViewController
{
    LeveyHUD *_hud;
}

- (IBAction)showHUDWithAnimation:(id)sender;

- (IBAction)showHUD:(id)sender;

@end
