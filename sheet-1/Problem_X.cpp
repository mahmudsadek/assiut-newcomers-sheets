#include <iostream>
using namespace std;
int main (){
    long long L1 , R1 , L2 , R2 ;
    cin >> L1 >> R1 >> L2 >> R2 ;
    if (L2 >= L1 && L2 <= R1){
        cout << L2 << " " ;
        if (R1 <= R2){
            cout << R1 << endl;
        }else{
            cout << R2 << endl;
        }
    }
    else if (L1 >= L2 && L1 <= R2){
        cout << L1 << " " ;
        if (R1 <= R2){
            cout << R1 << endl;
        }else{
            cout << R2 << endl;
        }
    }else {
        cout << "-1" << endl;
    }
}