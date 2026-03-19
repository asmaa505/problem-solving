
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){

    // vector<int> v(3,1);

    // for(auto i:v ){
    //     cout<< i <<' ';
    // }

    vector <int> v = {1 , 5 , 8};
    cout<< v.size() <<endl; 
    cout<< v.front() <<' ' <<v.back() <<endl;

    v.push_back(11);

    reverse(v.begin() , v.end());
    sort(v.begin() , v.end());

    v.pop_back();

    cout<< v.front();
    cout<< v.back();

    return 0;


/*

    بطبع من front && back
    v.front();
    v.back();

    بضيف و بحذف من back بس
    v.push_back(5);
    v.pop_back();

*/

}
