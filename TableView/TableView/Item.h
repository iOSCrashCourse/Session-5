//
//  Item.h
//  TableView
//
//  Created by Janum Trivedi on 3/10/15.
//  Copyright (c) 2015 Janum Trivedi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject

@property (nonatomic, strong) NSString* itemTitle;
@property (nonatomic, strong) NSDate* dateCreated;
@property (nonatomic, assign) BOOL completed;

// Custom initializer to create an Item object.
- (instancetype)initWithTitle:(NSString *)title dateCreated:(NSDate *)date;

@end
