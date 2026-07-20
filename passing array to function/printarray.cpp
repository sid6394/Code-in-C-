#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
        int arr[5];
        cout<<"enter the element"<<" ";
        for(int i=0; i<5;i++){
            cin>>arr[i];
        }
        printArray(arr,5);
    }