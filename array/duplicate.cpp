#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the element"<<" ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
   
    bool found=false;
    for(int i=0; i<5; i++){
       for(int j=i+1; j<5; j++){
        if(arr[i]==arr[j]){
            cout<<"duplicate element="<<arr[i]<<endl;
             found=true;
        }
        
       }
       
    }
    if(found==false){
        cout<<"no duplicate element";
    }
    
    
    return 0;

}