//
//  Prescriptions.h
//  Lab7
//
//  Created by doris on 09/08/2019.
//  Copyright © 2019 grace. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Prescriptions : NSObject

@property (nonatomic, strong)NSString *name;

+ (instancetype) prescriptionWithName: (NSString *) name;

@end

NS_ASSUME_NONNULL_END
