/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitCodableRelationshipEvent : PBCodable <NSCopying> {
    int  _anchor;
    double  _date;
    struct { 
        unsigned int anchor : 1; 
        unsigned int date : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic) int anchor;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (int)anchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAnchor;
- (BOOL)hasDate;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAnchor:(int)arg1;
- (void)setDate:(double)arg1;
- (void)setHasAnchor:(BOOL)arg1;
- (void)setHasDate:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end