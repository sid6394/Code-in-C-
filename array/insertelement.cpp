#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int size;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the element"<<" ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int pos, val;
    cout<<"enter the position";
    cin>>pos;
    cout<<"enter the value";
    cin>>val;
    for(int i=size; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    size++;
    cout<<"final element after insertion"<<" ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}