//
//  CityViewController.h
//  AddressViewDemo
//
//  Created by damai on 2019/1/7.
//  Copyright © 2019 personal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CityViewController : UIViewController

@property (nonatomic,copy)void(^selectString)(NSString *string,NSString *strID);
@property (nonatomic,copy)NSString *currentCityString;

@end
