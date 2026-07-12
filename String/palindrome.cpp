#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="madam";
    string rev="s";
    reverse(rev.begin(),rev.end());
    if(str==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}