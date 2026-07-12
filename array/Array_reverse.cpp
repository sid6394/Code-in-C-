#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v = { 34,3,5,6,4,46,7,3,2,6};
    reverse(v.begin(),v.end());
    for(int x : v){
        cout << x<< " ";
    }
}