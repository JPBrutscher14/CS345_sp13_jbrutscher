//
//  Game.h
//  Bowling Kata
//
//  Created by Josh Brutscher on 2/12/13.
//  Copyright (c) 2013 CS345. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Game : NSObject
-(void)rollWithPinCount:(int)pins;
//called each time the player rolls a ball.The argument is the number of pins knocked down.
-(int)score;
//called only at the very end of the game. It returns the total score for that game.
@end
