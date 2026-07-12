// printing the grade of students
#include<iostream>
using namespace std;
int main(){
    cout<<"enter marks:";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"excellent";
    // }
    // if(n>=81 && n<=90){
    //     cout<<"very good";
    // }
    // if(n>=61 && n<=70){
    //     cout<<"good";
    // }
    // if(n>=51 && n<= 60){
    //     cout<<"average";
    // }
    // if(n>=40 && n<= 50){
    //     cout<<"below average";
    // }
    // if(n<40){
    //     cout<<"fail";
    // }
    if(n>=91){
        cout<<"excellent";
    }
    else if(n>=81){
        cout<<"very good";
    }
    else if(n>=71){
        cout<<"good";
    }
    else if(n>=61){
        cout<<"average";
    }
    else if(n>=51){
        cout<<"below average";
    }



}