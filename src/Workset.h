//
//  Workset.h
//  TestXSLT
//
//  Created by Marc Liyanage on Sun Mar 03 2002.
//  Copyright (c) 2001 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ParameterSet.h"
#import "XMLUtils.h"


@interface Workset : NSObject <NSCoding> {

	NSString *xmlCode;
	NSString *xsltCode;
	NSString *xmlFilename;
	NSDate   *xmlFileModificationDate;
	NSString *xsltFilename;
	NSDate   *xsltFileModificationDate;
	NSString *resultFilename;
	NSData *result;
	ParameterSet *parameterSet;
	NSStringEncoding resultEncoding;
}


- (int)resultEncoding;
- (void)setResultEncoding:(NSStringEncoding)encoding;

- (NSString *)stringResult;

- (NSString *)xmlCode;
- (void)setXmlCode:(NSString *)s;
- (NSString *)xsltCode;
- (void)setXsltCode:(NSString *)s;
- (NSData *)result;
- (void)setResult:(NSData *)s;
- (ParameterSet *)parameterSet;
- (void)setParameterSet:(ParameterSet *)parameterSet;

- (NSString *)xmlFilename;
- (void)setXmlFilename:(NSString *)s;
- (BOOL)hasXmlFilename;
- (NSString *)xsltFilename;
- (void)setXsltFilename:(NSString *)s;
- (BOOL)hasXsltFilename;
- (NSString *)resultFilename;
- (void)setResultFilename:(NSString *)s;
- (BOOL)hasResultFilename;

- (BOOL)saveXml;
- (BOOL)saveXslt;
- (void)updateXmlFileModificationDate;
- (void)updateXsltFileModificationDate;
- (void)reloadXmlFromFile;
- (void)reloadXsltFromFile;
- (BOOL)xmlModifiedExternally;
- (BOOL)xsltModifiedExternally;


- (BOOL)hasXmlCode;
- (BOOL)hasXsltCode;
- (BOOL)hasResult;
- (BOOL)hasParameters;

@end