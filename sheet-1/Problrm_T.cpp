#include <iostream>
using namespace std;
int main (){
    long long num1 , num2 , num3  ;
    cin >> num1 >> num2 >> num3 ;
    if (num1 <= num2 && num1 <= num3){
        cout<< num1 << endl ;
        if (num2 < num3){
            cout << num2 <<endl;
            cout << num3 <<endl ;
        }else{
            cout << num3 <<endl;
            cout << num2 <<endl ;
        }

    }else if (num2 <= num1 && num2 <= num3){
        cout<< num2 << endl ;
        if (num1 < num3){
            cout << num1 <<endl;
            cout << num3 <<endl ;
        }else{
            cout << num3 <<endl;
            cout << num1 <<endl ;
        }

    }else if (num3 <= num2 && num3 <= num1){
        cout<< num3 << endl ;
        if (num1 < num2){
            cout << num1 <<endl;
            cout << num2 <<endl ;
        }else{
            cout << num2 <<endl;
            cout << num1 <<endl ;
        }

    }
    cout << endl ;
    cout << num1 << endl << num2 << endl << num3 << endl ;
}