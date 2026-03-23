

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //! 2D array

    int arr[2][3];

    for(int i=0 ; i < 2 ; i++){

        for(int j=0 ; j < 3 ; j++){

            cin>> arr[i][j];

        }
    }

    cout<< "====================================\n";

        for(int i=0 ; i < 2 ; i++){

            for(int j=0 ; j < 3 ; j++){

                cout<< arr[i][j] <<' ';

            }
            
            cout<< '\n';
    }



    //! search for a number

    int arr[3][4];

    for(int i=0 ; i < 3 ; i++){

        for(int j=0 ; j < 4 ; j++){

            cin>> arr[i][j];

        }
    }

    cout<< "====================================\n";

    int key; cin>> key;

    bool found = false;
    int indexI , indexJ;

    logic

    for(int i=0 ; i < 3 ; i++){

        for(int j=0 ; j < 4 ; j++){

            if(arr[i][j] == key){
                found = true;
                indexI = i; indexJ = j;
            }

        }

    }


    // // output:
    if(found){
        cout<< "i index:  "<< indexI << '\n' << "j index:  "<< indexJ <<'\n';
    }else{
        cout<< "error 404!";
    }



    // //! find the smallest element:

    int smallestEle = arr[0][0];
    for(int i=0 ; i < 3 ; i++){

        for(int j=0 ; j < 4 ; j++){

            if(arr[i][j] < smallestEle){
                smallestEle = arr[i][j];
            }

        }

        cout<< "smallest element in row( "<< i+1 << " is: " <<smallestEle <<'\n';

    }



    //! find the main diagonal of 4*4 2D array

    int arr[4][4];
    for(int i=0 ; i < 4 ; i++){

        for(int j=0 ; j < 4 ; j++){

            cin>> arr[i][j];

        }

    }


//  logic

    for(int i=0 ; i < 4 ; i++){

        for(int j=0 ; j < 4 ; j++){

            if(i == j){ cout << arr[i][j] << ' '; }

        }

    }




    //! sum all elements of 3*4 2D array

    int arr[3][4];

    for(int i=0 ; i < 3 ; i++){

        for(int j=0 ; j < 4 ; j++){

            cin>> arr[i][j];
    
        }
    }

    long int sum = 0;

    // logic
    for(int i=0 ; i < 3 ; i++){

        for(int j=0 ; j < 4 ; j++){

            sum += arr[i][j];
    
        }
    }

    cout<< "sum: " << sum;


    return 0;
}