selection sort

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10, 4,1,3,2,7};
    
    for (int i=0; i<5; i++){
        int index =i;
        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[index])

            index = j;

        }

        swap(arr[i], arr[index]);
    }

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}

// write with by my own 

// taking input form user , mjeedar mja aaya 

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // selecton sort 

    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){

                index = j;

            }
        }
        swap(arr[i], arr[index]);
        
}

for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}