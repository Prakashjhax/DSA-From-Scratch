#include<iostream>
using namespace std;

int sum(int m, int n){
    int ans = m+n;
    return ans;

}

int main(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    
    cout<<sum(a,b);
    cout<<endl;
}