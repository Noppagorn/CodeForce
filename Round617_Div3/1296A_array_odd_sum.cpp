//1296A_array_odd_sum.cpp
#include<iostream>
using namespace std;

int main(){
    int tcase;
    cin >> tcase;
    for (int tc = 0 ; tc < tcase ; tc++){
        int num,sum = 0;
        cin >> num;
        for (int i = 0; i < num; i++){
		int temp;	
            	cin >> temp;
		sum += (temp % 2);
        }
	if (sum % 2 != 0){
		cout << "YES" << endl;
	}
	else if (sum-num != 0 && sum != 0){
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
