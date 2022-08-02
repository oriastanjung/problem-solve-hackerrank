#include <iostream>
#include <vector>
using namespace std;

int sort (int arr[] , int size){
    if (size == 1) {
        return 0;
    }else {
        for (int i = 0 ; i < size -1 ; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        return sort(arr,size-1);
    }
}
int findMedian(int *arr, int size) {
    sort(arr, size);
    int median = (size/2);
    return arr[median];
    
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size ; i++ ){
        cin >> arr[i];
    }
    cout << findMedian(arr, size);
    return 0;
}
