#include<iostream>
using namespace std;
void sumarray( int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
          sum=sum+arr[i];
    }
      cout<<sum;
  
}
int main(){
    int arr[5];
    cout<<"enter element"<<" ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    sumarray(arr,5);

}