//
//  EasyPRViewController.h
//  OCR
//
//  Created by zeb－Apple on 16/11/25.
//  Copyright © 2016年 zeb－Apple. All rights reserved.
//

//#ifdef __cplusplus
//#import <opencv2/opencv.hpp>
//#endif
//#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "VideoProcess.h"
//#endif
#import <opencv2/opencv.hpp>

@interface EasyPRViewController : UIViewController<UIImagePickerControllerDelegate,
UINavigationControllerDelegate, UIPopoverControllerDelegate,UIToolbarDelegate,AVCaptureVideoDataOutputSampleBufferDelegate> {
    UIPopoverController *popoverController;
    UIImageView *imageView;
    UIImageView *textView;
    UILabel *textLabel;
    UIImage* image;
    cv::CascadeClassifier faceCascade;
    cv::Mat source_image;
    BOOL Camera_State;
    cv::Mat RGB;
}
@property(nonatomic,retain)VideoProcess *m_VideoProcess;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIImageView *textView;
@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *loadButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;

-(IBAction)loadButtonPressed:(id)sender;
-(IBAction)loadButtonCameraPressed:(id)sender;
-(IBAction)saveButtonPressed:(id)sender;
-(UIImage*)plateRecognition:(cv::Mat&)src;


@end
