#ifndef BACKEND_TYPES_HPP
#define BACKEND_TYPES_HPP

namespace onnx::genai {

enum class BackendType {
    OpenVINO,
    ONNXRuntime
};

} // namespace onnx::genai

#endif // BACKEND_TYPES_HPP
