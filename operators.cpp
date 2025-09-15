#include<iostream>
using namespace std;
int main(){
    cout<<13.7/2;
}

#include<iostream>
using namespace std;
int main(){
    cout<<13.2*4;
}

#include<iostream>
using namespace std;
int main(){
    int a=10;

    cout<<a++;
    cout<<endl<<a;
}

// same for all the operator , it will work oky 

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;


    if(a==b)
    cout<<"Yes";
    else
    cout<<"no";

}

 
//  Logical Operators

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"a is greater";
    else if(b>a && b>c)
    cout<<"b is greater";
    else
    cout<<"c is greater";
}

Or operator

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b || a>c)
    cout<<"a is greater";
    else if(b>a || b>c)
    cout<<"b is greater";
    else
    cout<<"c is greater";
}



// Bit wise operator 

#include<iostream>
using namespace std;
int main(){
    int ans= ~-10;
    cout<<ans<<endl;
}


// assignment operator
#include<iostream>
using namespace std;
int main(){
    int a=3;
    a+=2; // a=a+2
    cout<<a;
}