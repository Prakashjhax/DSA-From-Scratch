// // add Digit

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter yr number :";
//     cin>>num;
//     while(num>9)
//     {
//         int  ans=0,rem;
//         while(num!=0)
//         {
//             rem=num%10;
//             num /=10;
//             ans += rem;
//         }
//         num=ans;
//     }
//     cout<<"Your answer is :"<<num;
// }


// // leap year 


// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter your year : ";
//     cin>>year;
//     if(year%400==0 )
//     cout<<year<<" is a leap year";
//     else if(year%4==0 && year%100!=0)
//     cout<<year<<" is a leap year";
//     else
//     cout<<year<<" is not a leap year";
    
// }



// // Power of 2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter yur number : ";
//     cin>>n;
//       if(n<1)
//         return 0;
//         while(n!=1)
//         {
//             if(n%2==1)
//             return 0;
//             n=n/2;
//         }
//         return 1;
// }
      

// // Sqrt X


// #include <iostream>
// using namespace std;

// int main() {
//     int n, ans = 0;
//     cout << "Enter your number: ";
//     cin >> n;

//     for (int i = 1; i * i <= n; i++) {
//         ans = i;
//     }

//     cout << "Square root of " << n << " is: " << ans << endl;
//     return 0;
// }






