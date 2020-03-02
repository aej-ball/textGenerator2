#pragma once

#include "ofMain.h"
#include "ofxTextSuite.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

    
    
    void makeWriting();
    
    
    vector<string> person, verb, determiner, noun, adverb, preposition, conjunction, pronoun, conjunctiveAdverb, rhyme1, rhyme2, rhyme3, rhyme4, rhyme5, rhyme6;
    string generatedText;
    vector< vector <int>> textStructure1;
    vector< vector <int>> textStructure2;
    vector< vector <int>> textStructure3;
    vector< vector <int>> textStructure4;
    vector< vector <int>> textStructure5;
    vector< vector <int>> textStructure6;
    vector< vector <int>> textStructure7;
    vector< vector <int>> textStructure8;
    vector< vector <int>> textStructure9;
    vector< vector <int>> textStructure10;
    vector< vector <int>> textStructure11;
    vector< vector <string>> textParts;
    vector< vector <string>> textFinish;
    
    ofxTextBlock screenText;

};
