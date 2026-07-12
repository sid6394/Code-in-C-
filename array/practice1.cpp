#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enetr the number of the students :";
  cin>>n;
  int arr[n];
  cout<<"enetr the marks of the students :";
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
  for(int i=0; i<=n-1; i++){
    if (arr[i]<35)
    cout<<i << " ";
  }

}