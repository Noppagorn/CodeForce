
#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[3]  = {0};

    for (int i = 0; i < n; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3); 
        int count = 0;
        arr[1] += arr[0];
        if (arr[1] > arr[2]){
            int x = (arr[1] - arr[2])/2;
            count = arr[2]  + x;
        }else {
            count = arr[1];
        }
        cout  << count << endl;
    }
    return 0;
}