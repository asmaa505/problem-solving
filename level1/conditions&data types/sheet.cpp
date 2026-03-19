
// libraries
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

/*
    // problem 1
    short int numOfIterations;  cin>> numOfIterations;
    int num1 , num2 ;
    while(numOfIterations--){
        cin>> num1 >> num2;
        cout<< num1 + num2 <<'\n';
    }

    / test cases
    // 4
    // 3 5
    // 2 -6
    // -5 0
    // 314159265 123456789

*/

/*
    // problem 2
    string S; cin>> S;
    cout<<"2018";
    for(short i=4; i<10 ; i++){
        cout<< S[i];
    }

    // test cases
    // 2017/01/07
    // 2017/01/31
*/


    // // problem 3
    // short num; cin>> num;
    // if(num == 0){cout<< '1';}
    // else if(num == 1){cout<< '0';}


    // // problem 4
    // string S1 , S2 , S3;
    // cin>>  S1 >> S2 >> S3;

    // string acronym = "";
    // acronym += char (toupper(S1[0]));
    // acronym += char (toupper(S2[0])) ;
    // acronym += char (toupper(S3[0]));

    // cout<< acronym;


/*
    // problem 5
    char arr[] = { 'o' , 'e' , 'a' , 'i' , 'u' };
    bool isVowel = false;
    char S; cin>> S;
    for(short int i=0 ; i<5 ; i++){
        if(arr[i] == tolower(S)){ isVowel = true; break; }
    }

    if(isVowel){cout<< "vowel";}
    else{cout<< "consonant";}
*/


/*
    // problem 6
    short int num; cin>> num;
    if( num > n && num % 2 == 0){ cout<< "YES";}
    else{ cout<< "NO"; }
*/


/*
    // problem 7
    short int M , N; cin>> M >>N;
    long long area = M*N;
    long long numOfPieces = area / 2;
    cout<< numOfPieces;
*/


/*
    // problem 8
    string S , M; cin>> S >> M;
    string S2 = "AtCoder";
    string M2 = "Land";
    if(S == S2 && M == M2){ cout<< "Yes"; }
    else{ cout<< "No"; }

    // test cases
    // AtCoder Land
    // CodeQUEEN Land
    // aTcodeR lANd
*/


/*
// problem 9
    string S; cin>> S;
    string S2 = "";
    S2 +=  S[1];
    S2 +=  S[2];
    S2 +=  S[0];

    string S3 = "";
    S3 += S[2];
    S3 += S[0];
    S3 += S[1];

    cout<< S2 << " "<< S3;
*/


    // problem 10
    short int a , b , c;
    cin >> a >> b >> c;

    short int minNum = min({ a, b, c});
    short int maxNum = max({ a , b , c });

    short int distance = maxNum - minNum;
    cout<< distance;

    return 0;


}

