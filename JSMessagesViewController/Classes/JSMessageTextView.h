//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2013 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import "JSDismissiveTextView.h"

/**
 *  An instance of JSMessageTextView is a means for displaying an input text view above a keyboard as a subview of the keyboard's inputAccessoryView. It is used for composing messages.
 */
@interface JSMessageTextView : JSDismissiveTextView

/**
 *  Returns an unsigned integer describing the number of lines of text contained in the text view.
 *
 *  @return The number of lines of text in the text view.
 */
- (NSUInteger)numberOfLinesOfText;

/**
 *  Returns a constant describing the maximum number of characters that can fit on a single line of the text view.
 *
 *  @return The maximum number of characters per line in the text view.
 */
+ (NSUInteger)maxCharactersPerLine;

/**
 *  Returns an unsigned integer describing the number of lines necessary to display the given text in the text view.
 *
 *  @param text The text to be displayed in the text view.
 *
 *  @return The number of lines needed to display the given text.
 */
+ (NSUInteger)numberOfLinesForMessage:(NSString *)text;

@end