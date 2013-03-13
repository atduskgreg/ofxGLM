#include "ofMain.h"
#include "ofxGLM.h"

namespace ofxGLM {
	//using namespace glm;

 ofVec3f toOf(glm::vec3 v){
     return ofVec3f(v.x, v.y, v.z);
 }
 
 glm::vec3 toGlm(ofVec3f v){
     return glm::vec3(v.x, v.y, v.z);
 }

}
