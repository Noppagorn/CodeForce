#include<iostream>
#include <vector> 
#include<algorithm>
using namespace std;

int main(){
    int tcase;
    cin >> tcase;
    for (int tc = 0 ;tc < tcase;tc++){
        vector<int> arr;
        int len;
        cin >> len;
        for (int i = 0; i < len;i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        int count = 0;
        for (int i = 0; i < len;i++){
            if (i+1 < len){
                if (arr[i+1] - arr[i] > 1){
                    count++;
                } 
            }
        }
        if (count < 1){
            cout << "YES" << endl;
        }
        else{
            cout <<  "NO" << endl;
        }
    }
    return 0;
}