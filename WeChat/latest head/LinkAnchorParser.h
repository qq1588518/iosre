//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TextParser.h"

@class LinkWeAppJumpWrap, NSString, UIColor;

@interface LinkAnchorParser : TextParser
{
    NSString *_url;
    NSString *_sourceUrl;
    UIColor *_highlightedColor;
    _Bool _bBackgroundEnabled;
    unsigned long long _jumpType;
    LinkWeAppJumpWrap *_weappJumpWrap;
}

+ (id)newInstance;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)openWeAppLogoCustomImageContent;
- (id)getCustomImgParser;
- (_Bool)isJumpWeApp;
- (id)getPrefixStylesWithStyleString:(id)arg1;
- (id)prefixStyleStringWithParserPosition:(struct _NSParserPosition)arg1 outputLastPosition:(struct _NSParserPosition *)arg2;
- (id)getPrefixStylesWithParserPosition:(struct _NSParserPosition *)arg1;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)stringByStrippingHref:(id)arg1;
- (id)init;

@end

