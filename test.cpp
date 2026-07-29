#include <bits/stdc++.h>
using namespace std;

void Revwords(string s){
    string rev="";
    for(int i=s.size()-1;i>=0;i--){
        rev+=s[i];
    }
    cout<<rev;
    
}
int main(){
    Revwords("Leetcode is very hard if you don't practice every day");
    
}