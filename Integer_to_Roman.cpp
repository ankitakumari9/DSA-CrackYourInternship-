#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
string roman;
vector<string> notations ={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
vector<int>value =        {1000,900,500, 400,100, 90, 50,  40, 10,   9,  5,  4,   1};
     
     for(int pos = 0; num > 0; ++pos){
         while(num >= value[pos]){
             roman += notations[pos];/*or you can write --> roman.append(notations[pos])*/
             num -= value[pos];
         }
     }
     return roman;
    }


int main(){
    int num = 1994;
    
    cout<<"The roman of the given integer is "<<intToRoman(num);
    
    return 0;
}