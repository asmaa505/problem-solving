

# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main(){

    //! A. Summation

    // variables
    int size; cin>> size;
    long long sum = 0;
    int arr[size];

    // logic
    for( int i = 0 ; i < size ; i++){

        cin >> arr[i];
        sum += arr[i];

    }

    // output
    cout<< abs(sum);

    return 0;
}