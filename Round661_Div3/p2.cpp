#include<iostream>
#include <vector>
using namespace std;

int main(){
    int tcase;
    cin >> tcase;
    for (int tc = 0 ;tc < tcase;tc++){
        vector<long int> a;
        vector<long int> b;
        long int min_a = 1000000000;
        long int min_b = 1000000000;
        int len;
        cin >> len;
        for (int i = 0; i < len;i++){
            long int ta;
            cin >> ta;
            a.push_back(ta);
            if (ta < min_a){
                min_a = ta;
            }
        }
        for (int i = 0; i < len;i++){
            long int tb;
            cin  >> tb;
            b.push_back(tb);
            if (tb < min_b){
                min_b = tb;
            }
        }
        long long int result = 0;
        for (int i = 0; i < len;i++){
            long int ta = a[i] - min_a;
            long int tb = b[i] - min_b;
            if (ta > tb){
                result += ta;
            }
            else{
                result += tb;
            }
        }
        cout << result << endl;

    }
    return 0;
}