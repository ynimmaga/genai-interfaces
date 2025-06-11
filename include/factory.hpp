#ifndef GENAI_BACKENDS_HPP
#define GENAI_BACKENDS_HPP

#include "backend_types.hpp"
#include "pipelines/text2text_pipeline.hpp"
#include <memory>
#include <string>

namespace onnx::genai {

std::shared_ptr<Text2TextPipeline> create_pipeline(
    BackendType backend,
    const std::string& model_path,
    const std::string& device = "CPU");

} // namespace onnx::genai

#endif // GENAI_BACKENDS_HPP
