//
//  Tracker.h
//  ADLIBrRAT
//
//  Created by YongSun Kim on 2014. 7. 16..
//  Copyright (c) 2014년 mocoplex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Tracker : NSObject
{
    NSString *user;
    BOOL debugMode;
}

@property (nonatomic, strong) NSString* user;
@property (nonatomic) BOOL debugMode;

+ (NSString *)getVersion;

+ (Tracker *)sharedSingletonClass;

- (void)initialize:(NSString *) _ratApiKey;
- (void)tagInit:(NSURL *) url;

- (void)view:(NSDictionary *)vdic;
- (void)cart:(NSDictionary *)vdic;
- (void)buy:(NSDictionary *)vdic;
- (void)customTag:(NSString *)tagName value:(NSDictionary *)vdic;

@end