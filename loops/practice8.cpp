// print the sum of series 1-2+3-4+5-6....... up t on... 
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
  cout<<"enter a number :";
  cin>>n;
  if(n%2==0)
  sum=-n/2;
  else sum=-n/2+n;
cout<<sum;
}