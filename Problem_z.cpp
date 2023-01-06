#include<iostream>
#include <math.h>
using namespace std;
int main(){
    long long a, b, c, d ;
    cin >> a >> b >> c >> d ;
    double r1 = b*log(a);
    double r2 = d*log(c);
    if (r1 > r2){
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
}