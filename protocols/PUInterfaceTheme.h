/* Generated by RuntimeBrowser.
 */

@protocol PUInterfaceTheme <NSObject>

@required

- (UIColor *)airPlayControllerBackgroundColor;
- (UIColor *)airPlayVideoPlaceholderBackgroundColor;
- (UIImage *)airPlayVideoPlaceholderIcon;
- (UIColor *)airPlayVideoPlaceholderIconTintColor;
- (UIFont *)airPlayVideoPlaceholderMessageFont;
- (UIColor *)airPlayVideoPlaceholderMessageTextColor;
- (UIFont *)airPlayVideoPlaceholderTitleFont;
- (UIColor *)airPlayVideoPlaceholderTitleTextColor;
- (UIColor *)albumBadgeInTitleColor;
- (UIColor *)albumListBackgroundColor;
- (float)albumListDisabledAlbumStackViewAlpha;
- (float)albumListDisabledAlbumTitleAlpha;
- (UIFont *)albumListSubtitleLabelFont;
- (UIFont *)albumListTitleLabelFont;
- (NSAttributedString *)attributedStringForCloudFeedGroupHeaderWithText:(NSString *)arg1;
- (UIColor *)badgeOverThumbnailColor;
- (UIColor *)bannerBackgroundColor;
- (float)bannerHeight;
- (UIColor *)cloudFeedBackgroundColor;
- (NSDictionary *)cloudFeedDefaultTextAttributes;
- (NSDictionary *)cloudFeedEmphasizedTextAttributes;
- (NSDictionary *)cloudFeedInteractionLargerTextAttributes;
- (NSDictionary *)cloudFeedInteractionTextAttributes;
- (NSDictionary *)cloudFeedInvitationSubtitleTextAttributes;
- (NSDictionary *)cloudFeedInvitationTitleTextAttributes;
- (NSDictionary *)cloudFeedLargerDefaultTextAttributes;
- (NSDictionary *)cloudFeedLargerEmphasizedTextAttributes;
- (UIImage *)cloudFeedMiniChevronImage;
- (UIImage *)cloudFeedSectionHeaderBackgroundImage;
- (UIColor *)cloudFeedSeparatorColor;
- (float)cloudFeedSeparatorHeight;
- (NSDictionary *)cloudFeedWhiteDefaultTextAttributes;
- (NSDictionary *)cloudFeedWhiteEmphasizedTextAttributes;
- (UIFont *)cloudWelcomeViewTitleLabelFontForSize:(float)arg1;
- (NSString *)commentsButtonStringForCount:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })commentsButtonTextInset;
- (UIImage *)compactLoadErrorIcon;
- (void)configureAlbumListDeleteButton:(UIButton *)arg1;
- (void)configureAlbumListEmptyStackViewPadPhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListEmptyStackViewPhonePhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListPinButton:(UIButton *)arg1;
- (void)configureAlbumListStackViewPadPhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListSubtitleLabel:(UILabel *)arg1 asOpaque:(BOOL)arg2;
- (void)configureAlbumListTitleLabel:(UILabel *)arg1 asOpaque:(BOOL)arg2;
- (void)configureAlbumListTitleTextField:(UITextField *)arg1 asOpaque:(BOOL)arg2;
- (void)configureBannerLabel:(UILabel *)arg1;
- (void)configureBannerStackView:(PUStackView *)arg1;
- (void)configureCloudFeedCommentButton:(UIButton *)arg1 withCount:(int)arg2;
- (void)configureCloudFeedInvitationReplyButton:(UIButton *)arg1;
- (void)configureCloudFeedStackView:(PUStackView *)arg1 withStackSize:(struct CGSize { float x1; float x2; })arg2;
- (void)configureEditPluginListCellLabel:(UILabel *)arg1;
- (void)configureEditPluginListNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginUserDefaultsAccessorySwitch:(UISwitch *)arg1;
- (void)configureEditPluginUserDefaultsCell:(UITableViewCell *)arg1 withIcon:(UIImage *)arg2 title:(NSString *)arg3;
- (void)configureEditPluginUserDefaultsTableView:(UITableView *)arg1;
- (void)configureMapViewAnnotationCountLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionGlobalFooterSubtitleLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionGlobalFooterTitleLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionHeaderDateLabel:(UILabel *)arg1 forStyle:(int)arg2;
- (void)configurePhotoCollectionHeaderLocationsLabel:(UILabel *)arg1 forStyle:(int)arg2;
- (void)configurePhotoCollectionHeaderTitleLabel:(UILabel *)arg1 forStyle:(int)arg2;
- (void)configureProgressIndicatorMessageLabel:(UILabel *)arg1;
- (void)configureSearchSubtitleLabel:(UILabel *)arg1;
- (void)configureSearchTitleLabel:(UILabel *)arg1;
- (void)configureSlideshowMusicHeaderTitleLabel:(UILabel *)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentCommentsButtonImageInset;
- (UIColor *)contentCommentsHiddenButtonImageColor;
- (NSDictionary *)contentCommentsHiddenButtonTextAttributes;
- (UIColor *)contentCommentsShownButtonImageColor;
- (NSDictionary *)contentCommentsShownButtonTextAttributes;
- (UIButton *)createCloudFeedCommentButton;
- (int)defaultKeyboardAppearance;
- (unsigned int)emptyPlaceholderStyle;
- (UIColor *)emptyPlaceholderViewBackgroundColor;
- (UIColor *)folderCellBackgroundColor;
- (UIColor *)gridViewCellBannerBackgroundColor;
- (UIImage *)gridViewCellBannerBackgroundImage;
- (UIColor *)gridViewCellBannerDestructiveTextColor;
- (UIColor *)gridViewCellBannerTextColor;
- (UIFont *)gridViewCellBannerTextFont;
- (int)photoBrowserBarStyle;
- (UIColor *)photoBrowserChromeHiddenBackgroundColor;
- (UIColor *)photoBrowserChromeVisibleBackgroundColor;
- (UIFont *)photoBrowserPhotoPrimaryTitleFont;
- (UIFont *)photoBrowserPhotoSubtitleFont;
- (int)photoBrowserStatusBarStyle;
- (UIFont *)photoBrowserTimeTitleFont;
- (UIColor *)photoBrowserTitleViewTextColor;
- (UIFontDescriptor *)photoCollectionGlobalFooterSubtitleLabelFontDescriptor;
- (UIFontDescriptor *)photoCollectionGlobalFooterTitleLabelFontDescriptor;
- (NSDictionary *)photoCollectionHeaderActionButtonAttributesForStyle:(int)arg1;
- (UIFontDescriptor *)photoCollectionHeaderActionButtonFontDescriptorForStyle:(int)arg1;
- (UIColor *)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned int)arg1;
- (UIFontDescriptor *)photoCollectionHeaderDateLabelFontDescriptorForStyle:(int)arg1;
- (UIImage *)photoCollectionHeaderLocationIconForStyle:(int)arg1;
- (struct UIOffset { float x1; float x2; })photoCollectionHeaderLocationIconOffsetForStyle:(int)arg1;
- (UIFontDescriptor *)photoCollectionHeaderLocationLabelFontDescriptorForStyle:(int)arg1;
- (UIFontDescriptor *)photoCollectionHeaderTitleLabelFontDescriptorForStyle:(int)arg1;
- (float)photoCollectionToolbarIconToTextSpacerWidth;
- (float)photoCollectionToolbarTextTitleSpacerWidth;
- (UIColor *)photoCollectionViewBackgroundColor;
- (int)photoCollectionViewBackgroundColorValue;
- (UIColor *)photoCollectionViewSecondScreenBackgroundColor;
- (UIColor *)photoEditingActiveFilterTitleColor;
- (UIColor *)photoEditingAdjustmentsBarBackgroundColor;
- (UIColor *)photoEditingAdjustmentsBarHighlightColor;
- (UIColor *)photoEditingAdjustmentsBarMainColor;
- (UIColor *)photoEditingAdjustmentsBarPlayheadColor;
- (UIColor *)photoEditingAdjustmentsModeLabelColor;
- (UIFont *)photoEditingAdjustmentsModeLabelFont;
- (UIFont *)photoEditingAdjustmentsModePickerFont;
- (UIColor *)photoEditingAdjustmentsModePickerValueColor;
- (UIFont *)photoEditingAdjustmentsModePickerValueFont;
- (UIColor *)photoEditingAdjustmentsToolBackgroundColor;
- (UIColor *)photoEditingBackgroundColor;
- (UIColor *)photoEditingCropButtonColor;
- (UIColor *)photoEditingCropButtonSelectedColor;
- (UIColor *)photoEditingCropTiltWheelColor;
- (UIFont *)photoEditingCropTiltWheelFont;
- (UIColor *)photoEditingCropToggleButtonColor;
- (UIFont *)photoEditingCropToggleButtonFont;
- (UIFont *)photoEditingFilterTitleFont;
- (UIColor *)photoEditingInactiveFilterTitleColor;
- (UIColor *)photoEditingIrisDisabledColor;
- (UIColor *)photoEditingIrisEnabledColor;
- (UIColor *)photoEditingOverlayBadgeBackgroundColor;
- (UIColor *)photoEditingOverlayBadgeColor;
- (UIFont *)photoEditingOverlayBadgeFont;
- (UIFont *)photoEditingToolbarButtonCompactFont;
- (UIFont *)photoEditingToolbarButtonNormalFont;
- (UIColor *)photoEditingToolbarDestructiveButtonColor;
- (UIColor *)photoEditingToolbarMainButtonColor;
- (UIColor *)photoEditingToolbarSecondaryButtonColor;
- (UIColor *)photoEditingTooltipColor;
- (UIFont *)photoEditingTooltipFont;
- (UIColor *)playbackTimeLabelBackgroundColor;
- (UIFont *)playbackTimeLabelFont;
- (UIColor *)playheadBackgroundColor;
- (UIColor *)playheadColor;
- (UIImage *)regularLoadErrorIcon;
- (UIColor *)scrubberPlaceholderColor;
- (UIColor *)searchContentViewBackgroundColor;
- (NSDictionary *)searchDefaultAttributes;
- (NSDictionary *)searchHighlightedAttributes;
- (UIFont *)searchSubtitleLabelFont;
- (UIColor *)searchSubtitleTextColor;
- (UIFont *)searchTitleLabelFont;
- (UIFont *)sharedAlbumCommentCardAlbumTitleFont;
- (UIFont *)sharedAlbumCommentCardButtonFont;
- (UIFont *)sharedAlbumCommentCardTextFont;
- (UIFont *)sharedAlbumCommentCardTitleFont;
- (UIImage *)slideshowAirplayImage;
- (UIColor *)slideshowChromeBarTintColor;
- (UIColor *)slideshowMusicHeaderBackgroundColor;
- (UIColor *)slideshowMusicHeaderTextColor;
- (UIColor *)slideshowSeparatorColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })slideshowSeparatorInset;
- (UIColor *)tintColorForBarStyle:(int)arg1;
- (UIColor *)toolbarAirPlayButtonColor;
- (UIColor *)toolbarCommentsHiddenButtonImageColor;
- (NSDictionary *)toolbarCommentsHiddenButtonTextAttributes;
- (UIColor *)toolbarCommentsShownButtonImageColor;
- (NSDictionary *)toolbarCommentsShownButtonTextAttributes;
- (UIImage *)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (UIImage *)topLevelNavigationBarButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (UIColor *)topLevelNavigationBarButtonTintColor;
- (struct UIOffset { float x1; float x2; })topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(int)arg1;
- (NSDictionary *)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned int)arg1;
- (UIImage *)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (NSDictionary *)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned int)arg1;
- (int)topLevelStatusBarStyle;
- (UIColor *)videoEditingBackgroundColor;
- (UIFont *)videoEditingToolbarButtonNormalFont;
- (UIColor *)videoEditingToolbarDestructiveButtonColor;
- (UIColor *)videoEditingToolbarMainButtonColor;
- (UIColor *)videoEditingToolbarSecondaryButtonColor;
- (UIColor *)videoEditingToolbarToolButtonColor;
- (float)videoPaletteBottomMargin;
- (float)videoPaletteSideMargin;
- (UIColor *)videoScrubberTileBackgroundColor;
- (UIFont *)wallpaperCategoryLabelFont;

@end