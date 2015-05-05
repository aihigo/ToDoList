//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by zengfei on 15/5/4.
//  Copyright (c) 2015年 zengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
