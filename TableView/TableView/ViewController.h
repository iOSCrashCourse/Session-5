//
//  ViewController.h
//  TableView
//
//  Created by Janum Trivedi on 2/26/15.
//  Copyright (c) 2015 Janum Trivedi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView* tableView;
@property (nonatomic, strong) IBOutlet UITextField* itemTextField;

@property (nonatomic, strong) NSMutableArray* items;

- (IBAction)addNewItem:(id)sender;

@end

