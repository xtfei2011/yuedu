//
//  NetService.h
//  YueduFM
//
//  Created by StarNet on 9/22/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import "BaseService.h"

@interface BaseService (NetService)

- (YDSDKManager* )netManager;

@end

@interface NetService : BaseService

@end
