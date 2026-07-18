#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the element"<<" ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int pro =1;
    for(int i=0; i<5; i++){
        pro =pro*arr[i];
    }
    cout<<pro;
    return 0;
}