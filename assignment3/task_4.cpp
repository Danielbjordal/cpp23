#include <iostream>
using namespace std;

string word1, word2, word3;

void getWords() {
    cout << "insert word 1";
    cin >> word1;
    cout << "insert word 2";
    cin >> word2;
    cout << "insert word 3";
    cin >> word3;
}

int countSubstringOccurences(const string &sentence){
    int occurences = 0;
    unsigned long index = 0;
    while(index <sentence.length()){
        if(sentence[index] == 'e' && sentence[index + 1 % sentence.length()] == 'r'){
            occurences++;
        }
        index++;
    }
    return occurences;
}

int main(){
    //a
    getWords();

    //b
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << "Sentence: '" << sentence << "' " << endl;

    //c
    cout << "word1 length: " << word1.length() << endl;
    cout << "word2 length: " << word2.length() << endl;
    cout << "word3 length: " << word3.length() << endl;
    cout << "sentence length: " << sentence.length() << endl;

    //d
    string sentence2 = sentence;

    //e
    if(sentence2.length() >= 12){
        string replacement = "xxx";
        sentence2.replace(9, replacement.length(), replacement);
    }
    else{
        cout << "the string is not long enough to replace characters 10-12." << endl;
    }
    cout << "sentence: " << sentence << endl;
    cout << "sentence2: " << sentence2 << endl;

    //f
    if(sentence.length() >= 5) {
        string sentence_start = sentence.substr(0, 5);
        cout << "sentence: " << sentence << endl;
        cout << "sentence start: " << sentence_start << endl;
    }
    else{
        cout << "the string is not long enough to extract first 5 letters" << endl;
    }

    //g
    if(sentence.find("hallo") != string::npos){
        cout << "the word 'hallo' was found in the sentence: " << sentence << endl;
    }
    else{
        cout << "the word 'hallo' was not found in the sentence" << endl;
    }

    //h
    int occurences = countSubstringOccurences(sentence);
    cout << "'er' occured " << occurences << " times in the sentence." << endl;



    return 0;
}


