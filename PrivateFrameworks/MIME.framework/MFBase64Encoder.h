/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFBase64Encoder : MFBaseFilterDataConsumer 
{
    char *_table;
    NSUInteger _left;
    unsigned char _leftovers[3];
    NSUInteger _line;
    NSUInteger _lineBreak;
    BOOL _padChar;
}

@property BOOL allowSlash;
@property BOOL padChar;
@property NSUInteger lineBreak;


- (NSInteger)appendData:(id)arg1;
- (void)done;
- (void)setStandardLineBreak;
- (void)setAllowSlash:(BOOL)arg1;
- (void)setPadChar:(BOOL)arg1;
- (void)setLineBreak:(unsigned long)arg1;
- (unsigned long)lineBreak;
- (BOOL)allowSlash;
- (BOOL)padChar;
- (id)initWithConsumers:(id)arg1;

@end