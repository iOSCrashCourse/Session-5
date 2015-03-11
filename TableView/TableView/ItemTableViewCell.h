//
//  ItemTableViewCell.h
//  TableView
//
//  Created by Janum Trivedi on 3/10/15.
//  Copyright (c) 2015 Janum Trivedi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ItemTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel* itemTitle;
@property (nonatomic, strong) IBOutlet UILabel* itemDateCreated;
@property (nonatomic, strong) IBOutlet UIView* checkmarkBox;

@end
