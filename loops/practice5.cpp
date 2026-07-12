// count digits of given number......
#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"eneter the digit:";
    cin>>n;
    count=0;
    int a=n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<1;
    else
    cout<<count;

}