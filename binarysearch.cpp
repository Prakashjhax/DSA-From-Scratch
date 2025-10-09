#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start =0, end = n-1, mid;
    while(start<=end)
    {
        // mid ko find kro phle 
        mid = (start+end)/2;
        // arr mid == key 
        if(arr[mid]==key)
        return mid;
        // arr mid < key 
        else if(arr[mid]<key)

        start = mid+1; 
        // arr mid>key 
        else 
        end = mid-1;

    }

    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    // Input
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<BinarySearch(arr, n, key)<<endl;
    return 0;

}


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1; // move left
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1; // move right
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};

int main() {
    Solution sol;

    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = sol.searchRange(nums, target);
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}




// remove element 


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // pointer for next valid element position
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i; // i = count of elements not equal to val
    }
};


book allocation 

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> &arr, int n, int k, int mid) {
        int studentCount = 1, pageSum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) return false;
            if (pageSum + arr[i] > mid) {
                studentCount++;
                pageSum = arr[i];
                if (studentCount > k) return false;
            } else pageSum += arr[i];
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (n < k) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    Solution obj;
    cout << "Minimum possible maximum pages = " << obj.findPages(arr, k);
    return 0;
}