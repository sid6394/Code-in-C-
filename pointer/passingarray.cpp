#include<iostream>
using namespace std;
void print(int *p,int size){
    for(int i=0; i<size; i++){
        cout<<*(p+i)<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,5);
}