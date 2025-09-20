// convert 'a' to 'A


#include<iostream>
using namespace std;

char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}
int main(){
    char name;
    cin>>name;

    cout<<convert(name);
}


finding the armstrong number 

#include<iostream>
using namespace std;
#include<cmath>

int countdigit(int num){
    int count = 0;
    {
        count++;
        num = num/10;
    }
    return count;
}


bool Armstrong(int num, int digit ){
    int n=num, ans=0, rem;

    while(n)
    {
        rem= n%10;
        n/=10;
        ans += pow(rem, digit);
    }

    if(ans==num)
        return 1;
        else 
        return 0;
    
}

int main()
{
   int num;
   cin>>num;

   int digit = countdigit(num);

   cout<<Armstrong(num,digit);

}


#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int num){
    int count = 0;
    while(num > 0){
        count++;
        num = num / 10;
    }
    return count;
}

bool Armstrong(int num, int digit){
    int n = num, ans = 0, rem;
    while(n){
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit);
    }
    return (ans == num);
}

int main(){
    int num;
    cin >> num;

    int digit = countdigit(num);

    if(Armstrong(num, digit))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}



// trailing zeroes in factorial of a number
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    while(n >= 5){
        count += n / 5;
        n /= 5;   // keep dividing n by 5
    }

    cout << count;
    return 0;
}



// rectangle length and breadth 

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c && b!=d || b==d && a!=c || a==d && b!=c || b==c && a!=d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}


// Bishop moves in chess 
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(A < 1 || A > 8 || B < 1 || B > 8) return 0;

    int totalMoves = 0;
    totalMoves += min(8 - A, 8 - B);
    totalMoves += min(8 - A, B - 1);
    totalMoves += min(A - 1, B - 1);
    totalMoves += min(A - 1, 8 - B);

    cout << totalMoves << endl;
    return 0;
}








