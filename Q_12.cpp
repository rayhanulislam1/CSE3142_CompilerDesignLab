#include <bits/stdc++.h>
using namespace std;

bool isValidExpression(string expression){
    int i = 0;
    stack<char> st;
    while(i < (int)expression.size()){
        if(expression[i] == '('){
            st.push(expression[i]);
        }
        else if(expression[i] == ')'){
            if(st.empty()){
                return false;
            }
            st.pop();
        }
        i += 1;
    }
    return st.empty();
}
int main(){
    string expression = "2*(3+5))"; // 3+((4+4)), _id+5id*5, 8+(5+)8
    if(isValidExpression(expression)){
        cout << expression << ": Valid Expression" << endl;
    }
    else{
        cout << expression << ": Invalid Expression" << endl;
    }
}