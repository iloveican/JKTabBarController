//
//  JKTabBarItem.h
//  JKTabBarControllerDemo
//
//  Created by Jackie CHEUNG on 13-6-7.
//  Copyright (c) 2013年 Weico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JKTabBarItem : UIBarItem
/* Selected and unselected images are autogenerated from the image argument. For full control of
 the selected and unselected images, use -setFinishedSelectedImage:withFinishedUnselectedImage:.
 */
- (id)initWithTitle:(NSString *)title image:(UIImage *)image; // init a JKTabBarItemTypeButton type item
- (id)initWithCustomView:(UIView *)customView; // init a JKTabBarItemTypeCustomView type item

@property(nonatomic,copy) NSString *badgeValue;    // default is nil

/* UIKit will not provide any automatic treatment to finished images. You must provide finished selected
 and unselected images in matching pairs for good results. Note that these methods are not tagged
 UI_APPEARANCE_SELECTOR and do not participate in the UIAppearance Proxy API.
 */
- (void)setFinishedSelectedImage:(UIImage *)selectedImage withFinishedUnselectedImage:(UIImage *)unselectedImage;
- (UIImage *)finishedSelectedImage;
- (UIImage *)finishedUnselectedImage;

/* To set item label text attributes use the appearance selectors available on the superclass, UIBarItem.
 
 Use the following to tweak the relative position of the label within the tab button (for handling visual centering corrections if needed because of custom text attributes)
 */
- (void)setTitlePositionAdjustment:(UIOffset)adjustment UI_APPEARANCE_SELECTOR;
- (UIOffset)titlePositionAdjustment UI_APPEARANCE_SELECTOR;
@end