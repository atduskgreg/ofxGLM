#include "testApp.h"
using namespace ofxGLM;

//--------------------------------------------------------------
void testApp::setup(){
    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(125);
    ofVec3f p = ofVec3f(ofGetMouseX(), ofGetMouseY(), 5);
    ofVec3f v1 = ofVec3f(500,230,100) - p;
    ofVec3f v2 = ofVec3f(480,290,30) - p;
    
    glm::vec3 center = (toGlm(p) + toGlm(v1) + toGlm(v2))/3.0f;
    glm::vec3 glmv = glm::normalize( glm::cross(toGlm(v1) - toGlm(p), toGlm(v2)- toGlm(p)) );
    
    glmv = glmv * 100.0f;
    
    
    mesh.clear();
    mesh.addVertex(p);
    mesh.addVertex(v1);
    mesh.addVertex(v2);
    mesh.drawWireframe();
    
    // draw normal
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(255, 0, 0);
    ofTranslate(center.x, center.y, center.z);
    ofLine(0,0,0, glmv.x, glmv.y, glmv.z);
    ofPopStyle();
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}