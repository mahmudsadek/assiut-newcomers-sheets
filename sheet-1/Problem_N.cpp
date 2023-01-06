#include <iostream>
using namespace std ;
int main(){
    char x;
    cin >> x;
    int c = 0;

    if (int(x) >= 65 && int(x) <=90){
        c = int(x)+32;
    }
     else if (int(x) >= 97 && int(x) <=122){
        c = int(x)-32;
    }
    cout << char(c) << endl ;
}