
# include <iostream>
# include <bits/stdc++.h>
using namespace std;

/*
! Algorithm: 
short int n; cin>> n;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin>> arr[i];
}

for(int i = 0 ; i < arr ; i++){
    if( arr[i] < 0 ){out<< "1";}
    else if( arr[i] > 0 ){cout<< "0";}
    else{cout<< "0";}
}
*/

int main(){
    // variables
    short int numOfElements; cin>> numOfElements;    
    int arr[numOfElements];                
    for(int i = 0; i < numOfElements ; i++){

        cin>> arr[i];
        if( arr[i] > 0 ){cout<< '1' <<' ';}
        else if(arr[i] < 0 ){cout<< '2' <<' ';}
        else{cout<< '0' <<' ';}

    }
    return 0;
}