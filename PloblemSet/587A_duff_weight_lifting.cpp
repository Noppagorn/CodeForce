//587A_duff_weight_lifting.cpp
#include<iostream>
#include<vector>
using namespace std;

#define PRINT(x) cout << x

int main(){

    int n;
    vector<int> arr;
    int count = 0;
    cin >> n;
    for (int t = 0 ; t < n; t++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    if (n == 1){
        count++;
    }
    for (int i = 0; i < n - 1;i++){
        int j = i + 1;
        
        if ((arr[i] + arr[j]) % 2 == 0){
            arr[j] = arr[i] + arr[j];
        }
        else{
            /*PRINT("here ");
            PRINT(arr[i]);
            PRINT(" + ");
            PRINT(arr[j]);
            PRINT("\n"); */
            count++;
        }
        if (j == n - 1){
            //PRINT("here2\n");
            count++;
        }
    }
    cout << count << endl;
    return 0;
}