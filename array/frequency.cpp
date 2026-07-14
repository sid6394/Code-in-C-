#include<iostream>
using namespace std;
int main (){
    int arr[5];
    int key;
    int frequency=0;
    cout<<"enter the element";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    for(int i=0; i<5; i++){
        if(arr[i]==key){
           frequency++;
        }
    }
    cout<<frequency;
    return 0;
}