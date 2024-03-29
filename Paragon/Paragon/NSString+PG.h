//
//  NSString+PG.h
//  Paragon
//
//  Created by Richie Davis on 7/15/15.
//  Copyright (c) 2015 Davis Development. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (PG)

- (BOOL)hasSubstring:(NSString *)substring;
+ (NSString *)stringByAppendingParams:(NSDictionary *)params toUrl:(NSURL *)url;
+ (NSString *)stringByAppendingParams:(NSDictionary *)params toString:(NSString *)url;

@end
