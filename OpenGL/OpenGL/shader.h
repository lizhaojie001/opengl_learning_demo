//
//  shader.h
//  OpenGL
//
//  Created by xdf_yanqing on 2022/12/7.
//

#ifndef shader_h
#define shader_h

// 包含glad来获取所有的必须OpenGL头文件
#include "include/glad/glad.h"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader
{
public:
    // 程序ID
    unsigned int ID;

    // 构造器读取并构建着色器
    Shader(const char* vertexPath, const char* fragmentPath);
    // 使用/激活程序
    void use();
    // uniform工具函数
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};


#endif /* shader_h */
