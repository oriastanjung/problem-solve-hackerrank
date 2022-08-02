#include <iostream>
#include <vector>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void timeConversion(string input) {
    int hour;
    hour = (input[0] - '0')*10 + (input[1] - '0');
    
    if (input[8] == 'P' && hour == 12){
        cout << to_string(hour);
    }
    else if (input[8] == 'P'){
        cout << to_string(hour+12);
    }else if (input[8] == 'A' && hour == 12){
        cout << to_string(hour-12)<< "0";
    }
    else{
        cout << input[0] << input[1];
    }
    
    for(int i = 2; i < input.size() - 2; i++) {
        cout << input[i];
    }
    

}

int main()
{
    string s;
    getline(cin, s);

    timeConversion(s);

    

    return 0;
}
