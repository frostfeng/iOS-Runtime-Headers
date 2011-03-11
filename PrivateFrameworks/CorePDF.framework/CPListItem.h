/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
    CPList *list;
    int number;
    struct __CFArray { } *paragraphs;
}

@property int number;
@property(retain) CPList * list;


- (void)dispose;
- (void)setNumber:(int)arg1;
- (id)list;
- (int)number;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (void)setList:(id)arg1;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (void)addParagraph:(id)arg1;

@end