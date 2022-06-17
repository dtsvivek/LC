#include <iostream>

using namespace std;

string longword;
int n;
 
main(){
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> longword;
        if(longword.length()>10){
            cout<<longword[0]<<longword.length()-2<<longword[longword.length()-1]<<endl;
        }else{
            cout<<longword<<endl;
        }

    }
}