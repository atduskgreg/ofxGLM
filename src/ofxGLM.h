//
//  ofxGLM.h
//  ofxGLMExample
//
//  Created by Greg Borenstein on 3/13/13.
//
//

#ifndef ofxGLMExample_ofxGLM_h
#define ofxGLMExample_ofxGLM_h

#pragma once
#include "glm.hpp"
#include "ext.hpp"

#include "ofMain.h"

namespace ofxGLM {
    //ofVec3f toOf(glm::vec3 v);
    //glm::vec3 toGlm(ofVec3f v);
    ofVec3f toOf(glm::vec3 v);
    glm::vec3 toGlm(ofVec3f v);
    
}

#endif
