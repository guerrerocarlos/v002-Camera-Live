//
//  SyPCanonDSLR.h
//  Syphamera
//
//  Created by Tom Butterworth on 03/09/2012.
//  Copyright (c) 2012 Tom Butterworth. All rights reserved.
//

#import "SyPCamera.h"
#import "EDSDK.h"

@interface SyPCanonDSLR : SyPCamera
{
@private
    EdsCameraRef _camera;
    BOOL _hasSession;
    dispatch_source_t _timer;
}
- (id)initWithCanonCameraRef:(EdsCameraRef)ref;
@end