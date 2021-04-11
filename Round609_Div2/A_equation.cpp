//A_equation.cpp

#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int number){
    int x = 2;
    for (int i = 2; i < sqrt(number);i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,a,b;
    cin >> n;

    for (int i = 4; i < 99999999999;i++) {
        b = i;
        a = n + b;
        if (!isPrime(a) && !isPrime(b)){
            cout << a << " " << b << endl;
            break;
        }
    }
    return 0;
}