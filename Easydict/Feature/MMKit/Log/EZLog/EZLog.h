//
//  EZLog.h
//  Easydict
//
//  Created by tisfeng on 2022/12/21.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZWindowManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZLog : NSObject

+ (void)logWindowAppear:(EZWindowType)windowType;
+ (void)logEventWithName:(NSString *)name parameters:(nullable NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
