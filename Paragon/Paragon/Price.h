//
//  Price.h
//  Paragon
//
//  Created by Richie Davis on 7/15/15.
//  Copyright (c) 2015 Davis Development. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PGMappableObject.h"

@interface Price : NSObject <PGMappableObject>

@property (nonatomic, copy) NSString *currency;
@property (nonatomic, strong) NSNumber *amount;

@end
