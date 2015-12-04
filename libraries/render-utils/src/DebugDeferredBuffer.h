//
//  DebugDeferredBuffer.h
//  libraries/render-utils/src
//
//  Created by Clement on 12/3/15.
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_DebugDeferredBuffer_h
#define hifi_DebugDeferredBuffer_h

#include <render/DrawTask.h>

class DebugDeferredBuffer {
public:
    using JobModel = render::Job::Model<DebugDeferredBuffer>;
    
    void run(const render::SceneContextPointer& sceneContext, const render::RenderContextPointer& renderContext);
    
private:
    const gpu::PipelinePointer& getPipeline();
    
    gpu::PipelinePointer _pipeline;
};

#endif // hifi_DebugDeferredBuffer_h