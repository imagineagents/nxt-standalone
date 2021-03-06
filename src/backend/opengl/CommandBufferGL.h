// Copyright 2017 The NXT Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BACKEND_OPENGL_COMMANDBUFFER_H_
#define BACKEND_OPENGL_COMMANDBUFFER_H_

#include "common/CommandAllocator.h"
#include "common/CommandBuffer.h"

namespace backend {
    class CommandBufferBuilder;
}

namespace backend {
namespace opengl {

    class  Device;

    class CommandBuffer : public CommandBufferBase {
        public:
            CommandBuffer(Device* device, CommandBufferBuilder* builder);
            ~CommandBuffer();

            void Execute();

        private:
            Device* device;
            CommandIterator commands;
    };

}
}

#endif // BACKEND_OPENGL_COMMANDBUFFER_H_
