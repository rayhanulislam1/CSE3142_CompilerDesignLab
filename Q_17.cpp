#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    switch (ch){
        case '^': return 3;
        case '*': return 2;
        case '/': return 2;
        case '+': return 1;
        case '-': return 1;
        default: return -1;
    }
}
string infixtoPostfix(string infix){
    string postfix = "";
    stack<char> stk;
    for(char ch : infix){
        if(ch == ' '){
            continue;
        }
        else if(ch >= 'a' && ch <= 'z'){
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
    return postfix;
}
int main(){
    string infix = "if a then if c-d then a+c else a*c else a+b ";
    int n = infix.size();
    cout << "Input: " << infix << endl;
    cout << "Output: ";

    stack <string> stk;
    string postfix = "", temp = "";
    for(char ch : infix){
        if(ch != ' '){
            temp += ch;
        }
        else{
            if(temp == "then"){
                temp = "";
                continue;
            }
            if(temp == "if" or temp == "else") stk.push(temp);
            else{
                postfix += infixtoPostfix(temp);
                while(!stk.empty() && stk.top() == "else"){
                    postfix += "?";
                    stk.pop();
                    stk.pop();
                }
            }
            temp = "";
        }
    }
    cout << postfix << endl;
}