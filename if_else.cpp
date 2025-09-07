
Pakage accpeted or not 

#include<iostream>
using namespace std;
int main(){
    int package =10;
    cin>>package;
    if(package>10){
        cout<<"Accepted";
    }
    else{
        cout<<"Rejected";
    }
}


taking user input 


#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter your first offer: ";
    cin >> x;
    cout << "Enter your second offer: ";
    cin >> y;

    if (x > y)
    {
        cout << "I can accept the offer";
    }
    else
    {
        cout << "I cannot accept the offer";
    }
}


// Print odd and even

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your first number : ";
    cin>>number;
    if (number%2==0)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}

// homework


#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age>18){
        cout<<"Adult";
    }
    else
    {
        cout<<"Teen age";
    }
}