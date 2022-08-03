#include <iostream>
#include <vector>
using namespace std;



int diagonalDifference(vector<vector<int>> arr) {
    int i = 0, j = arr.size() - 1, primSum = 0, secondSum = 0;
    while (i < arr.size()){
        primSum += arr[i][j];
        secondSum += arr[i][j];
        i++;
        j--;
    }
    return abs(primSum - secondSum);
}



int main()
{
    int size;
    cin >> size;
    vector <vector <int> > arr(size);
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    // cout << *arr << endl; 
    // cout << *(arr[0] + 2);
    cout << diagonalDifference(arr);
    return 0;
}