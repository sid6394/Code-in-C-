#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the element";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0; i<4; i++){
        arr[i]=arr[i+1];
    }
    arr[4]=temp;
    cout<<"element after left rotation"<<" ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}