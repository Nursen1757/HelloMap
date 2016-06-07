//
//  AppDelegate.h
//  HelloMap
//
//  Created by mac on 16/6/7.
//  Copyright © 2016年 Nursen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Header.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    
    BMKMapManager* _mapManager;
}

@property (strong, nonatomic) UIWindow *window;


@end

