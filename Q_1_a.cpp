#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md. Tareq Zaman, Part-3, 2011";
    int words = 0, letters = 0, digits = 0, characters = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            digits++;
        }
        if((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= 'A' && s[i] <= 'Z')){
            letters++;
        }
        if(s[i] == ' '){
            words++;
        }
        if(s[i] == '.' or s[i] == '-' or s[i] == ',' or s[i] == ';' or s[i] == ':' or s[i] == '\'' or s[i] == '!' or s[i] == '?'){
            characters++;
        }
    }
    cout << "Words = " << words + 1 << endl;
    cout << "Letters = " << letters << endl;
    cout << "Digits = " << digits << endl;
    cout << "Characters = " << characters << endl;

    return 0;
}