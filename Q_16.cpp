#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    switch (ch){
        case '^': return 3;
        case '*': return 2;
        case '/': return 2;
        case '+': return 1;
        case '-': return 1;
        default: return 0;
    }
}
int main(){
    string infix = "(A - B)*(D/E + F)";
    stack <char> stk;
    string postfix = "";
    for(char ch : infix){
        if(ch == ' '){
            continue;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            postfix += ch;
        }
        else if(ch == '('){
            stk.push(ch);
        }
        else if(ch == ')'){
            while(stk.top() != '('){
                postfix += stk.top();
                stk.pop();
            }
        }
        else{
            while(!stk.empty() && precedence(ch) <= precedence(stk.top())){
                postfix += stk.top();
                stk.pop();
            }
            stk.push(ch);
        }
    }
    while(!stk.empty()){
        postfix += stk.top();
        stk.pop();
    }
    cout << postfix << endl;
}