//1108D_diverse_garland.cpp
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    string color = "RGB";
    string colorLamp;
    int count = 0;
    vector<int> arrINt;
    cin >> n;
    cin >> colorLamp;
    for (int i = 0; i < n; i++){
        if (colorLamp[i] == 'R') arrINt.push_back(0);
        else if(colorLamp[i] == 'G') arrINt.push_back(1);
        else arrINt.push_back(2);
    }
    if (n == 2 && arrINt[0] == arrINt[1]){
            if (arrINt[0] == 0) arrINt[1] = 1;
            else if (arrINt[0] == 1) arrINt[1] = 2;
            else arrINt[1] = 0;
            count++;
        }
    else{
        for (int i = 0; i < n - 2; i++){
            int midle = i + 1;
            int last = i + 2;
        
            if (arrINt[i] == arrINt[midle]){
                if (arrINt[i] == arrINt[last]){
                    if (arrINt[i] == 0)arrINt[midle]++;
                    else if (arrINt[i] == 1)arrINt[midle]++;
                    else arrINt[midle] = 0; 

                    count++;
                }
                else{
                   if (arrINt[i] + arrINt[last] == 1)arrINt[midle] = 2; 
                   if (arrINt[i] + arrINt[last] == 2)arrINt[midle] = 1; 
                   if (arrINt[i] + arrINt[last] == 3)arrINt[midle] = 0; 

                    count++;
                }
            }
            if (i + 1 == (n - 2) && arrINt[midle] == arrINt[last] ){
                if (arrINt[midle] == 0) arrINt[last] = 1;
                else if (arrINt[midle] == 1) arrINt[last] = 2;
                else arrINt[last] = 0;
                count++;
            }
        
           }
        }
    cout << count << endl;
    for (int i = 0; i < n; i++){
        cout << color[arrINt[i]];

    }
    cout << endl;
/*
9
RBGRRBRGG
*/
    return 0;
}