//
//  ReadingPVC.h
//  CoreTextHelper
//
//  Created by 马定坤 on 2020/7/2.
//  Copyright © 2020 mdkmdk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReadingVC.h"
NS_ASSUME_NONNULL_BEGIN

@interface ReadingPVC : UIViewController<UIPageViewControllerDataSource>
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (nonatomic ,strong) ReadingVC *currentVC;

@end

NS_ASSUME_NONNULL_END
