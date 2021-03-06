/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShape : OADGraphic {
    OADShapeGeometry * mGeometry;
    OADTextBody * mTextBody;
}

- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)createPresetGeometryWithShapeType:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)flattenProperties;
- (id)geometry;
- (id)init;
- (BOOL)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setGeometry:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setTextBody:(id)arg1;
- (id)shapeProperties;
- (id)shapeStyle;
- (id)textBody;
- (int)type;

@end
