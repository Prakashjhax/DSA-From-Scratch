// #include<iostream>
// using namespace std;
// int main()
// {
//     char arr[] = {'p','r','a','k','a','s','h'};
//     for(int i=0; i<5; i++)
//     cout<<arr[i];
// }

// {
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
//     cout<<s.size();
// }

// {
//     string s1 = "prakash" , s2 = "Jha";
//     string s3 = s1.append(s2);                    // s1 + s2;
//     cout<<s3;
// }


//escape characters 

// {
//     // string s = "prakash jha is a "bad" boy "; //errror
//     string s = "Prakash Jha is a \"bad\" boy";
//     cout<<s;
// }

#include<iostream>
using namespace std;
int main()
{
    string s = "prakash";
    //reverse the string

    int start =0, end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s;
      // size of reversed string 

    int size=0;
    while(s[size]!='\0')
    {
        size++;

    }
    cout<<endl;
    cout<<size<<" ";

    string s2 = "jha";
    start =0; end = s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"Not Palindrome";
            return 0;
        }
        start++, end--;
    }

    cout<<"It is a Palindrome";
    
}