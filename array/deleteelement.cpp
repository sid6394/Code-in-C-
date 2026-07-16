#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int size;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the element";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int pos,value;
    cout<<"enter the pos";
    cin>>pos;
    cout<<"enter the value";
    cin>>value;
    for(int i=pos; i<size-1; i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"array after deletion"<<" ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}