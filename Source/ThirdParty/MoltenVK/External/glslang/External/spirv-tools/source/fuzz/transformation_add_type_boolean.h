// Copyright (c) 2019 Google LLC
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

#ifndef SOURCE_FUZZ_TRANSFORMATION_ADD_TYPE_BOOLEAN_H_
#define SOURCE_FUZZ_TRANSFORMATION_ADD_TYPE_BOOLEAN_H_

#include "source/fuzz/fact_manager.h"
#include "source/fuzz/protobufs/spirvfuzz_protobufs.h"
#include "source/opt/ir_context.h"

namespace spvtools {
namespace fuzz {
namespace transformation {

// - |message.fresh_id| must not be used by the module.
// - The module must not yet declare OpTypeBoolean
bool IsApplicable(const protobufs::TransformationAddTypeBoolean& message,
                  opt::IRContext* context, const FactManager& fact_manager);

// Adds OpTypeBoolean with |message.fresh_id| as result id.
void Apply(const protobufs::TransformationAddTypeBoolean& message,
           opt::IRContext* context, FactManager* fact_manager);

// Helper factory to create a transformation message.
protobufs::TransformationAddTypeBoolean MakeTransformationAddTypeBoolean(
    uint32_t fresh_id);

}  // namespace transformation
}  // namespace fuzz
}  // namespace spvtools

#endif  // SOURCE_FUZZ_TRANSFORMATION_ADD_TYPE_BOOLEAN_H_
