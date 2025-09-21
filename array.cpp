#include<iostream>
using namespace std;
#include<climits>
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


