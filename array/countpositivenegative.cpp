#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the numbers";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int positivecount=0;
    int negativecount=0;
    int zerocount=0;
    for(int i=0; i<5; i++){
        if(arr[i]>0){
           positivecount++;
        }
        else if(arr[i]<0){
            negativecount++;
        }
        else{
            zerocount++;
        }
    }
    cout<<"number of positive="<<positivecount<<endl;
    cout<<"number of negative="<<negativecount<<endl;
    cout<<"number of zero="<<zerocount;
    return 0;
}