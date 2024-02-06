#include <bits/stdc++.h>
using namespace std;

int main(){
    string input = "Nipu read book";
    vector <string> PN = {"Sagor", "Selim", "Salma", "Nipu", "he", "she", "I", "we", "you", "they"};
    vector <string> N = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
    vector <string> V = {"read", "eat", "take", "run", "write"};

    string word;
    vector <string> words;
    for(char c : input){
        if(c != ' '){
            word += c;
        }
        else{
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);
    if(words.size() > 3 || words.size() < 2){
        cout << input << " : Invalid\n";
    }
    else{
        bool flag = true;
        if(find(PN.begin(), PN.end(), words[0]) == PN.end()){
            flag = false;
        }
        if(find(V.begin(), V.end(), words[1]) == V.end()){
            flag = false;
        }
        if(find(N.begin(), N.end(), words[2]) == N.end()){
            flag = false;
        }
        if(flag){
            cout << input << " : Valid\n";
        }
        else{
            cout << input << " : Invalid\n";
        }
    }
    
}