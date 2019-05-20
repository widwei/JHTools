//
//  SwiftFintechClientType1ConfigModel.h
//  SPSDK
//
//  Created by wongfish on 15/8/3.
//  Copyright (c) 2015年 wongfish. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SwiftFintechClientType1ConfigModel : NSObject

/**
 *  app Scheme(微信APP支付，配置的app Scheme，需要与Appid一致)
 */
@property (nonatomic,copy) NSString *appScheme;

/**
 *  微信 Appid
 */
@property (nonatomic,copy) NSString *type1Appid;



/**
 *  app Scheme(微信Wap支付，配置的app Scheme，需要保证唯一性)
 */
@property (nonatomic,copy) NSString *wapAppScheme;

/**
 *  是否支持MTA数据上报(微信APP支付SDK从1.7.6版本开始支持，默认关闭)
 */
@property (nonatomic,assign) BOOL isEnableMTA;



/**
 移动应用微信appId
 */
@property (nonatomic,copy) NSString *type1WapAppid;

/**
 小程序原始ID
 */
@property (nonatomic,copy) NSString *type1OGId;

/**
 小程序环境 0正式，1开发，2体验
 */
@property (nonatomic,assign) NSInteger type1Type;

/**
 小程序使用版本 0旧,1新（默认1）
 */
@property (nonatomic,copy) NSString *pathVersion;



@end
