#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    *p=25;
    cout<<a;
    return 0;
}