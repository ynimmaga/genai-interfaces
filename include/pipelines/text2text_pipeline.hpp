#ifndef TEXT2TEXT_PIPELINE_HPP
#define TEXT2TEXT_PIPELINE_HPP

#include "backend_types.hpp"
#include <string>
#include <memory>

namespace onnx::genai {

struct GenerationResult {
    std::string text;
};

class Text2TextPipeline {
public:
    virtual ~Text2TextPipeline() = default;

    virtual GenerationResult operator()(const std::string& input) = 0;

    virtual BackendType get_backend_type() const = 0;
};

} // namespace onnx::genai

#endif // TEXT2TEXT_PIPELINE_HPP
