// while loop

// print table of n number 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=10){
        cout<<i*n<<endl;
        i++;
    }

}


// do while loop 

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter your number: ";
    cin>>n;
    int i=1;  
    do{
        cout<<i<<endl;
        i++;

    }while(i<=n);
}