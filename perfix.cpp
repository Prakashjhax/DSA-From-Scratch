#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ;";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in array: ";
    for(int i=0;i<n;i++)
    cin>>v[i];
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input array
    vector<int> arr = {2, 4, 6, 8, 10};
    int n = arr.size();

    // Prefix sum array
    vector<int> prefix(n);

    // First element same as original
    prefix[0] = arr[0];

    // Build prefix sum
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Output
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nPrefix sum array: ";
    for (int x : prefix) cout << x << " ";

    return 0;
}
