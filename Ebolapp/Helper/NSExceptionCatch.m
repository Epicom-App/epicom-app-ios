//
//  NSExceptionCatch.m
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

#import "NSExceptionCatch.h"

@implementation NSExceptionCatch

+(NSException* _Nullable)tryBlock:(void(NS_NOESCAPE ^_Nonnull)(void))tryBlock {
    @try {
        tryBlock();
    }
    @catch (NSException *exception) {
        return exception;
    }
    return nil;
}

@end
