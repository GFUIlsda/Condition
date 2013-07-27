//
//  Cond.h
//  Condition
//
//  Created by SkyLORD on 15.07.13.
//  Copyright (c) 2013 MacBook Air. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Cond : NSObject

{
	BOOL state;
	NSString *temperature;
	NSInteger needTemperature;
}

- (BOOL)ifAllGood;
- (void)nowTemperature:(NSString *)aTemperature;
- (void)needTemperature:(NSInteger)aneedTemperature;
@end
