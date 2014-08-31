//
//  AppDelegate.h
//  TrialFullScreen
//
//  Created by Barijaona Ramaholimihaso on 31/08/2014.
//  Copyright (c) 2014 Barijaona Ramaholimihaso. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet WebView *web;

@end
