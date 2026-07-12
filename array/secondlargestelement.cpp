#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!= largest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;
    return 0;
}