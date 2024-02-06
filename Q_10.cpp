#include <bits/stdc++.h>
using namespace std;
#define gap "              "
/*
Sample Input:
4
E->E+E
E->E*E
E->(E)
E->a
a+a*(a+a)+a
*/
map <string, string> rules;
string stk = "", input;
void reduce(){
    for(auto rule : rules){
        //dbg(stk, rule.first, rule.second);
        if(stk.find(rule.first) != string::npos){
            int position = stk.find(rule.first);
            stk.erase(position);
            stk += rule.second;
            cout << "$" << stk << gap << input << "$" << gap << "Reduce " << rule.second << "-->" << rule.first << endl;
            reduce();
            return;
        }
    }
}
int main(){
    int n; cin >> n;
    string production;
    while(n--){
        cin >> production;
        rules[production.substr(3)] = production[0];
    }
    cin >> input;
    cout << "Stack" << gap << "Input" << gap << "Action" << endl;
    cout << "$" << stk << gap << input << "$" << endl;
    for(int i = 0; !input.empty(); i++){
        stk += input[0];
        input.erase(0, 1);
        cout << "$" << stk << gap << input << "$" << gap << "Shift " << stk.back() << endl;
        reduce();
    }
    if(stk == "E"){
        cout << "Accepted" << endl;
    }
    else{
        cout << "Rejected" << endl;
    }
}