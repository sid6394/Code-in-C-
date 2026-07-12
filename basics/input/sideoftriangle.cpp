#include <iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"enter 1st number:";
cin>>a;
cout<<"enter 2nd number:";
cin>>b;
cout<<"enter 3rd number:";
cin>>c;
if((a+b>c) && (b+c>a) && (a+c>b)){
    cout<<"can be sides of triangle";
}
else{
    cout<<"cannot be sides of triangle";
}
}