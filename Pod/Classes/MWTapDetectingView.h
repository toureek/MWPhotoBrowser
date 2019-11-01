//
//  UIViewTap.h
//  Momento
//
//  Created by Michael Waterfall on 04/11/2009.
//  Copyright 2009 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MWTapDetectingViewDelegate <NSObject>
@optional
- (void)view:(UIView *)view singleTapDetected:(UITouch *)touch;
- (void)view:(UIView *)view doubleTapDetected:(UITouch *)touch;
- (void)view:(UIView *)view tripleTapDetected:(UITouch *)touch;
#pragma mark - Appending new gesture
//- (void)imageView:(UIImageView *)imageView dragAndDropDetected:(UIPanGestureRecognizer *)panGesture;
@end

@interface MWTapDetectingView : UIView {}

@property (nonatomic, weak) id <MWTapDetectingViewDelegate> tapDelegate;

@end
