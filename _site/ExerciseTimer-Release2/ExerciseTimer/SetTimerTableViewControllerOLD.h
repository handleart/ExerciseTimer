//
//  SetTimerTableViewController.h
//  ExerciseTimer
//
//  Created by Art Mostofi on 7/20/15.
//  Copyright (c) 2015 Art Mostofi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "aTimer.h"

@interface SetTimerTableViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

- (IBAction)unwindToSetTimer:(UIStoryboardSegue *)segue;


@property BOOL bNotFirstTime;
//@property float iVolume;
@property (assign) BOOL saveViewIsShowing;
@property (assign) BOOL addViewIsShowing;
@property aTimer *tmpTimer;

@end
