//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Dhruval's MacBook on 12/13/13.
//  Copyright (c) 2013 Dhruval Darji. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject



@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;



@end
