//
//  UIImage+Tint.h
//
//  Created by Matt Gemmell on 04/07/2010.
//  Copyright 2010 Instinctive Code.
//

#import <UIKit/UIKit.h>

@interface UIImage (MGTint)

- (UIImage *)mg_imageTintedWithColor:(UIColor *)color;
- (UIImage *)mg_imageTintedWithColor:(UIColor *)color fraction:(CGFloat)fraction;
- (UIImage *)mg_imageTintedWithColor:(UIColor *)color fraction:(CGFloat)fraction blendMode:(CGBlendMode)blendMode;

@end
