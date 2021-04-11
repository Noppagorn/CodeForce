//1279A_new_year_garland.cpp

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main(){
    int tcase;
    cin >> tcase;

    for (int tc = 0; tc < tcase ; tc++){
        int arr[3] = {0};
        bool isMOre = true;
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);

        //cout << arr[0] << arr[1] << arr[2] ;

        if ( abs(arr[2] - arr[1]) <= 1 ){
            isMOre = false;
        }else{
            isMOre = true;
        }

        if (!isMOre){
            cout << "Yes" << endl;
        }else
        {
            cout << "No" << endl;
        }
        
    }

    return 0;
}