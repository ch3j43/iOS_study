//
//  CMViewController.h
//  SqlLiteStudy
//
//  Created by sang seok lim on 5/26/14.
//  Copyright (c) 2014 HUCHCODE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface CMViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;

- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;
- (IBAction)textFieldReturn:(id)sender;

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *contactDB;
@end
