#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int lonelyinteger(vector<int> &a) {
    sort(a.begin() , a.end());
    int result = 0;
    
    for (auto item = a.begin() ; item != a.end(); item+=2){
        if( *item != *(item+1) || sizeof(*item) != sizeof(*(item+1))){
            result = *item;
            break;
        }
    }
    return result;
}

int main(){
    vector <int> arr;
    int input;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++){
        cin >> input;
        arr.push_back(input);
    }

    cout << lonelyinteger(arr) << endl;

    return 0;
}