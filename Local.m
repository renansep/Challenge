//
//  Local.m
//  Challenge
//
//  Created by Renan Cargnin on 2/6/14.
//  Copyright (c) 2014 Renan Cargnin. All rights reserved.
//

#import "Local.h"

@implementation Local

- (Local *)initWithNome:(NSString *)n andCoordenada:(CLLocationCoordinate2D)c
{
    self = [super init];
    if (self)
    {
        nome = n;
        coordenada = c;
    }
    return self;
}

@end
