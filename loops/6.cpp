// print the AP 100,97,94........
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a number: ";
    cin>>n;
    int a=100;
    for(i=1; i<=n; i++ ){
         a =a-3;
        cout<<a<<endl;  
    }
}
