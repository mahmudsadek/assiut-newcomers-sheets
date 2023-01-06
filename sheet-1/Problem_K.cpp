#include <iostream>
using namespace std;
int main (){
    long long num1 , num2 , num3 , max , min , med ;
    cin >> num1 >> num2 >> num3 ;
    max = num1 ;
    if (max < num2){
        max = num2 ;
    }
    if (max < num3){
        max = num3 ;
    }
    min = num1 ;
    if (min > num2){
        min = num2 ;
    }
    if (min > num3){
        min = num3 ;
    }
    
    if (num1 >= min && num1 <= max )
    {
        med = num1;
    }
    if (num2 >= min && num2 <= max )
    {
        med = num2;
    }
    if (num3 >= min && num3 <= max )
    {
        med = num3;
    }
    
    cout << min << " " << max << endl ;
    

}