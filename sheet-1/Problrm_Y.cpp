#include <iostream>
using namespace std;
int main (){
    int  a , b ,c , d , x; 
    cin >> a >> b >> c >> d ;
    a = a %100;
    b = b %100;
    c = c %100;
    d = d %100;
    x = (a*b*c*d);
    if (x%100 <= 9){
        cout<<"0"<<x%100<<endl;
    }else{
        cout << x%100<<endl;
    }
    
    
}