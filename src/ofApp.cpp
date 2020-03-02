#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    screenText.init("frabk.ttf", 20);
    
    person = {"Michael", "William", "Christopher", "Casey", "Fiona", "Michelle", "Tanya"};
    verb = {"laughed", "sneezed", "barked", "kicked", "scratched", "rustled", "ran", "spoke", "read", "earned", "gave", "perceived", "remained", "be", "is", "am", "are", "were", "been", "was", "wanted", "to", "didn't", "left", "chance"};
    determiner = {"the", "a", "each", "every", "any", "this", "my", "some", "an", "either", "one", "two", "three", "four", "half", "neither", "both"};
    noun = {"table", "chair", "lake", "rocks", "countries", "people", "love", "hate", "conversation", "emotion", "trance", "life", "enhance", "husband", "wife", "cow"};
    adverb = {"quickly", "awkardly", "beautifully", "brutally", "carefully", "competitively", "eagerly", "girlishly", "grimly", "happily", "hungrily", "lazily", "quizically", "recklessly", "ruthlessly", "savagely", "unevenly", "wishfully", "worriedly", "just"};
    preposition = {"with", "for", "up", "toward", "under", "during", "from", "in", "off", "on", "between", "beside", "at", "around", "against", "to", "into", "to", "by"};
    conjunction = {"for", "and", "nor", "but", "or", "yet", "so", "when", "how", "as"};
    pronoun = {"I", "me", "we", "us", "you", "she", "her", "he", "him", "it", "they", "them", "there", "whose", "his"};
    conjunctiveAdverb = {"also", "anyway", "hence", "instead", "likewise", "now", "yet", "then", "still", "indeed", "rather", "know"};
    
    rhyme1 = {"lists", "cists", "cysts", "fists", "gists", "kists", "mists", "quist's", "schists", "trysts", "twists", "exists", "whists", "wrists", "persists", "enlists", "desists", "resists"};
    rhyme2 = {"grow", "below", "go", "throw", "Joe", "blow", "row", "owe", "toe", "mow", "Monroe", "overflow", "doe", "Poe", "undergo", "dunno", "UFO", "in tow", "beaux"};
    rhyme3 = {"love", "dove", "glove", "Gov", "shove", "above", "grow out of", "in spite of"};
    rhyme4 = {"murder", "birder", "herder", "worser", "werder", "girder"};
    rhyme5 = {"chance", "france", "glance", "hance", "lance", "prance", "stance", "trance", "vance", "enhance"};
    rhyme6 ={"how", "cow", "bow", "brough", "brow", "ciao", "Frau", "now", "vow", "wow", "yow"};
    
    textParts.push_back(person); //0
    textParts.push_back(verb); //1
    textParts.push_back(determiner); //2
    textParts.push_back(noun); //3
    textParts.push_back(adverb); //4
    textParts.push_back(preposition); //5
    textParts.push_back(conjunction); //6
    textParts.push_back(conjunctiveAdverb); //7
    textParts.push_back(pronoun); //8
    
    textParts.push_back(rhyme1); //9
    textParts.push_back(rhyme2); //10
    textParts.push_back(rhyme3); //11
    textParts.push_back(rhyme4); //12
    textParts.push_back(rhyme5); //13
    textParts.push_back(rhyme6); //14
    
    vector<int>sentence1 = {8, 1, 2, 3, 5, 2};
    textStructure1.push_back( sentence1);
    vector<int>sentence2 = {8, 3, 8, 1, 5};
    textStructure2.push_back( sentence2);
    vector<int>sentence3 = {8, 1, 7};
    textStructure3.push_back( sentence3);
    vector<int>sentence4 = {6, 8, 3, 1, 2};
    textStructure4.push_back( sentence4);
    vector<int>sentence5 = {6, 8, 1, 8, 4, 5};
    textStructure5.push_back( sentence5);
    
  
    
    vector<int>word1 = {9};
    textStructure6.push_back( word1);
    vector<int>word2 = {10};
    textStructure6.push_back( word2);
    vector<int>word3 = {11};
    textStructure6.push_back( word3);
    vector<int>word4 = {12};
    textStructure6.push_back( word4);
    vector<int>word5 = {13};
    textStructure6.push_back( word5);
    vector<int>word6 = {14};
    textStructure6.push_back( word6);

    
    
    generatedText = "Press space to generate a lymerick ";

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    screenText.setText( generatedText);
//    screenText.draw(10, 20);
    
    ofDrawBitmapString(generatedText, 10, 40);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case ' ':
            makeWriting();
            break;
            
        default:
            break;
            
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::makeWriting(){
    
    string ending3;
    string ending2;
    string ending1;
    vector<int> finishA;
    finishA = textStructure6[ ofRandom(textStructure6.size())];
    for (int i = 0 ; i< finishA.size(); i ++){
        
//        ending1 += " ";
        int numWords =textParts[ finishA[i] ].size();
        ending1 += textParts[ finishA[i] ][ ofRandom( numWords)];
    }
    ending1 += ", ";
    
    for (int i = 0 ; i< finishA.size(); i ++){
        
 //       ending2 += " ";
        int numWords =textParts[ finishA[i] ].size();
        ending2 += textParts[ finishA[i] ][ ofRandom( numWords)];
    }
    
    ending2 += ", ";
    
    for (int i = 0 ; i< finishA.size(); i ++){
        
  //      ending3 += " ";
        int numWords =textParts[ finishA[i] ].size();
        ending3 += textParts[ finishA[i] ][ ofRandom( numWords)];
    }
    
    ending3 += ", ";
    
    
    
    
    
    
    string endingB1;
    string endingB2;
    vector<int> finishB;
    finishB = textStructure6[ ofRandom(textStructure6.size())];
    for (int i = 0 ; i< finishB.size(); i ++){
        
   //     endingB1 += " ";
        int numWords =textParts[ finishB[i] ].size();
        endingB1 += textParts[ finishB[i] ][ ofRandom( numWords)];
    }
    endingB1 += ", ";
    
    for (int i = 0 ; i< finishB.size(); i ++){
        
   //     endingB2 += " ";
        int numWords =textParts[ finishB[i] ].size();
        endingB2 += textParts[ finishB[i] ][ ofRandom( numWords)];
    }
    endingB2 += ", ";
    
    
    
    
    
    
    
    
    
    
    string writing0;
    vector<int> sentence;
    sentence = textStructure1[ ofRandom(textStructure1.size())];
    for (int i = 0; i<sentence.size(); i++){
        
        writing0 += " ";
        int numWords =textParts[ sentence[i] ].size();
        writing0 += textParts[ sentence[i] ][ ofRandom( numWords)];
      
    }
    writing0 += " ";
    
    
    string writing1;
    vector<int> sentence1;
    sentence1 = textStructure2[ ofRandom(textStructure2.size())];
    for (int i = 0; i<sentence1.size(); i++){
        
        writing1 += " ";
        int numWords =textParts[ sentence1[i] ].size();
        writing1 += textParts[ sentence1[i] ][ ofRandom( numWords)];
    }
    
    writing1 += " ";
    
    
    string writing2;
    vector<int> sentence2;
    sentence2 = textStructure3[ ofRandom(textStructure3.size())];
    for (int i = 0; i<sentence2.size(); i++){
        
        writing2 += " ";
        int numWords =textParts[ sentence2[i] ].size();
        writing2 += textParts[ sentence2[i] ][ ofRandom( numWords)];
    }
    
    writing2 += " ";
    
    
    
    string writing3;
    vector<int> sentence3;
    sentence3 = textStructure4[ ofRandom(textStructure4.size())];
    for (int i = 0; i<sentence3.size(); i++){
        
        writing3 += " ";
        int numWords =textParts[ sentence3[i] ].size();
        writing3 += textParts[ sentence3[i] ][ ofRandom( numWords)];
        
    }
    
    writing3 += " ";
    
    string writing4;
    vector<int> sentence4;
    sentence4 = textStructure5[ ofRandom(textStructure5.size())];
    for (int i = 0; i<sentence4.size(); i++){
        
        writing4 += " ";
        int numWords =textParts[ sentence4[i] ].size();
        writing4 += textParts[ sentence4[i] ][ ofRandom( numWords)];
        
    }
    
    writing4 += " ";
    
    
    generatedText = writing0 +ending1 + "\n" + writing1 + ending2 + "\n" + writing2 + endingB1 + "\n" + writing3 + endingB2 + "\n" + writing4 + ending3;
    cout << writing0 << endl;
    
    

    
    
    
    
}
