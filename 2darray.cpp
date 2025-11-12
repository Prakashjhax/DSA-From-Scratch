// #include<iostream>
// using namespace std;

// void printcol(int arr[][4], int row, int col)
// {
//     // column wise 
//     for (int j=0; j<col; j++)
//     for(int i=0; i<row; i++)
//     cout<<arr[i][j]<<" ";
// }
// void printrowmax(int arr[][4], int row ,int col)
// {
//     int index = -1, sum = INT_MIN;
//     for(int i=0; i<row; i++)
//     {
//         int total = 0;
//         for (int i=0; i<col; i++)
//         {
//             total += arr[i][j];
//             int total = 0; 
//             for (int j=0; j<col; j++){
//                 total += arr[i][j];

//                 if (total >sum){
//                     sum = total;
//                     index = i;
//                 }

//             }
//             cout<<index<<" ";
//         }
//     }
// }

// int main()
// {
//     int arr1[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
//     int arr2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//     int ans[3][4];

//     // Add two matrices
//     for(int row = 0; row < 3; row++){
//         for(int col = 0; col < 4; col++){
//             ans[row][col] = arr1[row][col] + arr2[row][col];
//         }
//     }

//     // Print result matrix
//     for(int row = 0; row < 3; row++){
//         for(int col = 0; col < 4; col++){
//             cout << ans[row][col] << " ";
//         }
//         cout << endl; // new line after each row
//     }

//     return 0;
// }

// // Print row index with max sum 

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

// Function to print array column-wise
void printcol(int arr[][4], int row, int col)
{
    // column wise 
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to find and print the row index having maximum sum
void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }

        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }

    cout << "Row with maximum sum is: " << index << " (Sum = " << sum << ")" << endl;
}

int main()
{
    int arr1[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12
    };

    int arr2[3][4] = {
        0, 1, 2, 3,
        4, 5, 6, 7,
        8, 9, 10, 11
    };

    int ans[3][4];

    // Add two matrices
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            ans[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    // Print result matrix
    cout << "Sum of the two matrices:\n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << ans[row][col] << " ";
        }
        cout << endl; // new line after each row
    }

    // Print row index with maximum sum
    printrowmax(ans, 3, 4);

    return 0;
}


