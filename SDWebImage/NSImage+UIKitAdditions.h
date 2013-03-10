//
//  NSImage+UIKitAdditions.h
//  River
//
//  Created by Dan Palmer on 27/02/2013.
//  Copyright (c) 2013 Dan Palmer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSImage (UIKitAdditions)

@property (nonatomic, readonly) CGFloat scale;

- (CGImageRef)CGImage;
- (CGFloat)scale;

@end
