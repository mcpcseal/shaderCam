#version 150

uniform float time;
uniform vec2 resolution;
uniform sampler2DRect tex1;

in vec2 texCoordVarying;
out vec4 outputColor;

void main() {
  float x = resolution.x - gl_FragCoord.x;
  float y = resolution.y - gl_FragCoord.y;
  vec2 coord = vec2(x, y);
  
  vec4 t1 = texture(tex1, coord);
  outputColor = t1;
}