#include <iostream>
#include <cmath>
using namespace std;
int main (){

    int num1 ,num2 ;
    cin >> num1 >> num2 ;
    int swap ;
    if (num1 < num2){
        swap = num2 ;
        num2 = num1 ;
        num1 = swap ;
        if (num1 % num2 == 0){
            cout << "Multiples" << endl ;
        }else{
            cout << "No Multiples" << endl ;
        }
    }else {
                if (num1 % num2 == 0){
            cout << "Multiples" << endl ;
        }else{
            cout << "No Multiples" << endl ;
        }
    }
}
// better code 
/*
if (num1%num2==0 || num2%num1==0){
    cout << "Multiples" << endl ;
}else{
    cout << "No Multiples" << endl ;
}
*/