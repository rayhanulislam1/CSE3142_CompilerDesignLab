#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md. Tareq Zaman, Part-3, 2011";
    int words = 0, letters = 0, digits = 0, characters = 0;
    string letters1 = "", digits1 = "", characters1 = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            digits++;
            digits1 += s[i];
        }
        if((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= 'A' && s[i] <= 'Z')){
            letters++;
            letters1 += s[i];
        }
        if(i+1 < s.size() && s[i] == ' ' && s[i+1] != ' '){
            words++;
        }
        if(s[i] == '.' or s[i] == '-' or s[i] == ',' or s[i] == ';' or s[i] == ':' or s[i] == '\'' or s[i] == '!' or s[i] == '?'){
            characters++;
            characters1 += s[i];
        }
    }
    cout << "Words = " << words + 1 << endl;
    cout << "Letters = " << letters << endl;
    cout << "Digits = " << digits << endl;
    cout << "Characters = " << characters << endl;

    cout << endl;

    cout << "Letters1 = " << letters1 << endl;
    cout << "Digits1 = " << digits1 << endl;
    cout << "Characters1 = " << characters1 << endl;

}