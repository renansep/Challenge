//
//  Local.h
//  Challenge
//
//  Created by Renan Cargnin on 2/6/14.
//  Copyright (c) 2014 Renan Cargnin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface Local : NSObject
{
    NSString *nome;
    CLLocationCoordinate2D coordenada;
}

- (Local *)initWithNome:(NSString *)n andCoordenada:(CLLocationCoordinate2D)c;

@end
