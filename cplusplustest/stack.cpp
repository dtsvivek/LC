
#include <stack>
#include<iostream>
using namespace std;

int main(){
    stack <int> in;
    in.push(11);
    in.pop();
    cout<<in.top();
    return 0;
}