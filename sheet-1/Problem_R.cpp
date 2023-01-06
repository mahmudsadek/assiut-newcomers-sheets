#include <iostream>
using namespace std ;
int main(){
    long long x ;
    cin >> x ;
    cout << x/365 << " years" << endl ;
    x = x%365 ;
    cout << x/30 << " months" << endl ;
    x = x%30 ;
    cout << x << " days" << endl ;

}