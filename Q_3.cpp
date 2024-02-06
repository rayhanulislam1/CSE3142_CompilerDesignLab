#include <bits/stdc++.h>
using namespace std;
/*
Write a program that abbreviates the following code:
CSE-3141 as Computer Science & Engineering, 3rd year, 1st semester, Compiler Design, Theory.
*/
int main(){
    string s = "CSE-3141";
    int n = s.size();
    bool y = false, s1 = false;
    cout << "Input: " << s << endl;
    cout << "Output: ";
    for(int i = 0; i < n; i++){
        if(i+2 < n && s[i] == 'C' && s[i+1] == 'S' && s[i+2] == 'E'){
            cout << "Computer Science & Engineering, ";
        }
        else if(s[i] >= '1' && s[i] <= '4' && !y){
            cout << s[i] << "rd year, ";
            y = true;
        }
        else if(s[i] >= '1' && s[i] <= '2' && !s1){
            cout << s[i] << "st semester, ";
            s1 = true;
        }
        else if(s[i] >= '1' && s[i] <= '4'){
            cout << "Compiler Design, ";
            if(s[i] == '1') cout << "Theory";
            else cout << "Lab";
            cout << endl;
            break;
        }
    }
}