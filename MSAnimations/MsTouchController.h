//
//   MsTouchController.h
//  mr.scorpion
//
//  Created by Leonhard Lichtschlag on 11/Feb/12.
//  Copyright (c) 2012 Leonhard Lichtschlag. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CAEmitterLayer;

// ===============================================================================================================
@interface MsTouchController : UIViewController
// ===============================================================================================================

@property (strong) CAEmitterLayer *ringEmitter;

- (void) touchAtPosition:(CGPoint)position;

@end