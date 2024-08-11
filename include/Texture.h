#pragma once

#include <glad/glad.h>

#include <iostream>

class Texture
{
public:
    // the texture ID
    unsigned int ID;
    // constructor reads and parse the texture
    Texture(const char* texturePath);

    void use();
    void activateTextureUnit(int unit);
    void setWrapMode(GLenum wrapMode);
    void setMinFilteringMode(GLenum minFilterMode);
    void setMagFilteringMode(GLenum magFilterMode);
    void setFilteringMode(GLenum minFilterMode, GLenum magFilterMode);
};