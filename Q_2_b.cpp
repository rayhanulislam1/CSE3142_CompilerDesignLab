#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Munmun is the student of Computer Science & Engineering";
    int n = s.size();
    string vowels = "", consonants = "";
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
           s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
           s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
           s[i] == 'U'){
                vowels += s[i];
           }
        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            consonants += s[i];
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    
}