#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int key;
    cout<<"enter the numbers";
    
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    
    cout<<"enter the number to search";
    cin>>key;
        bool found=false;
    for (int i=0 ; i<5; i++){
        if(arr[i]==key){
            cout<<"element found at index="<<i;
            found=true;
            break;
            
        }
        
    }
    if(found== false){
        cout<<"not found";
    }
    return 0;
}