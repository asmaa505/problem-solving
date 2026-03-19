
#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    stack<int>st;
    st.push(5);
    cout<< st.top() <<' ' <<st.size() <<'\n';
    st.pop();
    cout<< st.size() <<'\n';
    cout<< st.empty();


    return 0;


    /*
    FILO || LIFO
    */

}