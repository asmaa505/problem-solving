
# include <iostream>
# include <bits/stdc++.h>
using namespace std;

/*
! Algorithm:
1. short int n; cin>> n;
2. int arr[n];
3. for( int i=0 ; i < n ; i++ ){
    cin>> arr[i];
    if(arr[i] < 10){ cout<< "A[ " << i <<" ] = " <<arr[i]; }
    else{ 
        cout<< "A[ " <<arr[i] <<" ] = " <<arr[i];
        break;
    }
}
*/


int main(){
    short int numOfElements; cin>> numOfElements;
    int arr[numOfElements];

    for( int i = 0; i < numOfElements ; i++ ){
        cin>> arr[i];

        if( arr[i] <= 10 ){cout<< "A[" << i <<"] = " <<arr[i] <<'\n';}                     

    
    }
    /*
        Test Case 1:
        5
        1 2 100 0 30

    */
    return 0;
}