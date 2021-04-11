//1367C_Social_Distance.cpp
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int tcase;

    cin >> tcase;

    for (int t = 0 ; t < tcase ; t++){
        int n,k;
        int target;
        int  count = 0;
        string table;
        cin >> n >> k;
        cin >> table;
        for (int i = 0; i < n;i++){
            bool front = false;
            bool back = false;
            if (table[i] == '1'){
                continue;
            }
            else{
                target = i + 1;
                for (int j = target; j < target + k;j++){
                    if (j > n - 1){
                        //cout << "break f" << endl;
                        break;
                    } 
                    else{
                        if (table[j] == '1'){
                            //cout << "f1 : " << j << endl;
                            front = true;
                            break;
                        }
                        //cout << "f0 : " << j << endl;
                    }
                }
                if (!front){
                    target = i - 1;
                    for (int j = target; j > target - k;j--){
                        if (j < 0){
                            //cout << "break b" << endl;
                            break;
                        } 
                        else{
                            if (table[j] == '1'){
                                //cout << "b1 : " << j << endl;
                                back = true;
                                break;
                            }
                            //cout << "b0 : " << j << endl;
                        }
                    }    
                }
                if (!front && !back){
                    //cout << "update" << endl;
                    count++;
                    table[i] = '1';
                } 
            }
        }
        cout << count << endl;
        //cout << table << endl;
    }
}
