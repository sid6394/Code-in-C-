#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is gratest";
        }
        else{
            cout<<c<<"is graetest";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is graetest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
}