// print star in triangle form 

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for (row=1; row<=5; row=row+1){
        for(col=1; col<=row; col=col+1){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

// print 1,2,3,4,5 in a triangle form 

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=6; row=row+1)
    {
        for(col=1; col<=row; col=col+1){
            cout<<col<<" ";
        }

        cout<<endl;
    }
}

// print 1, 22, 33,444,555 in triangle form 

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=row; col=col+1)
        {
            cout<<row<<" ";

        }
        cout<<endl;
    }
}


#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=row; col=col+1)
        {
            char name ='a' +row-1;
            cout<<name<<" ";

        }
        cout<<endl;
    }
}

// print reverse triangle star printing

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row=row+1)
    {
        for (col=1; col<=5-row+1; col=col+1){
            cout<<" * ";
        }
        cout<<endl;
    }
}


