//
//  ViewController.h
//  ios-wkwebview-touchend
//
//  Created by Craig Marvelley on 07/05/2015.
//  Copyright (c) 2015 Bipsync. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface ViewController : UIViewController <WKScriptMessageHandler>

@property (strong, nonatomic) WKWebView *webView;

@end
