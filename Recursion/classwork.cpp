#include<iostream>
using namespace std;
int greet(int n){
    if (n==0){
      return 0;
    }
      cout<<"GoodMorning"<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"enter the number of times";
    cin>>n;
    greet(n);
    return 0;
}