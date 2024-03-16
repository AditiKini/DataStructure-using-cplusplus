#include <iostream>
using namespace std;

int LargestSum(int arr[][3], int row, int col)
{
    int max = INT32_MIN;
    int rowIndex = 0;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        { 
            sum += arr[i][j];
        }

        if(sum > max){
            max = sum;
            rowIndex = i;
        }
    }
    cout<<"Maximum Value is: "<<max<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];

    // taking input from user
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing an array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = LargestSum(arr, 3, 3);
    cout<<"The maximum value is present in row "<<ans;
}