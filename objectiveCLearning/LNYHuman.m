//
//  LNYHuman.m
//  objectiveCLearning
//
//  Created by Lenny on 3/14/25.
//


#import "LNYHuman.h"
#import <Foundation/Foundation.h>

// The following is the implementation of the LNYHuman interface
@implementation LNYHuman

- (void)printTheseNumber:(id)referenceNumber otherNumber:(int)staticNumber {
    NSLog(@"hello there");
}

- (void)howOldAmI {
    NSLog(@"Very Old!");
}

// In objective-c, public or private methods are not defined using public/private keywords but they are defined by if the method is defined in the class's interface.  If the method is declared in both the interface and the implementation then it is available as a public method on the class.  However, if the method only appears in the implementation, it is only indeded for internal use by that class.
- (void)privateSayHello {
    NSLog(@"This is a private method");
}

+ (void)sayYouAreHuman {
    NSLog(@"I am a human!");
}

@end

