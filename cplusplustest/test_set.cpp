
using namespace std;
#include <iostream>
#include <vector>
#include <set>

char findTheDifference(string s, string t)
{
    set<char> ss(begin(s), end(s));
    set<char> tt(begin(t), end(t));
    for (auto it = ss.begin(); it != ss.end(); ++it)
    {
        cout << *it;
    }
    cout<<endl;
    for(auto it = tt.begin();it!=tt.end();++it){
        cout<<*it;
    }
    cout<<endl;
    return 'c';
}

int main()
{
    cout << "test" << endl;
    findTheDifference("ZUUztzaabbcd", "ZPPztzaabbcde");
    return 0;
}