
//! codesforces 300A
// improt
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    short int numOfElements; cin>> numOfElements;                                                                            
    vector <short int> v;

    
    for(int i=0 ; i<numOfElements ; i++){
        short int num;
        cin>> num;
        v.push_back(num);
    }

    vector <short int> set1;    // nggative numbers
    vector <short int> set2;   //  positive numbers
    vector <short int> set3;  //   zero

    for( auto i:v ){
        if(i < 0 ){
            set1.push_back(i);
        }else if(i > 0){
            set2.push_back(i);
        }else if(i == 0){
            set3.push_back(i);
        }
    }


    if(set1.size() % 2 ==0 ){
        short int deleted = set1.back();
        set1.pop_back();
        set3.push_back(deleted);
    }

    if(set2.size() == 0){
        short int deleted1 = set1.back();
        set1.pop_back();
        set2.push_back(deleted1);

        short int deleted2 = set1.back();
        set1.pop_back();
        set2.push_back(deleted2);
    }


    // output
    cout<< set1.size();
    for(auto i:set1){
        cout<<' ' << i;
    }
    cout<<'\n';

    cout<< set2.size();
    for(auto i:set2){
        cout<< ' '<<i;
    }
    cout<<'\n';

    cout<< set3.size();
    for(auto i:set3){
        cout<<' ' <<i ;
    }

    return 0;
}




