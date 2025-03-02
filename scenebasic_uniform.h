#ifndef SCENEBASIC_UNIFORM_H
#define SCENEBASIC_UNIFORM_H

#include "helper/scene.h"

#include <glad/glad.h>
#include "helper/glslprogram.h"

class SceneBasic_Uniform : public Scene
{
private:
    GLuint vaoHandle;
    GLSLProgram prog;
    float angle;

    void compile();

public:
    SceneBasic_Uniform();

    void initScene(GLFWwindow* window);
    void update( float t );
    void render(GLFWwindow* window);
    void resize(int, int);
};

#endif // SCENEBASIC_UNIFORM_H
