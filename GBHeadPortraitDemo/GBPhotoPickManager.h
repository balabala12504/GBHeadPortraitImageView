//
//  GBPhotoPickManager.h
//  GBHeadPortraitDemo
//
//  Created by Lucas on 2017/6/5.
//  Copyright © 2017年 Lucas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    kPickerTypePhoto,
    kPickerTypeCamera,
} kPickerType;

typedef void(^ImageBlock)(NSDictionary *infoDict, BOOL isCancel);

@interface GBPhotoPickManager : NSObject

+ (instancetype)shareInstance;

/**
 调用系统UIImagePickerController

 @param pickerType Photo和Camera
 @param currentVC 当前调用的VC
 @param imageBlock 回调NSDictionary和BOOL
 */
- (void)presentPicker:(kPickerType)pickerType currentVC:(UIViewController *)currentVC imageBlock:(ImageBlock)imageBlock;

@end
