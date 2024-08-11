#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>

  
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;
class Shader
{
public:
    // the program ID
    unsigned int ID;
  
    // constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);

    // use/activate the shader
    void use();

    // utility uniform functions
    void setBool(const string &name, bool value) const;
    void setBool(const string &name, bool value1, bool value2) const;
    void setBool(const string &name, bool value1, bool value2, bool value3) const;
    void setBool(const string &name, bool value1, bool value2, bool value3, bool value4) const;

    void setInt(const string &name, int value) const;
    void setInt(const string &name, int value1, int value2) const;   
    void setInt(const string &name, int value1, int value2, int value3) const;   
    void setInt(const string &name, int value1, int value2, int value3, int value4) const;   

    void setFloat(const string &name, float value) const;
    void setFloat(const string &name, float value1, float value2) const;
    void setFloat(const string &name, float value1, float value2, float value3) const;
    void setFloat(const string &name, float value1, float value2, float value3, float value4) const;

    void setVec(const string &name, const glm::vec2 &value) const;
    void setVec(const string &name, float x, float y) const;
    void setVec(const string &name, const glm::vec3 &value) const;
    void setVec(const string &name, float x, float y, float z) const;
    void setVec(const string &name, const glm::vec4 &value) const;
    void setVec(const string &name, float x, float y, float z, float w) const;

    void setMat(const string &name, const glm::mat2 &mat) const;
    void setMat(const string &name, const glm::mat3 &mat) const;
    void setMat(const string &name, const glm::mat4 &mat) const;

private:
    void checkCompileErrors(unsigned int shader, string type);
};