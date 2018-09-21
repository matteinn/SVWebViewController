//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <WebKit/WebKit.h>

@interface SVWebViewController : UIViewController

- (instancetype)initWithAddress:(NSString *)urlString;
- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

@property (nonatomic, weak) id<UIWebViewDelegate> delegate;
@property (nonatomic, weak) id<WKNavigationDelegate> wkDelegate;
@property (nonatomic, readonly) UIWebView *webView;
@property (nonatomic, readonly) WKWebView *wkWebView;
@property (nonatomic, strong) NSMutableArray<UIActivity *> *activities;
@property (nonatomic, strong) UIImage *customLoadingImage;

@end
