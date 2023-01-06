#include <iostream>
using namespace std;
#include<iomanip>
const float pie = 3.141592653;
int main (){
    cout << fixed << setprecision(9);
    double r ;
    cin >> r ;
    cout << pie*(r*r) << endl ;
}