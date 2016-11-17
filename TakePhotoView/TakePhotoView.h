//
//  TakePhotoView.h
//  TakePhotoViewDemo
//
//  Created by cst on 16/11/17.
//  Copyright © 2016年 jiaZhengHe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TZImagePickerController.h"



//点击照相或者获取相册图片的View

@interface TakePhotoView : UIView<TZImagePickerControllerDelegate,UICollectionViewDataSource,UICollectionViewDelegate,UIActionSheetDelegate,UIImagePickerControllerDelegate>

//@property (nonatomic,strong) NSMutableArray *selectedPhotos;
@property (nonatomic,weak) UIViewController *ctl;


//获取选择了的图片
-(NSArray *)getSelectImgs;


@end
