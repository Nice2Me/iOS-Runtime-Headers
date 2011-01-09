/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString;



@interface GMMDocumentInfo : PBCodable 
{
    NSMutableArray *_parseErrors;
    NSString *_name;
    NSString *_docId;
    NSString *_snippet;
    NSString *_description;
    NSString *_metadata;
    NSString *_author;
    NSString *_attributionUrl;
    NSInteger _numberOfPlacemarks;
    BOOL _hasNumberOfPlacemarks;
}

@property(readonly) NSInteger parseErrorsCount;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasDocId;
@property(readonly) BOOL hasSnippet;
@property(readonly) BOOL hasDescription;
@property(readonly) BOOL hasMetadata;
@property(readonly) BOOL hasAuthor;
@property(readonly) BOOL hasAttributionUrl;
@property(readonly) BOOL hasNumberOfPlacemarks; /* unknown property attribute: V_hasNumberOfPlacemarks */
@property NSInteger numberOfPlacemarks; /* unknown property attribute: V_numberOfPlacemarks */
@property(retain) NSString *attributionUrl; /* unknown property attribute: V_attributionUrl */
@property(retain) NSString *author; /* unknown property attribute: V_author */
@property(retain) NSString *metadata; /* unknown property attribute: V_metadata */
@property(retain) NSString *description; /* unknown property attribute: V_description */
@property(retain) NSString *snippet; /* unknown property attribute: V_snippet */
@property(retain) NSString *docId; /* unknown property attribute: V_docId */
@property(retain) NSString *name; /* unknown property attribute: V_name */
@property(retain) NSMutableArray *parseErrors; /* unknown property attribute: V_parseErrors */


- (id)init;
- (void)dealloc;
- (NSInteger)parseErrorsCount;
- (void)setParseError:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)parseErrorAtIndex:(NSUInteger)arg1;
- (void)addParseError:(id)arg1;
- (BOOL)hasName;
- (BOOL)hasDocId;
- (BOOL)hasSnippet;
- (BOOL)hasDescription;
- (BOOL)hasMetadata;
- (BOOL)hasAuthor;
- (BOOL)hasAttributionUrl;
- (void)setNumberOfPlacemarks:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (BOOL)hasNumberOfPlacemarks;
- (NSInteger)numberOfPlacemarks;
- (id)attributionUrl;
- (void)setAttributionUrl:(id)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setDescription:(id)arg1;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)parseErrors;
- (void)setParseErrors:(id)arg1;

@end