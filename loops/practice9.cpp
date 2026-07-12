// print the factorial of a given number till n......
#include<iostream>
using namespace std;
int main(){
    int n;
    int product=1;
  cout<<"enter a number :";
  cin>>n;
 for(int i=1;i<=n; i++){
    product*=i;
 }
 cout<<product;
}