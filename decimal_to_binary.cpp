// decimal to binary

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a the number : ";
    cin>>num;
    int rem,ans=0, mul=1;
    while(num>0){
        rem = num%2;
        num = num/2;
        ans = rem+mul+ans;
        mul= mul*10;
    }

    cout<<ans<<endl;


}


// binary to number 

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a the number : ";
    cin>>num;
    int rem,ans=0, mul=1;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = rem*mul+ans;
        mul= mul*2;
    }

    cout<<ans<<endl;
}

 