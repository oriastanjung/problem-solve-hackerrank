#include <iostream>

using namespace std;


long long sort(long long arr[], long long size){
    if (size == 1){
        return 0;
    }else{
        for(long long i = 0; i < size -1; i++){
            if (arr[i] > arr[i+1]){
                long long temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        return sort( arr, size-1);
    }
}


void checkMinMaxSum(long long arr[], long long size){
    long long minSum = 0;
    long long maxSum = 0;
    
    for (long long i = 0; i <= size-2; i++){
        minSum += arr[i];
    }
    
    for (long long i = 0; i< size ; i++){
        if (i == 0){
            continue;
        }
        cout << "arr = " << arr[i]<<endl;
            maxSum += arr[i];
            cout << "maxsum = " << maxSum << endl;
    }
    
    cout << minSum << " " << maxSum << endl;
}
int main() {
    
    long long *arr = new long long [5];
    
    for (long long i = 0; i < 5 ; i++){
        cin >> arr[i];
    }
    sort(arr, 5);
    cout << "sorted : ";
    for (long long i = 0; i < 5 ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    checkMinMaxSum(arr, 5);
    
    
    
    
    return 0;
}