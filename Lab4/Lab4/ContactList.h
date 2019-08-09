//
//  ContactList.h
//  Lab4
//
//  Created by doris on 09/08/2019.
//  Copyright © 2019 grace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Contact.h"


@interface ContactList : NSObject

@property (nonatomic) NSMutableArray *contacts;

-(void)addContact:(Contact *)newContact;

@end

