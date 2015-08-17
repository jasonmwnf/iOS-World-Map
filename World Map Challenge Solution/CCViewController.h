//
//  CCViewController.h
//  World Map Challenge Solution
//
//  Created by Jason Williams on 2015-08-17.
//  Copyright (c) 2015 Screaming Goat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *globeImageView;


@end
