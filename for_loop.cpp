#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=100; i<200; i++)
    {
        cout<<i<<endl;
    }
}

// print a to z

#include<iostreaM>
using namespace std;
int main(){
    char name;
    for(name='a'; name<='z'; name=name+1)
    {
        cout<<name<<" ";
    }
}


// print any digit which takes ends to 1

#include<iostream>
using namespace std;
int main (){
    int n,i;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n; i>=1; i=i-1){
        cout<<i<<" ";
    }
}


// printing jumps of 3

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number :: ";
    cin>>n;
    for(i=n; i<=100; i=i+3)
    {
        cout<<i<<endl;
    }

}

// printing the table of n

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the table : ";
    cin>>n;
    for (int i=1; i<=10; i=i+1)
    {
        cout<<n*i<<" ";
    }
}

// calculate the power of the number---

#include<iostream>
using namespace std;
int main(){
    int n,pow,i,num;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>pow;
    num = n;
    for (i=1; i<pow; i=i+1){
        num = num*n;
    }
    cout<<num;
}


// sum of the number 

#include<iostream>
using namespace std;
int main(){
    int n,i, sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1; i<=n; i=i+1){
        sum=sum+i;
    }
    cout<< sum;
}


// Factorial 

#include<iostream>
using namespace std;
int main(){
    int n,fact=1,i;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1; i<=n; i=i+1)
    {
        fact=fact*i;

    }
    cout<<fact;
}


#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number : ";
    cin>>n;

    if(n<2){
        cout<<"Not a Prime Number";
        return 0;
    }
    else{
        for(i=2; i<=n; i=i+1){
            if (n%i==0)
            {
                cout<<"not a prime no. ";
                return 0;
            }
            }
            cout<<"Prime no. :";
            return 0;
            
        }
    }


