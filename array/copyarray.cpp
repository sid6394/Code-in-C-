#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int copy[5];
    cout<<"enter the elemnet";
    for(int i=0; i<5; i++){
        cin>>arr[i];     
    }
    
    for(int i=0; i<5; i++){
        copy[i]=arr[i];
    
         cout<<copy[i]<<" ";
    }
  
    return 0;
}
