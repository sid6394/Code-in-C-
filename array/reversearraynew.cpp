// Method 1: Print Array in Reverse (Original Array Doesn't Change)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the number";
//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }
//     cout<<"reversed array";
//     for(int i=4 ; i>=0; i-- ){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Method 2: Reverse Using Another Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int rev[5];
//     cout<<"enter the number";
//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }
//     int j=4;
//     for(int i=0; i<5;i++){
//         rev[i]=arr[j];
//         j--;
//     }
//     cout<<"revresed array="<<" ";
//     for(int i=0; i<5; i++){
//         cout<<rev[i]<<" ";
//     }
//     return 0;
// }

