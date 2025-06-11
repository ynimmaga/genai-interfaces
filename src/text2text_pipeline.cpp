#include "pipelines/text2text_pipeline.hpp"
#include <stdexcept>

namespace onnx::genai {

std::shared_ptr<Text2TextPipeline> create_pipeline(
    BackendType /*backend*/,
    const std::string& /*model_path*/,
    const std::string& /*device*/)
{
    throw std::runtime_error("No backend registered. Link against a backend library.");
}

} // namespace onnx::genai
