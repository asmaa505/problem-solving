


#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    priority_queue <int> pq;
    pq.push(5);           // log(n)
    pq.push(30);
    pq.push(2);

    while(!pq.empty()){
        cout<< pq.top() << ' ';   // o(1)
        pq.pop();
    }


    return 0;

    /*
        بتعمل sort للعناصر 
    */

}