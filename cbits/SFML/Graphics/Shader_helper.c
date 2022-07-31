#include <SFML/Graphics/Shader.h>

sfShader* sfShader_createFromFile_helper(const char* vertexShaderFilename, const char* geometryShaderFilename, const char* fragmentShaderFilename) {
    return sfShader_createFromFile(vertexShaderFilename, geometryShaderFilename, fragmentShaderFilename);
}

sfShader* sfShader_createFromMemory_helper(const char* vertexShader, const char* geometryShader, const char* fragmentShader) {
    return sfShader_createFromMemory(vertexShader, geometryShader, fragmentShader);
}

sfShader* sfShader_createFromStream_helper(sfInputStream* vertexShaderStream, sfInputStream* geometryShaderStream, sfInputStream* fragmentShaderStream) {
    return sfShader_createFromStream(vertexShaderStream, geometryShaderStream, fragmentShaderStream);
}

void sfShader_destroy_helper(sfShader* shader) {
    sfShader_destroy(shader);
}

void sfShader_setFloatUniform_helper(sfShader* shader, const char* name, float x) {
    sfShader_setFloatUniform(shader, name, x);
}

void sfShader_setVec2Uniform_helper(sfShader* shader, const char* name, sfGlslVec2 vector) {
    sfShader_setVec2Uniform(shader, name, vector);
}

void sfShader_setVec3Uniform_helper(sfShader* shader, const char* name, sfGlslVec3 vector) {
    sfShader_setVec3Uniform(shader, name, vector);
}

void sfShader_setVec4Uniform_helper(sfShader* shader, const char* name, sfGlslVec4 vector) {
    sfShader_setVec4Uniform(shader, name, vector);
}

void sfShader_setColorUniform_helper(sfShader* shader, const char* name, sfColor color) {
    sfShader_setColorUniform(shader, name, color);
}

void sfShader_setIntUniform_helper(sfShader* shader, const char* name, int x) {
    sfShader_setIntUniform(shader, name, x);
}

void sfShader_setIvec2Uniform_helper(sfShader* shader, const char* name, sfGlslIvec2 vector) {
    sfShader_setIvec2Uniform(shader, name, vector);
}

void sfShader_setIvec3Uniform_helper(sfShader* shader, const char* name, sfGlslIvec3 vector) {
    sfShader_setIvec3Uniform(shader, name, vector);
}

void sfShader_setIvec4Uniform_helper(sfShader* shader, const char* name, sfGlslIvec4 vector) {
    sfShader_setIvec4Uniform(shader, name, vector);
}

void sfShader_setIntColorUniform_helper(sfShader* shader, const char* name, sfColor color) {
    sfShader_setIntColorUniform(shader, name, color);
}

void sfShader_setBoolUniform_helper(sfShader* shader, const char* name, sfBool x) {
    sfShader_setBoolUniform(shader, name, x);
}

void sfShader_setBvec2Uniform_helper(sfShader* shader, const char* name, sfGlslBvec2 vector) {
    sfShader_setBvec2Uniform(shader, name, vector);
}

void sfShader_setBvec3Uniform_helper(sfShader* shader, const char* name, sfGlslBvec3 vector) {
    sfShader_setBvec3Uniform(shader, name, vector);
}

void sfShader_setBvec4Uniform_helper(sfShader* shader, const char* name, sfGlslBvec4 vector) {
    sfShader_setBvec4Uniform(shader, name, vector);
}

void sfShader_setMat3Uniform_helper(sfShader* shader, const char* name, const sfGlslMat3* matrix) {
    sfShader_setMat3Uniform(shader, name, matrix);
}

void sfShader_setMat4Uniform_helper(sfShader* shader, const char* name, const sfGlslMat4* matrix) {
    sfShader_setMat4Uniform(shader, name, matrix);
}

void sfShader_setTextureUniform_helper(sfShader* shader, const char* name, const sfTexture* texture) {
    sfShader_setTextureUniform(shader, name, texture);
}

void sfShader_setCurrentTextureUniform_helper(sfShader* shader, const char* name) {
    sfShader_setCurrentTextureUniform(shader, name);
}

void sfShader_setFloatUniformArray_helper(sfShader* shader, const char* name, const float* scalarArray, size_t length) {
    sfShader_setFloatUniformArray(shader, name, scalarArray, length);
}

void sfShader_setVec2UniformArray_helper(sfShader* shader, const char* name, const sfGlslVec2* vectorArray, size_t length) {
    sfShader_setVec2UniformArray(shader, name, vectorArray, length);
}

void sfShader_setVec3UniformArray_helper(sfShader* shader, const char* name, const sfGlslVec3* vectorArray, size_t length) {
    sfShader_setVec3UniformArray(shader, name, vectorArray, length);
}

void sfShader_setVec4UniformArray_helper(sfShader* shader, const char* name, const sfGlslVec4* vectorArray, size_t length) {
    sfShader_setVec4UniformArray(shader, name, vectorArray, length);
}

void sfShader_setMat3UniformArray_helper(sfShader* shader, const char* name, const sfGlslMat3* matrixArray, size_t length) {
    sfShader_setMat3UniformArray(shader, name, matrixArray, length);
}

void sfShader_setMat4UniformArray_helper(sfShader* shader, const char* name, const sfGlslMat4* matrixArray, size_t length) {
    sfShader_setMat4UniformArray(shader, name, matrixArray, length);
}

unsigned int sfShader_getNativeHandle_helper(const sfShader* shader) {
    return sfShader_getNativeHandle(shader);
}

void sfShader_bind_helper(const sfShader* shader) {
    sfShader_bind(shader);
}

sfBool sfShader_isAvailable_helper(void) {
    return sfShader_isAvailable();
}

sfBool sfShader_isGeometryAvailable_helper(void) {
    return sfShader_isGeometryAvailable();
}
