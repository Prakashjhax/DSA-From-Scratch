
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

// positive negative or zero hai


#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive";
    }
    else if (num == 0) { 
        cout << "0";
    }
    else {
        cout << "Negative";
    }
}


// vowel and consonent 

#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Give you char : ";
    cin>>c;

    if (c=='a')
    cout<<"Vowel";
    else if(c=='i')
    cout<<"vowel";
    else if (c=='o')
    cout<<"vowel";
    else if (c=='e')
    cout<<"vowel";
    else if (c=='u')
    cout<<"vowel";
    else
    cout<<"constant";

}


// int printing the week name on the basis of number 1,2,3,4,5,6

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give me a digit form 1-7, i will tell you week name : ";
    cin>>n;
    if (n==1){
        cout<<"sunday";
    }
    else if (n==2){
        cout<<"Monday";
    }
    else if (n==3){
        cout<<"Tuesday";
    }
    else if (n==4){
        cout<<"Wednesday";
    }
    else if (n==5){
        cout<<"Thrusday";
    }
    else if (n==6){
        cout<<"Friday";
    }
    else if(n==7){
        cout<<"Saturday";
    }
    else{
        cout<<"Please print under 1-7";
    }
}

// loop and for loop

#include<iostream>
using namespace std;
int main(){
    for(int count=1; count<=16; count=count+1){
        cout<<"PrakXh"<<endl;
    }
}

// print first n natural number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i=i+1)
    {
        cout<<i<<endl;
    }

}


// square of a number

#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the number : ";
        cin>>n;

        for (int i=1;i<=n; i=i+1)
        {
            cout<<i<<"Square is :"<<i*i<<endl;
        }
    }


// print all even up to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter you no. : ";
    cin>>n;
    for (int i=2; i<=n; i=i+1)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        else{

        }
    }
}




