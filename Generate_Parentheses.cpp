#include<bits/stdc++.h>
using namespace std;

void helper(vector<string> &v, int n, int oc, int cc, string s){
        //base case
        if(oc == n && cc == n){
            v.push_back(s);
            return;
        }
        
        if(oc < n){
            helper(v, n, oc + 1, cc, s+"(");
        }
        
        if(cc < oc){
            helper(v, n, oc, cc + 1, s+")");
        }
    
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> v;
        int oc = 0, cc = 0;
        helper(v, n, oc, cc, "");
        return v;
    } 

int main(){
    int n = 3;

    vector<string> vec = generateParenthesis(n); 
    cout<<"All combinations of well-formed parentheses with given "<<n<<" pairs of parentheses are "<<endl;
    
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[0].size(); j++){
            cout<<vec[i][j]<<"";
        }
        cout<<endl;
    }
    
    return 0;
}    