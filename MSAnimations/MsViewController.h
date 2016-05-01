//
//  MsViewController.h
//  mr.scorpion
//
//  Created by Leonhard Lichtschlag on 9/Feb/12.
//  Copyright (c) 2012 Leonhard Lichtschlag. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CAEmitterLayer;

// ===============================================================================================================
@interface MsViewController : UIViewController
// ===============================================================================================================

@property (weak, nonatomic) IBOutlet	UIButton		*likeButton;
@property (strong)						CAEmitterLayer	*heartsEmitter;

- (IBAction) likeButtonPressed:(id)sender;


@end
