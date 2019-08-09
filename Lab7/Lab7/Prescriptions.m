//
//  Prescriptions.m
//  Lab7
//
//  Created by doris on 09/08/2019.
//  Copyright © 2019 grace. All rights reserved.
//

#import "Prescriptions.h"

@implementation Prescriptions

+ (instancetype)prescriptionWithName:(NSString *)name {
    Prescriptions *prescription = [[Prescriptions alloc] init];
    prescription.name = name;
    return prescription;
}

@end
