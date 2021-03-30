//
//  NSExceptionCatch.h
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSExceptionCatch : NSObject

+(NSException* _Nullable)tryBlock:(void(NS_NOESCAPE ^_Nonnull)(void))tryBlock;

@end
