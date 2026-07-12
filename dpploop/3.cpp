// print the table of n here n is an integer which the user will input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=1; i<=100; i++){
        cout<<n*i<<" "<<endl;
    }
}