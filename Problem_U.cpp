#include <iostream>
using namespace std;
#include<iomanip>
int main (){
        cout << fixed << setprecision(3);
    float x ;
    cin >> x;
    if (x - int(x) == 0.000){
        cout << "int "<< int(x) << endl ;
    }else {
        cout << "float " << int(x) << " " << x-int(x) << endl ; 
    }
}