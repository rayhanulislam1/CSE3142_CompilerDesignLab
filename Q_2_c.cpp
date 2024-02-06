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
                for(int j = i; ; j++){
                    if(s[j] == ' ' || j == n){
                        vowels += s[j];
                        i = j;
                        break;
                    }
                    vowels += s[j];
                }
           }
        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            for(int j = i; ; j++){
                if(s[j] == ' ' || j == n){
                    consonants += s[j];
                    i = j;
                    break;
                }
                consonants += s[j];
            }
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    
}