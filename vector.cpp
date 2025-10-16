#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //create a vector , declare
    vector<int>v;
    vector<int>v1(5,1);    
    //size and copacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of V: "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of V: "<<v.capacity()<<endl;
    // Update value 
    v[1]=5;
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    
    vectoer<int>v3={1,2,3,4,5};
    
}