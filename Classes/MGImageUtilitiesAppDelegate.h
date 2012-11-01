//
//  MGImageUtilitiesAppDelegate.h
//  MGImageUtilities
//
//  Created by Matt Gemmell on 04/07/2010.
//  Copyright Instinctive Code 2010.
//

#import <UIKit/UIKit.h>

@interface MGImageUtilitiesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UIImageView *originalView;
	UIImageView *resultView;
	UISegmentedControl *methodControl;
	UISwitch *tintSwitch;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UIImageView *originalView;
@property (nonatomic, strong) IBOutlet UIImageView *resultView;
@property (nonatomic, strong) IBOutlet UISegmentedControl *methodControl;
@property (nonatomic, strong) IBOutlet UISwitch *tintSwitch;

- (IBAction)methodChanged:(id)sender;
- (IBAction)tintChanged:(id)sender;

- (void)updateResult;

@end

