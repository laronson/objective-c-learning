//
//  LNYHuman.h
//  objectiveCLearning
//
//  Created by Lenny on 3/14/25.
//

#import <Foundation/Foundation.h>

//Files with the .h suffix are typically used as implementation files
//.h files are typlically described as "header files"


// The following is a definition of an interface that could be used to describe a Human class.
// It is standard practice to prefix your classes & interfaces with three letters to ensure that your class name is unique
@interface LNYHuman : NSObject

//These properties are declared within an interface as NSString types.  Because NSString is simply an Objective-C object, we must store their references as pointers and therefore require the *
@property NSString *firstName;
@property NSString *lastName;

// We can store year of birth as a int primitive and can therefore be stored as a scalar value.  Because of this, we do not need to store yearOfBirth as a pointer and do not need the *.
// We could have also defined this property as an NSNumber which would make yearOfBirth an object which would then require us to define the property as a pointer.
@property int yearOfBirth;

//We can define properties as readonly which makes them immutable
@property (readonly) NSString *ssn;

// The following is the definition of an instance method that can be called on every instance that is created that adheres to this interface.  This is defined by the (-) sign before the method declaration
- (void) howOldAmI;

// This is another instance method defined with two variables.  When calling this function, the function would be called with the variable names in the function name like: printTheseNumber:otherNumber
- (void) printTheseNumber:(NSNumber*)referenceNumber otherNumber:(int)staticNumber;

// This is a class method that should be defined on any implementation of this interface.  It will be available on the class itself rather than on an instance of the class.
// Typically, class methods are used to create factory methods that allow for different instantiations of the class itself
+ (void) sayYouAreHuman;
@end
