/*

بضيف ز بمسح من front && back
q.push_front();
q.pop_front();

q.push_back();
q.pop_back();

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque <int> q = {1 , 5 , 8 , 19};
    q.push_front(5);
    q.push_back(20);

    for(auto i:q){
        cout<< i <<' ';
    }

    cout<<'\n';
    q.pop_front();
    q.pop_back();

    q.erase(q.begin()+2);

    for(auto i : q){
        cout<< i <<' ';
    }
}