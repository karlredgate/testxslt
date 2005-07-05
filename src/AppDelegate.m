//
//  NSDocumentControllerNotificationCategory.m
//  TestXSLT
//
//  Created by Marc Liyanage on Sat Mar 29 2003.
//  Copyright (c) 2003 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"
#import <Foundation/NSDebug.h>

@implementation AppDelegate


- (id)init {

	self = [super init];
	if (!self) return nil;

	NSZombieEnabled = YES;

	NSString *templateXML = [NSString stringWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"template" ofType:@"xml"]];
	NSString *templateXSLT = [NSString stringWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"template" ofType:@"xslt"]];
	NSLog(@"AppDelegate init");
    NSDictionary *appDefaults = [NSDictionary dictionaryWithObjectsAndKeys:
		@"YES", @"enableWellformedCheck",
		@"YES", @"enableSyntaxAnalysis",
		templateXML, @"templateXML",
		templateXSLT, @"templateXSLT",
		nil];
    [[NSUserDefaults standardUserDefaults] registerDefaults:appDefaults];
		
	return self;
	
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
	[prefsWindow orderOut:self];
}


@end
