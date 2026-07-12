// // take two integers a,b where a>b,find remaindr when a is divided by b.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=14;   //a is dividend
//     int b=3;    //b is divisor
//     int q=a/b;  //q is qoutient  
//     int r;      // r is remainder
//     r=a-(b*q);
//     cout<<r;
// }
#include<iostream>
using namespace std;
int main(){
    int a=16;       //solved using modulo operator
    int b=3;
    int r=a%b;
    cout<<r;
}