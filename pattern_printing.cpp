// square pattern printing


#include<iostream>
using namespace std;
int main(){
    int j,i;
    for (j=1; j<=5; j=j+1) {
        for(i=1; i<=5; i=i+1)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
        
    }
}

// print 1 to 5 in row nd column

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}


#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}


// print 5,4,3,2,1 in 5 times

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=5; col>=1; col=col-1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

// print 1,4,9,16,25 in 5 times 

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i=i+1){
        for(j=1; j<=5; j=j+1){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}

// print a,b,c,d in 5 times

#include<iostream>
using namespace std;
int main(){
    int row;
    char col;
    for (row=1; row<=5; row=row+1)
    {

        for (col=1; col<=5; col=col+1)
        {
            char name = 'a'+col-1;
            cout<<name<<" ";
        }

        cout<<endl;

    }
}


#include<iostream>
using namespace std;
int main(){
    int row;
    char col;
    int count=1;
    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}
