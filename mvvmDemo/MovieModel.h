//
//  MovieModel.h
//  mvvmDemo
//
//  Created by 张家欢 on 16/7/18.
//  Copyright © 2016年 zhangjiahuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MovieModel : NSObject

@property (strong, nonatomic) NSString *movieName;
@property (strong, nonatomic) NSString *year;
@property (strong, nonatomic) NSURL *imageUrl;
@property (strong, nonatomic) NSString *detailUrl;
@end
