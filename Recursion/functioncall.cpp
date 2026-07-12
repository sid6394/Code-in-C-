#include<iostream>
using namespace std;
void Morning(int n){
    if (n==0){
        return;
    }
    cout<<"goodmorning"<<endl;
    Morning(n-1);
    
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    Morning(n);
    return 0;
    
}