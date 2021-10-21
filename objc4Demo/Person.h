//
//  Person.h
//  objc4Demo
//
//  Created by GhostClock on 2021/10/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic, copy) NSString *gc_name;
@property (nonatomic, copy) NSString *hello_name;
@property (nonatomic, copy) NSArray *gc_list;

- (void)sayHello;
- (void)play;
+ (void)sayHi;

@end

NS_ASSUME_NONNULL_END
