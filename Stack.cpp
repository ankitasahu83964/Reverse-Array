#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkBalanced(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(s.empty()){
                return false;
            }
            char ch=s.top();
            s.pop();
            if((str[i]==')'&& ch !='(') ||
                (str[i]=='}'&& ch!='{') ||
                (str[i]==']'&& ch!='[')){
                    return false;
                }
        }
    }
    return s.empty();
}
int main(){
    string str="{[[({})]]}";
    if(checkBalanced(str))
       cout<<"Balanced Paraentheses";
    else
       cout<<"Not Balanced";
    return 0;      

}