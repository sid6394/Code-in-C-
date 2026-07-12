// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n* fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     cout<<"factorial="<<fact(n);
//     return 0;
// }

// without using recursion

#include<iostream>
using namespace std;
int main(){
    int n;
    long long fact =1;
    cout<<"enter the number";
    cin>>n;
    if(n<0){
        cout<<"fact does not exist for negative number";
    }
    else{
        for(int i=1; i<=n; i++){
            fact=fact*i;

        }
        cout<<"factorial="<<fact;
    }
    return 0;

}