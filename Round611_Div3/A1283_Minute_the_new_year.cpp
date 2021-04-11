//A1283_Minute_the_new_year.cpp
#include<iostream>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    for (int tc = 0; tc < testCase; tc++){
        int h,m;
        cin >> h >> m;
        int result = (23 - h) * 60 + (60 - m);
        cout << result << endl;
    }
    return 0;
}