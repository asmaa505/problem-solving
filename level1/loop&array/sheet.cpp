

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

/*
    //! problem 1
    // variables
    short int numOfStatments; cin>> numOfStatments;
    string operation;
    int counter = 0;

    // logic
    for(int i=0 ; i<numOfStatments ; i++){
        cin>> operation;
        if(operation == "++X" || operation == "X++"){
            counter++;
        }else if(operation == "--X" || operation == "X--"){
            counter--;
        }
    }

    // output
    cout<< counter;


    //! problem 2
    // variables
    short int numOfRooms; cin >> numOfRooms;
    int counter = 0;
    int p , capacity;

    // logic
    for(int i=0 ; i<numOfRooms ; i++){
        cin>> p >> capacity;
        if( capacity - p >= 2 ){
            counter ++;
        }
    }

    // output
    cout<< counter;

*/

    //! problem 3
    // variables
    short int numOfArr; cin>> numOfArr;
    short int lengthArr; cin>> lengthArr;
    vector <int> arr;

    // logic
    for(int i=0 ; i<numOfArr ; i++){
        cin>> lengthArr;

        for(int i=0 ; i<lengthArr ; i++){
            cin>> i;
            arr.push_back(i);
        }
    }

//  logic
    for(int i=0 ; i<arr.size() ; i++){
        if( arr[i] != arr[i+1] && arr[i+2] ){
            cout<< i+2;
        }else{cout<< i+1;}
    }

    // test cases
    // 4
    // 4
    // 11 13 11 11
    // 5
    // 1 4 4 4 4
    // 10
    // 3 3 3 3 10 3 3 3 3 3
    // 3
    // 20 20 10



    return 0;
}