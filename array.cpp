#include<iostream>
using namespace std;
// #include<climits>
#include<math.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for (int i=0; i<5; i++)
        cout<<arr[i]<<" ";
        return 0;
    

}

#include<iostream>
using namespace std;
int main()
{
    int size=5;

    cin>>size;

    int arr[1000];

    for(int i=0; i<size; i++)

    cin>>arr[i];

    for(int i=0; i<size; i++)

    cout<<arr[i]<<" ";

    return 0;

}


int main(){
    int arr[5]={2,3,1,7,8};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}



int main(){
    int arr[5] = {2,3,1,6,4};
    int ans= INT_MAX;
    for(int i=0; i<5; i++)

    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans<<endl;

    // for the maximum element 

    ans= INT_MIN;
    for(int i=0; i<5; i++)

    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans<<endl;

    return 0;


}

// Reverse an arrya , swappinng first and last element 
 
#include<iostream>
using namespace std;
int main(){
    int arr[6] ={1,2,3,4,5,6};
    int start=0;
    int end=5;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";

    return 0;
}
 

// Fibbonacci series using array

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[1000];
    
    arr[0]=0;
    arr[1]=1;


    for(int i=2; i<n; i++)
    arr[i]=arr[i-1]+arr[i-2];

    cout<<arr[n-1]<<" ";
    

}

Rotate array by 1

class Solution {
  public:
    void rotate(vector<int>& arr) {
        int n = arr.size();
        int last = arr[n-1];
        
        for (int i = n-2; i >= 0; i--) {
            arr[i+1] = arr[i];
        }
        
        arr[0] = last;
    }
};



// // array me function kaise kaam karte hain

#include<iostream>
using namespace std;
void fun(int a[], int n){
    cout<<sizeof(a)<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

int main(){
    int arr[5]= {3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun (arr, 5);

}


#include<iostream>
using namespace std;

void fun(int a[], int n){
    cout << sizeof(a) << endl;   // sizeof inside function
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int arr[5]= {3,2,1,6,7};
    cout << sizeof(arr) << endl;  // sizeof inside main
    fun(arr, 5);
}


