#ifndef SHADERUTL_H
#define SHADERUTL_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class ShaderUtl{
public:
    unsigned int ID;

    ShaderUtl(const GLchar* vertexPath, const GLchar* fragmentPath);
    void use();
    void setBool(const std::string &name, bool valer) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setVec3(const std::string &name, float* v) const;
    void setVec3(const std::string &name, float v1, float v2, float v3) const;
    void setMat4(const std::string &name, float* m) const;
};

#endif