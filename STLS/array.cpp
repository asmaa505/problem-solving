


/*

STLs == Standard Template Library

1. Sequential container    array  -  deque  -  vector
2. Container adaptors      stack  -  queue
3. associative container   


*/


// How to cin an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    int arr[n];

//  loop 
/*
    for(int i=0 ; i<n ; i++){

        cin>> arr[i];

    }

    for(int i=0 ; i<n ; i++){

        cout<< arr[i] <<' ';

    }
*/

//  for each
//  call by refrence
    for(auto &i:arr){

        cin>> i;

    }

//  call by value
    for(auto i:arr){
        
        cout<< i <<' ' ;

    }

    cout<< endl;

    sort(arr , arr+n);
    for(auto i:arr){

        cout<< i <<' ';

    }

    cout<< endl;

    reverse(arr , arr+n);
    for(auto i: arr){

        cout<< i <<' ';
    }

    cout<< endl;
    cout<< binary_search(arr , arr+n , 5) <<endl; // return 0 || 1

    cout<< *upper_bound(arr , arr+n, 4);  
    cout<< *lower_bound(arr , arr+n, 4);  

    cout<< max_element(arr, arr+n) << endl;
    cout<< min_element(arr, arr+n);

    return 0;
}

