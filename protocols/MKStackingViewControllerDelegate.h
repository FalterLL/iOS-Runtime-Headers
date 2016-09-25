/* Generated by RuntimeBrowser.
 */

@protocol MKStackingViewControllerDelegate <NSObject>

@optional

- (void)stackingViewController:(MKStackingViewController *)arg1 didLayoutViewControllers:(NSSet *)arg2 remaningViewControllers:(NSSet *)arg3;
- (void)stackingViewController:(MKStackingViewController *)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (float)stackingViewController:(MKStackingViewController *)arg1 heightForSeparatorBetweenUpperViewController:(UIViewController *)arg2 andLowerViewController:(UIViewController *)arg3;
- (float)stackingViewController:(MKStackingViewController *)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (float)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;

@end