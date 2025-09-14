// advance pattern printing 

#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter the Input : ";
    cin>>n;

    for(row=1; row<=n; row= row+1)
    {
        for(col=1; col<=n-row; col=col+1)
        cout<<"  ";
      
        for(col=1; col<=2*row-1; col=col+1)
        cout<<"* ";
        
        cout<<endl;

    }
}

// print ulta piramid oiky 

#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter yr number : " ;
    cin>>n;
    for(row=n; row>=1; row=row-1)
    {
        for(col=1; col<=n-row; col=col+1)
        cout<<" ";
        
        for(col=1; col<=2*row-1; col=col+1)

        cout<<"* ";
        cout<<endl;
    }
}


// hollow square frame pattern 

#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter the input : ";
    cin>>n;
    for(row=n; row>=1; row = row-1)
    {
        for(col=1; col<=row; col=col+1)
        cout<<"* ";

        for(col=1; col<=2*n-2*row; col=col+1 )

        cout<<"  ";

        for(col=1; col<=row; col= col+1)

        cout<<"* ";

        cout<<endl;
    }


    for(row=1; row<=n; row = row+1)
    {
        for(col=1; col<=row; col=col+1)
        cout<<"* ";

        for(col=1; col<=2*n-2*row; col=col+1 )

        cout<<"  ";

        for(col=1; col<=row; col= col+1)

        cout<<"* ";

        cout<<endl;
    }

}

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter your input :";
    cin>>n;
    for(i=1; i<=n; i=i+1)
    {
        for(j=1; j<=i; j=j+1)
        cout<<"* ";
        
        for(j=1; j<=2*n-2*i; j=j+1)
        cout<<"  ";


        for(j=1; j<=i; j=j+1)
        cout<<"* ";

        cout<<endl;
    }


    for(i=n-1; i>=1; i=i-1)
    {
        for(j=1; j<=i; j=j+1)
        cout<<"* ";
        
        for(j=1; j<=2*n-2*i; j=j+1)
        cout<<"  ";


        for(j=1; j<=i; j=j+1)
        cout<<"* ";

        cout<<endl;
    }
}

here is the output : 


// *                             * 
// * *                         * *
// * * *                     * * *
// * * * *                 * * * * 
// * * * * *             * * * * *
// * * * * * *         * * * * * *
// * * * * * * *     * * * * * * *
// * * * * * * * * * * * * * * * *
// * * * * * * *     * * * * * * * 
// * * * * * *         * * * * * *
// * * * * *             * * * * *
// * * * *                 * * * *
// * * *                     * * *
// * *                         * *
// *                             *





