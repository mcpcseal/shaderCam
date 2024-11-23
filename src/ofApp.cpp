#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	fbo1.allocate(ofGetWidth(), ofGetHeight());
	shader.load("shader/shader.vert", "shader/shader.frag");
  cam.initGrabber(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
  cam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.begin();
	shader.setUniform1f("time", ofGetElapsedTimef());
	shader.setUniform2f("resolution", ofGetWidth(), ofGetHeight());
	shader.setUniformTexture("tex1", cam.getTexture(), 1);
  
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
 
	shader.end();
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
