/* Generated by RuntimeBrowser.
 */

@protocol MDSearchQueryDelegate <NSObject>

@required

- (void)searchQuery:(MDSearchQuery *)arg1 didReturnItems:(NSArray *)arg2;

@optional

- (void)searchQuery:(MDSearchQuery *)arg1 didFailWithError:(NSError *)arg2;
- (void)searchQuery:(MDSearchQuery *)arg1 statusChanged:(unsigned int)arg2;

@end
