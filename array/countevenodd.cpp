#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the numbers";
    for (int i=0; i<5; i++){
         cin>>arr[i];
    }
    int evencount=0;
    int oddcount=0;
    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else {
            oddcount++;
        }
    }
    cout<<"number of even number ="<<evencount<<endl;
    cout<<"number of odd number ="<<oddcount;
    return 0;
    
}
