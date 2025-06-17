// light.c � Implementierung der Licht-Funktion zur �bergabe an den Shader
#include "light.h"
#include <GL/glew.h>

// Setzt alle Licht-Uniforms f�r den aktiven Shader
void light_set_uniforms(Shader* shader, Light* light, vec3 viewPos) {
    glUniform3f(glGetUniformLocation(shader->id, "lightPos"), light->position.x, light->position.y, light->position.z);
    glUniform3f(glGetUniformLocation(shader->id, "lightColor"), light->color.x, light->color.y, light->color.z);
    glUniform1f(glGetUniformLocation(shader->id, "ambientStrength"), light->ambient_strength);
    glUniform1f(glGetUniformLocation(shader->id, "specularStrength"), light->specular_strength);

    // Kamera-Position (wird f�r Spiegelungen ben�tigt)
    glUniform3f(glGetUniformLocation(shader->id, "viewPos"), viewPos.x, viewPos.y, viewPos.z);
}
