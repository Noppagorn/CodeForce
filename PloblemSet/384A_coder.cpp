#include<iostream>
using namespace std;

int main(){
    int n;
    bool stat = true;
    string result = "";
    int count = 0;
    cin >> n;
    for (int i = 0; i < n;i++ ){
        if (i % 2 == 0) stat = true;
        else stat = false;
        for (int j = 0 ; j < n;j++){
            if (stat){
                result += "C";
                count++;
            } 
            else{
                result += ".";
            }
            stat = !stat;
        }
        result +="\n";
    }
    cout << count << endl;
    cout << result << endl;
    return 0;
}