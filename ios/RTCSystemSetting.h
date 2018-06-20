//
//  RTCSystemSetting.h
//  RTCSystemSetting
//
//  Created by ninty on 2017/5/29.
//  Copyright © 2017年 ninty. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface RCTSystemSetting : RCTEventEmitter <RCTBridgeModule, CBCentralManagerDelegate>

@end
