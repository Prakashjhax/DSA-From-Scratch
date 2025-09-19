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


// this same for multiplication 

#include<iostream>
using namespace std;
int Mul(int m, int n){
    int ans = m*n;
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;

    cout<<Mul(a,b);
    cout<<endl;

}


//  all at one palce 

#include<iostream>
using namespace std;

void Sum(int m, int n){
    int ans= m+n;
    cout<<ans<<endl;

}

int Mul(int m, int n){
    int ans = m*n;
    return ans;

}

void fun(){
    cout<<"I am prakash jha Practicing function in cpp";

}

int main(){
    int a,b;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;

    Sum(a,b);
    cout<<Mul(a,b);
    cout<<endl;
    fun();

}

// A is prime or not 
// A ka factorial 
// B is prime or not 
// B ka factiorial 
// B-A ka factoraial
// B-A is prime of not 


#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2)
    return 0;

    for(int i=2; i<n; i++){
        if(n%i==0)
        return 0;
    }

    return 1;
 
}

int Fact(int n){
    int ans=1;
    for( int i=1; i<=n; i++)
    ans=ans*i;

    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a>>b;

    cout<<Prime(a)<<endl;

    cout<<Fact(a)<<endl;

    cout<<Prime(b)<<endl;

    cout<<Fact(b)<<endl;

    cout<<Fact(b-a)<<endl;

    cout<<Prime(b-a)<<endl;

}


// swaping two number using function 


#include<iostream>
using namespace std;


void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}


 
