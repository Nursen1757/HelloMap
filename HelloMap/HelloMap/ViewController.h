//
//  ViewController.h
//  HelloMap
//
//  Created by mac on 16/6/7.
//  Copyright © 2016年 Nursen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Header.h"
@interface ViewController : UIViewController <BMKMapViewDelegate>
{
    BMKMapView *_mapView;
}

@end

