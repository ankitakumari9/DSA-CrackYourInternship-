#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
        string token = "";

        stringstream ss(path);
        stack<string> st;
        while(getline(ss , token , '/')){
           if(token == "" || token == ".") continue;
           if(token != ".."){
               st.push(token);
           } 
           else if(!st.empty()){
               st.pop();
           }
}

        if(st.empty()){
            return "/";
        }
        string result = "";
        while(!st.empty()){
            result = "/" + st.top() + result;
            st.pop();
        }
        return result;
}

int main(){
 string path = "/home//foo/";
  cout<<"The simplified canonical path is "<<simplifyPath(path);
    return 0;
}