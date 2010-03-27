//
//  MGame.h
//  iCodeTic
//
//  Created by Andrew Hoos on 3/25/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#define PLAYER_ONE YES
#define PLAYER_TWO NO

@interface MGame : NSObject
{
	void * board;
	BOOL currentPlayer;
}

@end
