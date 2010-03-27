//
//  iCodeTicAppDelegate.m
//  iCodeTic
//
//  Created by Andrew Hoos on 3/25/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "iCodeTicAppDelegate.h"

@implementation iCodeTicAppDelegate

@synthesize window;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    

    // Override point for customization after application launch
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [window release];
    [super dealloc];
}


@end
