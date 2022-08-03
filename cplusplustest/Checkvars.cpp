#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //short int test = 2^15;
    
    //short int takes -2^15 to 2^15-1
    //unsigned short int takes 0 to 2^16-1

    //int takes -2^31 to 2^31
    //unsigned int takes 0 to 2^32-1

    //long int takes -2^31 to 2^31
    //unsigned long int takes 0 to 2^32-1

    long int ret = 0;
    int num = 2147483649;
    short int power= 0;
    while(num>2){
        num = num/2;
        power++;
    }
    cout<<power<<endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long : " << sizeof(long int) << endl;
    cout << "Size of long : " << sizeof(long long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
     
    cout << "Size of double : " << sizeof(double) << endl;
     
      return 0;
}