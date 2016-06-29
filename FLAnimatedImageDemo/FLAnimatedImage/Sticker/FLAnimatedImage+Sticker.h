//
//  FLAnimatedImage+Sticker.h
//  FLAnimatedImageDemo
//
//  Created by nelson on 2016. 6. 29..
//  Copyright © 2016년 Flipboard. All rights reserved.
//

#import "FLAnimatedImage.h"

@interface FLAnimatedImage (Sticker)

+ (FLAnimatedImage *)animatedImageWithStickerData:(NSData *)data posterIndex:(NSInteger)posterIndex;

@end
