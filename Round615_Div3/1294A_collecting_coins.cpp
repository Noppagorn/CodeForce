//1294A_collecting_coins.cpp
#include<iostream>
using namespace std;

int main(){
	int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++){
        int arr[3],n;
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        int maxn = 0;
        for (int i = 0 ; i < 3; i++){
            if (arr[i] > maxn){
                maxn = arr[i];
            }
        }
        for (int i = 0 ; i < 3 && n != 0; i ++ ){
            if (arr[i] == maxn) continue;
            else{
                
            }
        }

    }

}
