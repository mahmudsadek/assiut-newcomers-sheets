#include <iostream>
using namespace std ;
int main(){
    char x;
    cin >> x;
    if (int(x)>=48&&int(x)<=57){
        cout << "IS DIGIT" << endl ;
    }
    else if (int(x) >= 65 && int(x) <=90){
        cout << "ALPHA" << endl << "IS CAPITAL" <<endl ;
    }
     else if (int(x) >= 97 && int(x) <=122){
        cout << "ALPHA" << endl << "IS SMALL" <<endl ;
    }
}