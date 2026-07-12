// divisible by 3 and 5 but not 15
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"the number is divisible by 3 or 5 but not divisible by 15";
        }
        else{
            cout<<"not matching condition";
        }
        
    }
    else{
        cout<<" not matching condition";
    }
}