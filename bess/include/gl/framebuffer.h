#pragma once
#include "glad/glad.h"
#include "imgui.h"

namespace Bess::Gl {
class FrameBuffer {
  public:
    FrameBuffer(int width, int height);
    ~FrameBuffer();

    GLuint getTexture() const;

    ImVec2 getSize() const;

    void bind() const;
    void unbind() const;
    void resize(float width, float height);

  private:
    GLuint m_fbo;
    GLuint m_texture;
    GLuint m_rbo;

    float m_width;
    float m_height;
};
} // namespace Bess::Gl
