#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>arr[0]){
            largest=arr[i];
        }
    }
    cout<<largest;
    return 0;

}
