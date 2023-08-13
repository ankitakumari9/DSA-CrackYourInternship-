#include<bits/stdc++.h>
using namespace std;

 int strStr(string haystack, string needle) {
         int m = haystack.length();
         int n = needle.length();
         for(int i = 0; i<= m-n; i++){
             for(int j = 0 ; j<n; j++){
                 if(haystack[i+j]!= needle[j] ){
                     break;
                 }
                 if(j == n-1){
                     return i;
                 }
             }
         }
         return -1;
    }
    int main(){
        string haystack = "sadbutsad";
        string needle = "sad";
        cout<<"The index of the first occurrence of needle in haystack "<<strStr(haystack , needle);
        return 0;
    }
