#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;

    cin >> t;

    for (int tcas = 0 ; tcas < t; tcas++)
    {
        int a,b,c,r;
        cin >> a >> b >> c >> r;
        if (a <= b){
            int minC = c - r;
            int maxC = c + r;
            int result = 0;
            int lenghtBefore = abs(a - minC);
            int lenghtAfter = abs(b - maxC);
            if (a > maxC || b < minC ){
                //cout << lenghtAfter << " " << lenghtBefore << endl;
                result = abs(b - a);
            }
            else if ((b >= minC && b <= maxC) && (a >= minC && a <= maxC))
            {
                result = 0;
            }
            else if (a >= minC && a <= maxC)
            {
                result = abs(maxC - b);
            }
            else if (b >= minC && b <= maxC)
            {
                result = abs(minC - a);
            }
            
            else
            {
                //cout << lenghtAfter << " " << lenghtBefore << endl;

                result = abs(lenghtAfter + lenghtBefore);
            }
            

            cout << result << endl;
        }
        else
        {
            //cout << "bb\n";
            int minC = c + r;
            int maxC = c - r;
            int result = 0;
            int lenghtBefore = abs(a - minC);
            int lenghtAfter = abs(b - maxC);

            if (a < maxC || b > minC ){
                //cout << lenghtAfter << " " << lenghtBefore << endl;
                result = abs(b - a);
            }
            else if ((b <= minC && b >= maxC) && (a <= minC && a >= maxC))
            {
                result = 0;
            }
            else if (a <= minC && a >= maxC)
            {
                //cout << "he1\n";
                result = abs(maxC - b);
            }
            else if (b <= minC && b >= maxC)
            {
                result = abs(minC - a);
            }

            else
            {
                //cout << "rlr\n";
                result = abs(lenghtAfter + lenghtBefore);
            }

            cout  << result << endl;

        }
        
    }
    
    return 0;
}