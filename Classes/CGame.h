//
//  CGame.h
//  iCodeTic
//
//  Created by Andrew Hoos on 3/25/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VBoard.h"
#import "MGame.h"

@interface CGame : NSObject
{
	VBoard * boardView;
	MGame * game;
	UIButton * newGame;
}

-(void) touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;

-(IBAction) newGame: (id) sender;

-(BOOL)hasWon: (BOOL) player;

-(void)gameWon: (BOOL) player;


@end
