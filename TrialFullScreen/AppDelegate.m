//
//  AppDelegate.m
//  TrialFullScreen
//
//  Created by Barijaona Ramaholimihaso on 31/08/2014.
//  Copyright (c) 2014 Barijaona Ramaholimihaso. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
	self.web.mainFrameURL = @"http://sindresorhus.com/screenfull.js/";
}

@end
