#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // //create a vector , declare
    // vector<int>v;
    // vector<int>v1(5,1);    
    // //size and copacity
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of V: "<<v.capacity()<<endl;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(10);
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of V: "<<v.capacity()<<endl;
    // // Update value 
    // v[1]=5;
    // cout<<"Size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"Size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    
    //Delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(84);
    vnew.pop_back();
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;


vnew.erase(vnew.begin()+1);
cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    for(int i=0;i<vnew.size();i++)
    {
        cout<<vnew[i]<<" ";
    }

}


vector<int>arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
cout<<arr[0]<<endl; //3
cout<<arr.front()<,endl;
cout<<arr[arr.size()-1]<<endl; //4
cout<<arr.back()<<endl; //4

vector<int>a;
// copy value of 1 vector to another

a = arr;
cout<<a.size();
for(auto it=arr.begin();it!=arr.end();it++)
{
    cout<<*it<<" ";
    for(auto it:arr)
    cout<<i<<" ";
}  



