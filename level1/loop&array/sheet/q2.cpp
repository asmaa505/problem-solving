

# include <iostream>
# include <bits/stdc++.h>
using namespace std;



/*
! Algorithm:
1. int n; cin>> n;
2. int arr[n];
3. int key; cin>> key;
3. for(int i=0 ; i < n ; i++){
    cin>> arr[i];
    if(arr[i] == key){
        cout<< i <<' ';
    }
}

*/

int main(){

    // variables:
    int numOfElements; cin>> numOfElements;
    int arr[numOfElements];
    for( int i = 0 ; i < numOfElements ; i++ ){    

        cin>> arr[i]; 

    }

    int key; cin>> key;
    bool exist = false;
    for( int i = 0 ; i < numOfElements ; i++ ){ 

        if(arr[i] == key){ 
            cout<< i;
            exist = true;
            break;
        }
    }
    
    if(!exist){ cout<< "-1"; }
    return 0;

}