//
//  XYZToDOItem.h
//  ToDoList
//
//  Created by Sushmit Kumar on 2/3/14.
//  Copyright (c) 2014 Sushmit Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDOItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
