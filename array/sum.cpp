#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter the elements :";
    int arr[n];
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]+arr[n-1];
    }
    
}