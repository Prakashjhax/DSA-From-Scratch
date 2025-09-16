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

// break statement 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
}


// continue statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==5){
            continue;
        }
        cout<<i<<endl;
    }
}


// switch case 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    switch(n){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;

    }
}



// scope of variable 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    {
        int a=20;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}



