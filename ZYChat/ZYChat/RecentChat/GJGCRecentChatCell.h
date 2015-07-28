//
//  GJGCRecentChatCell.h
//  ZYChat
//
//  Created by ZYVincent on 15/7/11.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GJGCRecentChatModel.h"

/**
 *  定制最近聊天cell
 */
@interface GJGCRecentChatCell : UITableViewCell

/**
 *  设置内容Model方法
 *
 *  @param contentModel 内容model对象
 */
- (void)setContentModel:(GJGCRecentChatModel *)contentModel;

@end
